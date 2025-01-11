/**
 * S.G.M.P
 * @file: array_01.c 
 * @brief: Demonstration of array in C
 * @author:  AadarshNanaware (nanawareaadarsh7@gmail.com)
 * 
 * 
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Defining Array

int inum = 10;

int iarr[500] = {0} ; 	//	500 * 4 = 2000
// iarr is an array
//		of 5 elements
//			of type integer 
// first index = 0
// last index = 499

int main(int argc, char** argv, char** envp)
{
	// Code

	//	Write operation on array using subscipt operator
	/*
	iarr[0] = 10;
	iarr[1] = 20;
	iarr[2] = 30;
	iarr[3] = 40;
	iarr[4] = 50;
	*/

	// Write operation
	// loop
	for( int le = 0; le <= 499; le++)
	{
		// Loop Body
		iarr[le] = le+1;
	}

	// Read Operation on array using subscript operator
	// Read operation
	for( int le = 0; le <= 499; le++)
	{
		// Loop Body
		printf("iarr[%d] = %d\n", le, iarr[le]);
	}

	exit(0);
}
