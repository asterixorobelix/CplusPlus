/*
Chapter 7, programming project 5
Write a program which reads in a list of integers into an array with base type int. 
The program should request a file name. 
You may assume that there are fewer than 50 entries in the array. 
Your program should determine how many entries there are. The output is to be a two-column list. 
The first column is a list of the distinct array elements; 
the second column is the count of the number of occurrences of each element. The list should be sorted on entries in the first column, largest to smallest.
For example, for the input:
-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12
the output should be: 
N Count
4 2
3 3
2 2
1 4
-1 1
-12 4
*/

#include "ArrayFile.h"
#include <array>
#include <iostream>

int main() {
	ArrayFile arrayF = ArrayFile("IntegerList");
	arrayF.GetElementCount();

}