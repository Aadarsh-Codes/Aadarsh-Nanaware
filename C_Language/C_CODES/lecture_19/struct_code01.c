/**
 * S.G.M.P
 * @file: struct_code01.c
 * @brief: Code to check the size of struct
 * @author: MarshallingVoid(marshallingvoid@gmail.com)
 * @Copyright ©2020-2023 MarshallingVoid
 * @date: 
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// Global Type Definition
struct Demo
{
	// Members
	int inum;			//	4		OFFSET = 0
	long long lnum;		//	8 		OFFSET = 8
	float fnum;			//	4 		OFFSET = 16
	short snum;			//	2 		OFFSET = 20
};						//	18 + 6

// Global Data Definition
struct Demo d1;

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	printf(" sizeof(struct Demo) = %zd\n", sizeof(struct Demo));

	// Data Write Dot Operator
	d1.inum = 1234;
	d1.lnum = 348967245;
	d1.fnum = 12434.123;
	d1.snum = 90;

	// Data Read Dot Operator
	printf("d1.inum = %d\n", d1.inum);
	printf("d1.lnum = %lld\n", d1.lnum);
	printf("d1.fnum = %f\n", d1.fnum);
	printf("d1.snum = %hd\n", d1.snum);

	printf("EXIT\n");
	exit(0);
}


