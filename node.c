//**************************************
// Group 8
// Binary Tree Implementation
// Node Functions
// CSCI 205
//**************************************

#include <stdio.h>
#include "node.h"

// recursive function used to detemine a tree's height
// if a tree is just a root, it has height 0
int heightRecurse(node* recurseNode) {
    int heightCounter;
    int leftHeight = 0;
    int rightHeight = 0;

    // check if neither child exists. If the node has no children, return 0
    if(recurseNode->left == 0 && recurseNode->right == 0) {
        return 0;
    }
    else{
        // check that left branch exists. If yes, recurse
        if(recurseNode->left != 0) {
            leftHeight = heightRecurse(recurseNode->left);
        }
        
        //check that right branch exists. If yes, recurse
        if(recurseNode->right != 0) {
            rightHeight = heightRecurse(recurseNode->right);
        }

        if(leftHeight > rightHeight) {
            heightCounter = leftHeight + 1;
        }
        else {
            heightCounter = rightHeight + 1;
        }

        return heightCounter;
    }
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

void printPostOrderRecurse(node* recurseNode) {
    //check to see if node is empty
    if (recurseNode == 0)
        return;
    //recur left subtree
    printPostOrderRecurse(recurseNode->left);
    //recur right subtree
    printPostOrderRecurse(recurseNode->right);
    //go to the root
    printf("%d ", recurseNode->number);

}