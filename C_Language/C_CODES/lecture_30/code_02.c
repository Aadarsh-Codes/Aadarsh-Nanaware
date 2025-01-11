/**
  *@file: code_02.c
  *@brif: Demonstration of Dyanamic memory allocation,Aarray and Pointers
  *@author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
  *@Date: 31 August 2023

  */

// Header Files
#include<stdio.h>
#include<stdlib.h>?

// Global data Defination

//Define a pointr to integer
// p is a pointer ti integer
int*iptr = NULL;

/**
 * 
 *  Process:
 *  Regions:
 *          1) Text Region
 *          2) Data Region
 *          3) Heap Region
 *          4) Stack Region
 *  Section: 
 *          1) RODATA-> Read only Data Section
 *          2) DATA  -> Data Section
 *          3) BSS   -> Block Started with Symbol Section
 * 
 * int inum = 976; // Data Section(Initialization Definitions )
 * 
 * int inum1; // BSS Selection(UnInitialization Definations)
 * 
 *  
 */

 // Entry point function
 int main(int argc,char** argv,char** envp)
 {
 	// Code 

 	// Define 4 byts dynamically using maloc

 	 /**
 	  *  function = malloc -> Memory Allocation
 	  *  Allocation in Heap 
 	  *  input = Number of byts
 	  *  output = Address
 	  */
 	iptr = (int*)malloc(4*10);// 4 byts * 10 objects

 	   // Access => Read + Write
 	   // Array Formule => Required Address = Base Addrss + index * size of elelment 
 	   // Array Operator -> []-> Subscript Operator 

 	   //*iptr = 2334523; // Writ Opearation
 	for(int le = 0; le < 10; ++le)
 	{
 		iptr[le] = (le+1) * 10 ;
 	}

 	/* printf(" iptr = %p\n",itr);
 	   printf(" *iptr = %d\n",*iptr);
 	*/
 	
 	 // Read Operation
 	  for(int le = 0; le < 10;++le)
 	  {
 	  	 printf("iptr[%d] = %d\n",le,iptr[le]);

 	  } 

 	  free(iptr);
 	  iptr = NULL;

 	  exit(0);  
  } 

