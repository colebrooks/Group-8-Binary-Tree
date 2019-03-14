//**************************************
// Group 8
// Binary Tree Implementation
// Binary Tree Functions
// CSCI 205
// Last Edit: 11:29 03/13/19
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

bool search(binary_tree* bt, int key){ //UNTESTED
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

void insert(binary_tree* bt, int item){ //UNTESTED
    node* temp = bt->rootNode;
    node* newNode = (node*)malloc(sizeof(node));
    newNode->number = item;
    newNode->left = NULL;
    newNode->right = NULL;

    if(bt->numberElements == 0) {
        bt->rootNode = newNode;
        return;
    }

    while(true) {
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
}

void printinorder(binary_tree* bt){ // also untested
    // calls function defined in node.c
    if(btsize(bt) == 0) {
        printInOrderRecurse(bt->rootNode);
    }
    printf("\n");
}

void printpreorder(binary_tree* bt){

}

void printpostorder(binary_tree* bt){

}

int btsize(binary_tree* bt){

}

int treeheight(binary_tree* bt){ // untested
    // calls function defined in node.c
    return heightRecurse(bt->rootNode);
}
