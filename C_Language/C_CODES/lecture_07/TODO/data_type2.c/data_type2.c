
/**
 *@file: Data_type.c
 *@brief: demonstration of data type using c language
 *@author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
 *@date: 16 July 2023 (sunday) 

*/

// Header file
#include <stdio.h>
#include <stdlib.h>


// Dfination of data type

// defination of 1 bytes 
char aadarsh = 'f'; //aadarsh is an object of type charecter

// defination of 2 bytes
short cfc = 4567; //cfc is an object of type short

//deefination of 4 bytes 
int marshling = 987654; // marshiling is an object of type integer

//defination of 4 bytes (floating point)
float girl = 246.1357; // girl is an objct of type float

// defination of 8 bytes
long boy = 1210185417; // boy is an object of type long

// defination of 8 bytes (floating point)
double nature = 17132101.9752176; // nature is an object of type double



// entry point function

int main(int argc,char** argv,char** envp)

{
	//code

	//Accessing data of 1 bytes
	printf("aadarsh = %c\n",aadarsh);

	//Accessing data of 2 bytes
	printf("cfc = %hd\n",cfc);

	//Accessing data of 4 bytes
	printf("marshling = %d\n",marshling);

	//Accessing data f 4 bytes (floating point )
	printf("girl = %f\n ",girl);

   //Accessing data of 8 bytes
   printf("boy = %ld\n",boy);

   //Accessing data of 8 bytes (floating point) 
   printf("nature = %f\n",nature);


   exit(0);

}
