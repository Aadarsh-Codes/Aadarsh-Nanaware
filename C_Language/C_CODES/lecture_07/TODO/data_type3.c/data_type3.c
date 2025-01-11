

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
char nanaware ='B'; //nanaware is an object of type character

//Defination of 2 bytes
short kbc =2143; //kbc is an object of type short

//Defination of 4 bytes
int bca =353637; //cba is an object of type integer

//Defination of 4 bytes (floating point)
float hi =123.736353; //hi is an object of type float

//Defination of 8 bytes 
long me =95279922; //me is an object of long

//Defination of 8 byts (floating point)
double fgk = 87885.2983786; //fgk is an objct of type double


int main(int argc,char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("nanaware= %c\n",nanaware);

	//Accessing data of 2 bytes 
	printf("kbc= %hd\n",kbc);

	//Accessing data of 4 bytes
	printf("bca= %d\n",bca);

	//Accessing data of 4 bytes (floating point )
	printf("hi= %f\n",hi);

	//Accessing data of 8 bytes
	printf("m= %ld\n",me);

	//Accessing data of 8 bytes (floating point)
	printf("fgk= %lf\n",fgk);


    exit(0);
}



























