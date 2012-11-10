.PHONY: clean

build/zmqc: zmqc.c
	cc zmqc.c -Wall -g `pkg-config --static --libs --cflags libzmq` -o build/zmqc

clean:
	rm -Rf build/*
