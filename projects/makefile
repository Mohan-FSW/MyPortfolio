
output: main.o p.o
	gcc main.o p.o -o output

main.o: main.c
	gcc -c main.c

p.o: p.c 
	gcc -c p.c

clean: rm *.o output
