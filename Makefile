CC=g++

LIBS=-lm

CFLAGS=-Wall -Wextra -Ofast
LFLAGS=-s $(LIBS)

OBJS=main.o complex.o
DEPS=complex.h

BIN=complex

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN): $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)
