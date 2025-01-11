

/**
 * S.G.M.P
 * @file: struct_code01.c
 * @brief: Code to check the size of struct
 * @author: Aaryan Nanaware(nanawareaaryan136@gmail.com)
 * 
 * @date: 
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// macros
#define OFFSETOF(type, mem)	((long long)&(((type*)0)->mem))

// Global Type Definition
struct Demo
{
	// Members
	short snum;			//	2 	OFFSET = 0
						//	PADDING 6
	long long lnum;		//	8 	OFFSET = 8
	char cnum;			//	1 	OFFSET = 16
	short snum2;		//	2 	OFFSET = 18
	int inum;			//	4 	OFFSET = 20
						// 	PADDING 1
};						//	24

struct Demo2
{
	// Members
	short snum;			//	2 	OFFSET = 0 	2 
						// 	PADDING 2
	int inum;			//	4 	OFFSET = 2 	4
	short snum2;		//	2 	OFFSET = 8 	2

	long long lnum;		//	8 	OFFSET = 16 8

	char cnum;			//	1 	OFFSET = 24	8

};						//	17 + 7 

// Global Data Definition

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	printf(" sizeof(struct Demo) = %zd\n", sizeof(struct Demo));
	printf(" sizeof(struct Demo) = %zd\n", sizeof(struct Demo2));

	printf(" offsetof(snum) = %lld\n", OFFSETOF(struct Demo2, snum));
	printf(" offsetof(inum) = %lld\n", OFFSETOF(struct Demo2, inum));
	printf(" offsetof(snum2) = %lld\n", OFFSETOF(struct Demo2, snum2));
	printf(" offsetof(lnum) = %lld\n", OFFSETOF(struct Demo2, lnum));
	printf(" offsetof(cnum) = %lld\n", OFFSETOF(struct Demo2, cnum));

	printf("EXIT\n");
	exit(0);
}



