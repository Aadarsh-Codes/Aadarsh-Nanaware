/**
  *@file: data_type.c
  *@brief: Demonstration of vdata type usd thruogh c programming Language
  *@author Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *date: 16 July 2023 (Sunday)
  */


// Header file

#include <stdio.h>
#include <stdlib.h>

// Data Defition Statments

// Dfinaton of 1 bytes
char rohit = 'r'; //rohit is an object of type character
 
 // Defination of 2 bytes
short sima = 1210; //sima is an object of type short

//Defination of 4 bytes
int aadi = 541810; //aadi is an object of type integer 

//Defintion of 4 bytes (folating point)
float com = 231.6543; // com is an object of type float

// Defination of 8 bytes
long fes = 194719832; //fes is an object of type long

// Defination of 8 bytes (floating point)
double tiger = 749321.493247853; // tiger is an object of type double


// Entry Point Function
int main(int argc, char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("rohit= %c\n",rohit);

	//Accessing data of 2 bytes
	printf("sima= %hd\n",sima);

	//Accessing data of 4 bytes
	printf("aadi= %d\n",aadi);

	//Accessing data of 4 bytes (floating point)
	printf("com= %f\n",com);

	//Accessing dat of 8 bytes
	printf("fes= %ld\n",fes);

	//Accessing data of 8 bytes (floating point )
	printf("tiger= %lf\n",tiger);

	exit(0);
}





