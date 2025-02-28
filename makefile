ABC.exe:big2.o main.o fact.o
	gcc -o ABC.exe big2.o main.o fact.o
big2.0:big2.c
	gcc -c big2.c
main.0:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
