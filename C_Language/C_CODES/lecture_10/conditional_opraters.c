/**
 * @file: conditional_operators.c 
 * @brief: Demonstration of Conditional Operators in C
 * @author: MarshallingVoid(marshallingvoid@gmail.com)
 * @Copyright ©2020-2023 MarshallingVoid
 * @date: 21 July 2023 (Friday) 09:15:31 PM
 */

// Headers
#include	<stdio.h>
#include	<stdlib.h>

// Global Object Definitions
int inum1 = 10;
int inum2 = 20;

int main(void)
{
	// Code

	printf("inum1 < inum2 = %d\n", inum1 < inum2);

	printf("inum1 > inum2 = %d\n", inum1 > inum2);

	printf("inum1 == inum2 = %d\n", inum1 == inum2);

	printf("inum1 != inum2 = %d\n", inum1 != inum2);

	printf("inum1 >= inum2 = %d\n", inum1 >= inum2);

	printf("inum1 <= inum2 = %d\n", inum1 <= inum2);

	exit(0);
}

