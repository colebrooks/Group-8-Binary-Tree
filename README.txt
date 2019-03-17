//**************************************
// Group 8
// Binary Tree Implementation
// README
// CSCI 205
// Last Edit: 12:19 03/08/19
//**************************************

This is a binary search tree implemented in C by Group 8 in the Spring 2019
section of CSCI 205 at the University of Montana. It supports reading in
space separated integers from a file specified at runtime through a command
line argument. The various functions available are:

	void initialize(binary_tree* bt);
		Sets the size of the new tree to zero.

	void insert(binary_tree* bt, int item);
		Inserts a new node containing the given item into the tree.

	bool search(binary_tree* bt, int key);
		Returns whether given key is in the tree.

	void printinorder(binary_tree* bt);
		Prints the tree contents from smallest node to largest.

	void printpreorder(binary_tree* bt);
		Prints sequence of nodes derived from preorder traversal.

	void printpostorder(binary_tree* bt);
		Prints sequence of nodes derived from postorder traversal.

	int btsize(binary_tree* bt);
		Returns number of node in the tree.

	int treeheight(binary_tree* bt);
		Returns height of the tree.

In addition to the above functions, there is also a makefile, and a bash
script for testing the functionality of the program.


Group members: Cole Brooks, Conner Copeland, Brendan Hagan, Brooke Kern
