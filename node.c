//**************************************
// Group 8
// Binary Tree Implementation
// Node Functions
// CSCI 205
// Last Edit: 11:36 03/13/19
//**************************************

#include <stdio.h>
#include "node.h"

// recursive function used to detemine a tree's height. Recurses down the left,
// then right children of the node, if they exist, then prints the node's value
int heightRecurse(node* recurseNode) {
    int heightCounter;
    int leftDepth;
    int rightDepth;

    // if no node exists (tree is empty or we've reached the end of a branch),
    // return 0
    if(recurseNode == 0) {
        heightCounter = 0;
    }
    else {
        leftDepth = heightRecurse(recurseNode->left);
        rightDepth = heightRecurse(recurseNode->right);

        if(leftDepth > rightDepth) {
            // add one to results to account for height added by this node
            heightCounter = leftDepth + 1;
        }
        else {
            // add one to results to account for height added by this node
            heightCounter = rightDepth + 1;
        }
    }

    return heightCounter;
}

// print left if it exists, print this node's value, then print right
void printInOrderRecurse(node* recurseNode) {
    if(recurseNode->left != 0) {
        printInOrderRecurse(recurseNode->left);
    }

    printf("%d ", recurseNode->number);

    if(recurseNode->right != 0) {
        printInOrderRecurse(recurseNode->right);
    }
}