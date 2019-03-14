//**************************************
// Group 8
// Binary Tree Implementation
// Main Function
// CSCI 205
// Last Edit: 11:33 03/13/19
//**************************************

#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

int main() {
   binary_tree bt;
   bool found = false;

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
}

/*Program should exit with code 1 and print an error message if the number of command line arguments is wrong.
Program should exit with code 1 and print an error message if the input file does not exist.*/
