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
char small ='d'; //small is an object of type character

//Defination of 2 bytes
short big =1854; //big is an object of type short

//Defination of 4 bytes
int kjl =305897; //kjl is an object of type integer

//Defination of 4 bytes (floating point)
float book =264.183102; //book is an object of type float

//Defination of 8 bytes 
long cover =122436329; //cover is an object of long

//Defination of 8 byts (floating point)
double pen =3162935.1122663344; //pen is an objct of type double


int main(int argc,char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("small= %c\n",small);

	//Accessing data of 2 bytes 
	printf("big= %hd\n",big);

	//Accessing data of 4 bytes
	printf("kjl= %d\n",kjl);

	//Accessing data of 4 bytes (floating point )
	printf("book= %f\n",book);

	//Accessing data of 8 bytes
	printf("cover= %d\n",cover);

	//Accessing data of 8 bytes (floating point)
	printf("pen= %lf\n",pen);


    exit(0);
}


