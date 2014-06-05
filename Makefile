LDFLAGS=-lncurses

CC=clang

all: box goodbye cls add1 add2 add3 yoda typewriter string1 string2 sushi twinkle annoy colortest colorme color_me bgcolor1 bgcolor2 notice

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
	rm -rf twinkle
	rm -rf annoy
	rm -rf colortest
	rm -rf colorme
	rm -rf color_me
	rm -rf bgcolor1
	rm -rf bgcolor2
	rm -rf notice
