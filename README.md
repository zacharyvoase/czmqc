# czmqc (or, *zmqc redux*)

This project is an attempt to re-implement [zmqc][zmqc-python] in portable C.
The plan is for it to eventually become the canonical implementation, but for
now it remains a side-project as I improve my C coding skills.

  [zmqc-python]: http://zacharyvoase.github.com/zmqc

## rationale

I feel that zmqc is a very useful utility (it certainly has been for me). But
it's written in Python at the moment, and that introduces some issues regarding
packaging and distribution which I would like to get rid of. My goal is to be
able to distribute single-file statically-linked binaries for OS X and Linux.

A fringe benefit of the rewrite will, of course, be a dramatic speed-up.

## license

The original parts of this software are covered by the [unlicense][]:

  [unlicense]: http://unlicense.org/

> This is free and unencumbered software released into the public domain.
>
> Anyone is free to copy, modify, publish, use, compile, sell, or distribute
> this software, either in source code form or as a compiled binary, for any
> purpose, commercial or non-commercial, and by any means.
>
> In jurisdictions that recognize copyright laws, the author or authors of this
> software dedicate any and all copyright interest in the software to the
> public domain. We make this dedication for the benefit of the public at large
> and to the detriment of our heirs and successors. We intend this dedication
> to be an overt act of relinquishment in perpetuity of all present and future
> rights to this software under copyright law.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
> IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
> FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
> AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
> ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
> WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
>
> For more information, please refer to <http://unlicense.org/>

## contribution

I'm not actively looking for contributors at the moment, but I'll likely
require you to assign copyright to my corporation so that I can manage the IP
of the project in the future without having to chase up potentially-unreachable
contributors. If this is a problem, send me an e-mail and we'll work it out.
