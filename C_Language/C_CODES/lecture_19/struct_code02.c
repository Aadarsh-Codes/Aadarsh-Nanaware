

/**
 * S.G.M.P
 * @file: struct_code01.c
 * @brief: Code to check the size of struct
 * @author: Aaryan Nanaware (nanawareaaryan1306@gmail.com) 
 *  * @date: 
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// Global Type Definition
struct Demo
{
	// Members
	int inum;			//	4		OFFSET = 0
	short snum;			//	2 		OFFSET = 4
	char cnum;			//	1 		OFFSET = 6
						// 	1 		PADDING
	long long lnum; 	//	8 		OFFSET = 8
};						//	15 + 1 

// Global Data Definition

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	printf(" sizeof(struct Demo) = %zd\n", sizeof(struct Demo));

	printf("EXIT\n");
	exit(0);
}



