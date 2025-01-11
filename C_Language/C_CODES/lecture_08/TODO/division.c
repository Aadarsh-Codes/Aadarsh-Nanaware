/**
  *@file: Division.c
  *@brief: Demonstration of arethmatic using c language
  *@author: Aaryan Nanaware(nanawareaaryan1306@gmail.com@gmail.com)
  *@date: 16 July 2023 (sunday)

  */

// Header file


#include <stdio.h>
#include <stdlib.h>


	//Global data defination 

	char cnum1= 54; // cnum1 is an object of type character
	char cnum2= 8; // cnum2 is an object of type character 
	char cnum3= 0;  // cnum3 is an object of type charactr

	short snum1= 3456; //snum1 is an object of type short
	short snum2= 1234; //snmu2 is an objct of type short 
	short snum3= 0; // snum3 is an object of type shorrt

	int inum1= 121918; //inum1 is an object of type integer
	int inum2= 321458; //inum2 is object of type integer
	int inum3= 0; //inmu3 is an object of type integer

	long lnum1= 75475465; //lnum1 is an object of type long
	long lnum2= 54486446; //inum2 is an object of type long
	long lnum3= 0; //lnum3 is an object of type long 

	float fnum1= 7234.654; //funm1 is an object of type float
	float fnum2= 6745.456; //fnum2 is an object of type float
	float fnum3= 0; //fnum is an object of type float 

	double dnum1= 65644789.49805; //dnum1 is an object of type double
	double dnum2= 54327914.76730; //dnum2 is an object of type double 
	double dnum3= 0; //dnum3 is  an object of type double
   

   int main(int argc,char** argv, char**envp)
{
  //code

	cnum3= cnum1/cnum2;
	printf("cnum1 is=%hhd\n",cnum1);
	printf("cnum2 is=%hhd\n",cnum2);
	printf("cnum3 is=%hhd\n",cnum3);

	snum3= snum1/snum2;
	printf("snum1 is=%hd\n",snum1);
	printf("snum2 is=%hd\n",snum2);
	printf("snum3 is=%hd\n",snum3);

	inum3= inum1/inum2;
	printf("inum1 is=%d\n",inum1);
	printf("inum2 is=%d\n",inum2);
	printf("inum3 is=%d\n",inum3);

	lnum3= lnum1/lnum2;
	printf("lnum1 is=%ld\n",lnum1);
	printf("lnum2 is=%ld\n",lnum2);
	printf("lnum3 is=%ld\n",lnum3);
	
	fnum3= fnum1/fnum2;
	printf("fnum1 is=%f\n",fnum1);
	printf("fnum2 is=%f\n",fnum2);
	printf("fnum3 is=%f\n",fnum3);


	exit(0);
}

