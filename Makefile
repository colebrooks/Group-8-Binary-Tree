bst.exe : main.o binarytree.o node.o
	gcc main.o binarytree.o node.o -o bst.exe

main.o : main.c binarytree.c binarytree.h node.c node.h
	gcc -Wall -c main.c

binarytree.o : binarytree.c binarytree.h node.c node.h
	gcc -Wall -c binarytree.c
	
node.o : node.c node.h
	gcc -Wall -c node.c

clean :
	rm *.o bst.exe
