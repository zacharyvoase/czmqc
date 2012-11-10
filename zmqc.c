#include <stdio.h>
#include <stdlib.h>
#include <zmq.h>

#define die(code, message, ...) { fprintf(stderr, message, ##__VA_ARGS__); exit(code); }
#define ensure(X) if (X != 0) { die(1, "Assertion failed (errno = %d)\n", errno); }

// Free the char* returned by fgetln(). Well, we don't actually need to.
void free_fgetln(void *data, void *hint) {
  return;
}

int main(int argc, char *argv[]) {
  void *context = zmq_init(1);
  if (context == NULL) { die(1, "Couldn't create a context.\n"); }

  void *sock = zmq_socket(context, ZMQ_PUSH);
  if (argc < 2) { die(1, "Specify an address to connect to.\n"); }

  ensure(zmq_connect(sock, argv[1]));

  {
    zmq_msg_t msg;
    size_t msg_len;
    char *msg_string = fgetln(stdin, &msg_len);
    zmq_msg_init_data(&msg, msg_string, msg_len, free_fgetln, NULL);
    zmq_send(sock, &msg, 0);
    fprintf(stderr, "Sent.\n");
    zmq_msg_close(&msg);
  }
  zmq_close(sock);
  zmq_term(context);
}
