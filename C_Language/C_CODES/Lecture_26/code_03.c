/**
 *@file: code_03.c
 *@brief: Implemention of Three level pointer
 *@author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
 *@date : 18 august 2023

 */

// Header file
#include<stdio.h>
#include<stdlib.h>

//Global Data Defination

 int inum = 234;
 // inum is an object of type integer

 // Define pointer to integer 
 int*iptr1= &inum;

 // Define pointer to pointer to integer
 int** iptr2 = &iptr1;

 // Define pointer to pointer to pointer to integer
 int*** iptr3 = &iptr2;

 int main(int argc,char** argv,char** envp)

 {
 	 //code

 	printf(" inum = %d\n",inum);
 	printf(" &inum = %p\n",&inum);

 	printf("\n\n");
 	printf(" iptr1 = %p\n",iptr1);
 	printf(" *iptr1 = %d\n",*iptr1);
 	printf(" &iptr1 = %p\n",&iptr1);

   printf(" \n\n");
   printf(" iptr2 = %p\n",iptr2);
   printf(" *iptr2 = %p\n",*iptr2);
   printf(" **iptr2 = %d\n",**iptr2);
   printf(" &iptr2 = %lld\n",&iptr2 );

   printf("\n\n");
   printf(" iptr3 = %p\n",iptr3);
   printf(" *iptr3 = %p\n",*iptr3);
   printf(" **iptr3 = %p\n",**iptr3);
   printf(" ***iptr3 = %d\n",***iptr3);
   printf(" &iptr3 = %p\n",&iptr3);

   exit(0);
 }