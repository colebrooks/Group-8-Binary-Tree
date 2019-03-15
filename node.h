//**************************************
// Group 8
// Binary Tree Implementation
// Node Struct
// CSCI 205
//**************************************




#ifndef NODE_H
#define NODE_H

typedef struct node_struct {
    int number;
    struct node_struct* left;
    struct node_struct* right;
} node;

int heightRecurse(node* recurseNode);
void printInOrderRecurse(node* recurseNode);

#endif
