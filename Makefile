LDFLAGS=-lncurses

CC=clang

all: box goodbye cls add1 add2

clean:
	rm -rf box
	rm -rf goodbye
	rm -rf cls
	rm -rf add1
	rm -rf add2
