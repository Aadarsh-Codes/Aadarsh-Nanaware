/**
 * S.G.M.P
 * @file: code_06_print_pattern.c
 * @brief: Code to print star
 * @author: AadarshNanaware(nanawareaadarsh7@gmail.com)
 * @date: 03 August 2023 
 */

// Header
#include <stdio.h>
#include <stdlib.h>


// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	// print pattern
	//for( int le = 0; le < 20; le++)
	for( int le = 19; le >= 0; le--)
	{
		// Loop Body
		if( 0 == le % 2 )
		{
			// True Block
			printf("* ");
		} 
		else
		{
			// False Block
			printf("# ");
		}
	}

	printf("\nEXIT\n");
	exit(0);
}