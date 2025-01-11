/*
 *@file: code_01.c
 *@brief: Implemention of muti daimentional array
 *@author: Aadarsh Nanaware (nanawareadarsh7@gmail.com)
 *@date: 13 August 2023

 */


// Define an object of type integer

int inum= 0; // inum is an  object of type integer


// Define an array of 10 elements of type integer

int iarr[10];
/**
 *  iarr is a an object
 *   of type array of 10 elements
 *   of type integer
 * 
 * */

  // Define an array of 10 1D array and 20 elements of type integer

  int iarr2[10][20];
 /* *          |   |
             |   |
             |   |
             |   
             |    No of elements

             NO of 1D array 

  *   iarr2 is an objct of  array of 10 1D array of 20 elements of type integer

**/


  // Define an array of 10 2D array of 20 1D array of 30 elements of type integer

  int iarr3[10][20][30];
  /**        |   |   |
             |   |   |
             |   |   |
             |   |  No of elements
             |        
             |  No of 1D array 
             
         No of 2D array
             
*  iarr3 is an object of type  array of  10 2D array of 20 1D array of 30 elements of type integer
* */


 // Define an array of 10 4D array of 20 3D array of 30 2D array of 40 1D array of 50 elements  of type integer
             
    int iarr4[20][30][40][50];
/**            |   |   |   |
               |   |   |   |
               |   |   |  No of elements 
               |   |   |
               |   |  No of 1D array 
               |   |
               | No of 2D array
               |
             No 0f 3D array
 *  iarr4 is an object of type  array of 10 4D array of 20 3D array of 30 2D array of 40 1D array of 50 elements  of type integer 
    
**/

   int main(int argc,char** argv,char**envp)

   {
   	  // code

   	  printf("\n\n");


   	  printf(" 1D array ");
      //Accessing 1D array
       for(int le = 0; le<10;le++)
       {
       	 // Writing Data to 1D array 
       	iarr[le] = (le+1) * 10;
       }

        // Reading data from 1D array 
       for(int le = 0;le<10;++le)
       {
       	  printf("iarr1[%d]= %d\n",le,iarr[le]);

       }
     printf("\n\n");

   printf("2D array :\n");
   	int count= 1;
   	//Access 2Dc array 
   	//Writing data to 2d array
   	for(int ole = 0; ole< 10;++ole)
   		for(int ile = 0;ile<20;++ile)

   			iarr2[ole][ile]= count++;

   		// Reading  data from 2D array
   		for(int ole = 0; ole<10;++ole)
   			for(int ile = 0;ile<20;++ile)

   				 printf("iarr2[%d][%d] = %d\n",ole,ile,iarr2[ole][ile]);
   				printf("\n\n");


   				printf("3D array : \n");
   				count=1;
   				//Access 3D array

   				for(int index1 = 0;index1<10;++index1)
   					for(int index2 = 0; index2 <20;++index2)
   						for(int index3 = 0; index3< 30; ++index3)
   							iarr3[index1][index2][index3] = count++;

   			   // reading data 
   				for(int index1 = 0;index1<10;++index1)
   					for(int index2 = 0;index2< 20;++index2)
   						for(int index3 = 0;index3<30;++index3)
                        	printf("iarr3[%d][%d][%d] = %d\n", index1, index2, index3, iarr3[index1][index2][index3]);
   								 printf("\n\n");
   								   printf("4D array:\n");
  								count = 1;
  			//Access 4D array
   		 	for(int index1 = 0;index1<20;++index1)
   				for(int index2 = 0;index2<30;++index2)
   				 for(int index3 = 0;index3<40;++index3)
   					for(int index4 = 0;index4<50;++index4)
   						iarr4[index1][index2][index3][index4] = count++;


            //Reading data
   			for(int index1 = 0;index1<20;++index1)
   				for(int index2 = 0;index2<30;++index2)
   					for(int index3 = 0;index3<40;++index3)
   						for(int index4 = 0;index4<50;++index4)

   		printf("iarr4 [%d][%d][%d][%d] = %d\n", index1 , index2, index3, index4, iarr4[index1][index2][index3][index4]);
   		
   		  exit(0);
   		  }					


