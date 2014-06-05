LDFLAGS=-lncurses

CC=clang

all: box goodbye cls add1

clean:
	rm -rf box
	rm -rf goodbye
	rm -rf cls
	rm -rf add1
