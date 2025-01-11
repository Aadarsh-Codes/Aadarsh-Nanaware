/**
  *@file: if_else.c
  *@brief: demonstration of if_else using c language
  *@author: Aadarsh Nanaware(nanawareaadarsh7@gmail.com)
  *@date: 22 July 2023

  */

// Hader file

#include <stdio.h>
#include <stdlib.h>

//Global Data Dfination

int inum1 = 20;

int main(void)

{
	//code

	if(10== inum1)
	{
		// true Block
		printf("inum1 is 10\n");
	}	
	else
	{
		//False Block
		printf("inum1 is not 10\n");

	}
	printf("EXIT");

	exit(0);
}