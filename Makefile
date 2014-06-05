LDFLAGS=-lncurses

CC=clang

all: box goodbye cls add1 add2 add3 yoda typewriter string1 string2 sushi

clean:
	rm -rf box
	rm -rf goodbye
	rm -rf cls
	rm -rf add1
	rm -rf add2
	rm -rf add3
	rm -rf yoda
	rm -rf typewriter
	rm -rf string1
	rm -rf string2
	rm -rf sushi
