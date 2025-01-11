
/**
  *@file: data_type.c
  *@brief: Demonstration of vdata type usd thruogh c programming Language
  *@author Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *date: 16 July 2023 (Saturday)
  */


// Header file

#include <stdio.h>
#include <stdlib.h>

// Data Defition Statments

// Dfinaton of 1 bytes
char cnum = 'm'; //cnum is an object of type character
 
 // Defination of 2 bytes
short snum = 1234; //snum is an object of type short

//Defination of 4 bytes
int inum = 873645; //inum is an object of type integer 

//Defintion of 4 bytes (folating point)
float fnum = 123.3456; // fnum is an object of type float

// Defination of 8 bytes
long lnum = 23541989; //lnum is an object of type long

// Defination of 8 bytes (floating point)
double dnum = 123947.1234712394; // dnum is an object of type double


// Entry Point Function
int main(int argc, char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("cnum= %c\n",cnum);

	//Accessing data of 2 bytes
	printf("snum= %hd\n",snum);

	//Accessing data of 4 bytes
	printf("inum= %d\n",inum);

	//Accessing data of 4 bytes (floating point)
	printf("fnum= %f\n",fnum);

	//Accessing dat of 8 bytes
	printf("lnum= %ld\n",lnum);

	//Accessing data of 8 bytes (floating point )
	printf("dnum= %lf\n",dnum);

	exit(0);
}

























