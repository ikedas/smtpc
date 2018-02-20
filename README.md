smtpc - SMTP / LMTP client
==========================

**smtpc** is an email client.
It reads a message from standard input and submits it to email server through
socket.

Install
-------

  * If you checked out the source from repository, run `autoreconf` in advance:
    ``` bash
    $ autoreconf -i
    ```

Extract source, move into top directory of source, then run:
``` bash
$ ./configure (...options...)
$ make
# make install
```

Usage
-----

See [smtpc.1.md](smtpc.1.md).

