#!/bin/bash
#this script will test for proper output when errors occur
./bst.exe myfile.txt
# tests first text file
./bst.exe myfile2.txt
#tests second text file
./bst.exe myfile3.txt
#tests third text file
./bst.exe
#tests for error code with invalid number of cmd line args
./bst.exe foo.txt
#tests for error code invalid input file
