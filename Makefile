all:
	gcc -o randMus randMus.c
run:
	./randMus | aplay
