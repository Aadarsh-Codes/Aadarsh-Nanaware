/**
 *S.G.M.P
 *@file: pointer_01.c
 *@brief: Dmonstration of pointer,
 Refrence Operetor and Derefernce Operater
 *@auther: AadarshNanaware(nanawaraadrash7@gmail.com)
 *date: 30 Julay 2023
 */

//Headers

#include<stdio.h>
#include<stdlib.h>

//Global Data Defination
int inum1 =1234; //data section

int* iptr= &inum1; //data section

//iptr is an object 
 //      of type of pointer
 //      to integer

int main (int argc, char**argv,char** envep)

{
	//Code

	printf(" inum1 = %d\n",inum1);
	printf(" &inum1 = %p\n\n ", &inum1);

	printf(" iptr=%p\n",iptr);
	printf(" *iptr=%d\n", *iptr);
	exit(0);

}