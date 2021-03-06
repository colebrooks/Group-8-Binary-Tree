//**************************************
// Group 8
// Binary Tree Implementation
// Binary Tree Functions
// CSCI 205
//**************************************

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "binarytree.h"
#include "node.h"

void initialize(binary_tree* bt){
    bt->numberElements = 0;
    bt->rootNode = NULL;
}

bool search(binary_tree* bt, int key){
    //Returns whether given query is in the tree.
    node* temp = bt->rootNode;
    while(temp != NULL) {
        if(temp->number == key) {
            return true;
        }
        if(key < temp->number) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
    return false;
}

void insert(binary_tree* bt, int item){
    //Inserts new node into tree & increments numberElements.
    node* temp = bt->rootNode;
    node* newNode = (node*)malloc(sizeof(node));
    newNode->number = item;
    newNode->left = NULL;
    newNode->right = NULL;

    if(bt->numberElements == 0) {
        bt->rootNode = newNode;
        bt->numberElements++;
        return;
    }

    while(true) { //Traverses tree to find insertion point.
        if(newNode->number < temp->number) {
            if(temp->left != NULL) {
                temp = temp->left;
            }
            else {
                temp->left = newNode;
                break;
            }
        }
        else {
            if(temp->right != NULL) {
                temp = temp->right;
            }
            else {
                temp->right = newNode;
                break;
            }
        }
    }
    bt->numberElements++;
    return;
}

void printinorder(binary_tree* bt){
    //Calls function defined in node.c.
    if(btsize(bt) != 0) {
        printInOrderRecurse(bt->rootNode);
    }
}

/* print the tree in the order root->left->right */
void printpreorder(binary_tree* bt){
	if (bt->rootNode == NULL) return;
	/* call function defined in node.c */
	printPreOrderRecurse(bt->rootNode);
}

void printpostorder(binary_tree* bt){
    if(btsize(bt) != 0) {
        printPostOrderRecurse(bt->rootNode);
    }
}

int btsize(binary_tree* bt){
    return(bt->numberElements);
}

int treeheight(binary_tree* bt){ //NEEDS BUG FIX
    //Calls function defined in node.c.
    return heightRecurse(bt->rootNode);
}
