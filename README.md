---
author:
- 'Cole Brooks, Conner Copeland, Brooke Kern, Brendan Hagan'
date: '15-03-2019'
title: |
    Group Eight Binary Tree Implemented in C University of Montana Spring
    2019 CSCI 205
---

Overview
========

#### 

This is a binary search tree implemented in C by Group 8 in the Spring
2019 section of CSCI 205 at the University of Montana. It supports
reading space separated integers from a file specified at runtime
through a command line argument. A full list and description of the
available functions can be found in the \"Function Documentation\"
section below. In addition to the functions supplied within the source
code, the repository includes a makefile, and a bash script for testing
the functionality of the program.

Function Documentation
======================

-   void initialize(binarytree\* bt);

    -   Sets the size of the new tree to zero.

-   void insert(binarytree\* bt, int item);

    -   Inserts a new node containing the given item into the tree.

-   bool search(binarytree\* bt, int key);

    -   Returns whether given key is in the tree.

-   void printinorder(binarytree\* bt);

    -   Prints the tree contents from smallest node to largest.

-   void printpreorder(binarytree\* bt);

    -   Prints sequence of nodes derived from preorder traversal.

-   void printpostorder(binarytree\* bt);

    -   Prints sequence of nodes derived from postorder traversal.

-   int btsize(binarytree\* bt);

    -   Returns number of node in the tree.

-   int treeheight(binarytree\* bt);

    -   Returns height of the tree.
