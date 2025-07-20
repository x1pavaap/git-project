ABC.exe:main.o big.o factorial.o
	gcc -o ABC.exe main.o big.o factorial.o
main.o:main.c
	gcc -c main.c
big.o:big.c
	gcc -c big.c
factorial.o:factorial.c
	gcc -c factorial.c
