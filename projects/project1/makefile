project1: sorting.o helpers.o main.o
	gcc -o project1 sorting.o helpers.o main.o

sorting.o: sorting.h sorting.c
	gcc -c sorting.c

helpers.o: helpers.h helpers.c
	gcc -c helpers.c

main.o: main.c helpers.h helpers.c sorting.h sorting.c
	gcc -c main.c

run:
	./project1

clean:
	rm -f sorting.o main.o helpers.o project1
