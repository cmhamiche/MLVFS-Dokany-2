# Copyright (c) 2014 Cesanta Software
# All rights reserved

PROG = multi_threaded_server
CFLAGS = -W -Wall -I../.. -pthread -g -O0 -DMONGOOSE_ENABLE_THREADS $(CFLAGS_EXTRA)
SOURCES = $(PROG).c ../../mongoose.c

$(PROG): $(SOURCES)
	$(CC) -o $(PROG) $(SOURCES) $(CFLAGS)

clean:
	rm -rf $(PROG) *.exe *.dSYM *.obj *.exp .*o *.lib
