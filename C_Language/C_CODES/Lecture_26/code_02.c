/**
  *
  *@file: code_02.c
  *@brief: Implemention of Double Level pointer
  *@author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *@date :  18 August 2023

  */

//  Header File

#include<stdio.h>
#include<stdlib.h>

// Global Dada defination 

int inum = 234;
// inum is an object of type integer

// Defination of pointer to integer
int* iptr1= &inum;

// Defination of pointer to pointer to integer
int** iptr2 = &iptr1;

int main(int argc,char** argv,char** envp)

{
	//code

	printf(" inum = %d\n",inum);
	printf(" &inum = %p\n", &inum);

	printf("\n\n");
	printf(" iptr1 = %p\n",iptr1);
	printf(" *iptr1 = %d\n",*iptr1);
    printf(" &iptr1 = %p\n", &iptr1);

    printf("\n\n");
    printf(" iptr2 = %p\n",iptr2);
    printf("  *iptr2 = %p\n",*iptr2);
    printf(" **iptr2 = %d\n",**iptr2);

    printf("\n\n");

    exit(0);



}
