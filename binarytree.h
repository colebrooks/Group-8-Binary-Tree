//**************************************
// Group 8
// Binary Tree Implementation
// Binary Tree ADT
// CSCI 205
// Last Edit: 11:33 03/13/19
//**************************************

#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <stdbool.h>
#include "node.h"

typedef struct binarytree_struct {
    int numberElements;
    node* rootNode;
} binary_tree;

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

#endif
