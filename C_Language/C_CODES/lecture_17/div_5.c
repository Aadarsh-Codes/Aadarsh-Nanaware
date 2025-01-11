/**
 * S.G.M.P
 * @file: code_03_div_5.c
 * @brief: Implementation of Divisibility by 5
 * @author: AadarshNanaware(nanawareaadarsh7@gmail.com)
 * @date: 03 August 2023 
 */

// Header
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
int number = 105;

// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	if( 0 == number % 5  )
	{
		// True
		printf("%d is Divisible by 5\n", number);
	}
	else
	{
		// False
		printf("%d is not Divisible by 5 \n", number);
	}

	printf("EXIT\n");
	exit(0);
}