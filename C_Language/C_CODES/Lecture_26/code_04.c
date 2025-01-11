/**
  *@file: code_04.c
  *@brief: Iplemention of Four level pointer 
  *@author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *@date : 18 August 2023

  */

// Header file 

#include<stdio.h>
#include<stdlib.h>

//global Dada Defination

int inum = 243;
//inum is an object of type integer

//Define pointer to integer
int* iptr1= &inum;

//Define pointer to pointer to integer
int** iptr2 = &iptr1;

//Define pointer to pointer to pointer to integer
int*** iptr3 = &iptr2;

//Define pointer to pointer to pointer to pointer to pointer to integer
int**** iptr4 = &iptr3;

int main( int argc,char** argv,char** envp)
{
	//code

	printf(" inum = %d\n",inum);
	printf(" &inum = %lld\n",&inum);

	printf("\n\n");
	printf("iptr1 = %lld\n",iptr1);
	printf(" *iptr1 = %lld\n",*iptr1);
	printf(" &iptr1 = %d\n",&iptr1);

	printf(" \n\n");
	printf(" iptr2 = %lld\n",iptr2);
	printf(" *iptr2 = %lld\n",*iptr2);
	printf("**iptr2 = %lld\n",**iptr2);
	printf(" &iptr2 = %d\n",&iptr2);

	printf("\n\n");
	printf(" iptr3 = %lld\n",iptr3);
	printf(" *iptr3= %lld\n",*iptr3);
	printf(" **iptr3 = %lld\n",**iptr3);
	printf(" ***iptr3 = %lld\n",***iptr3);
	printf(" &iptr3 = %d\n",&iptr3);

	printf("\n\n");
	printf(" iptr4 = %lld\n",iptr4);
	printf(" *iptr4 = %lld\n",*iptr4);
	printf(" **iptr4 = %lld\n",**iptr4);
	printf(" ***iptr4 =%lld\n",***iptr4);
	printf(" ****iptr4 = %d\n",****iptr4);

	exit(0);
} 