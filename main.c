//**************************************
// Group 8
// Binary Tree Implementation
// Main Function
// CSCI 205
//**************************************

#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

int main(int argc, char* argv[]) {
    FILE* inFile = NULL;
    binary_tree bt;
    bool found = false;

    if(argc != 2) {
        printf("Error: Invalid number of command line arguments.\n");
        return 1;
    }

    initialize(&bt);

    inFile = fopen(argv[1], "r");

    if(inFile == NULL) {
        printf("Error: File not opened.\n");
        return 1;
    }

    int item;
    while(fscanf(inFile, "%d", &item) == 1) {
        insert(&bt, item);
    }
    fclose(inFile);

    printf("Print in order\n");
    printinorder(&bt);
    printf("\nPrint pre order\n");
    printpreorder(&bt);
    printf("\nPrint post order\n");
    printpostorder(&bt);
    printf("\n");
    found = search(&bt,33);
    if (found){
       printf("FOUND 33\n");
    }
    found = search(&bt,38);
    if (found){
       printf("FOUND 38\n");
    }
    printf("Number of elements in tree: %d\n", btsize(&bt));
    printf("Tree height: %d\n", treeheight(&bt));

    return 0;
}

