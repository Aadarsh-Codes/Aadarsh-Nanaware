

/**
  *file: data_type1.c 
  *@brief: Demonstration of data type used through c programing Language
  *@author: Aadrsh Nanaware( nnawareaadarsh7@gmail.com)
  *@date: 16 July 2023(Sunday)
  
  */
 
 // Headr files
#include <stdio.h>
#include <stdlib.h>

// Data Defintion Statement

//Defintion of 1 bytes
char mayur ='A'; //mayur is an object of type character

//Defination of 2 bytes
short bkc =4321; //bkc is an object of type short

//Defination of 4 bytes
int cba =421210; //cba is an object of type integer

//Defination of 4 bytes (floating point)
float kih =312.4221; //kih is an object of type float

//Defination of 8 bytes 
long dkcc =98924325; //dkcc is an object of long

//Defination of 8 byts (floating point)
double kgf =5234298.3326778; //kgf is an objct of type double


int main(int argc,char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("mayur= %c\n",mayur);

	//Accessing data of 2 bytes 
	printf("bkc= %hd\n",bkc);

	//Accessing data of 4 bytes
	printf("cba= %d\n",cba);

	//Accessing data of 4 bytes (floating point )
	printf("kih= %f\n",kih);

	//Accessing data of 8 bytes
	printf("dkcc= %ld\n",dkcc);

	//Accessing data of 8 bytes (floating point)
	printf("kgf= %lf\n",kgf);


    exit(0);
}



























