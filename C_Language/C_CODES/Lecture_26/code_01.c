/**
  *@file: code_01.c
  *@brief: Implemention of single level pointer
  *@author: Aadarsh Nanaware(nanawareaadarsh7@gmail.com)
  *@date : 18 August 2023

  */

// Header File
  
  #include<stdio.h>
  #include<stdlib.h>

//Global Dada Defination

int inum = 234;
// inum is an object of type integer

//Defination a pointer to integer
int* iptr1 = &inum;

int main(int argc,char** argv, char** envp)

{
	 //code 
	printf(" inum = %d\n", inum);
	printf(" &inum = %p\n",&inum);

	printf(" iptr = %p\n",iptr1);
	printf(" *iptr1 = %d\n",*iptr1);

	exit(0);
}