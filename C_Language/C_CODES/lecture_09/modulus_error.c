
/**
  *@file: modulus_error.c
  *@brief: domnstration modulus error using c language
  *@author: Aadarsh Nanaware (nanaareaadarsh7@gmail.com)
  *@date: 19 July 2023


  */

  // Header file 

  #include <stdio.h>
  #include <stdlib.h>

  /*doubl fnum1= 10;
  double fnum2= 3 ;

  double fnum3= 0.0;
  */

int inmu1 = 10; 
int inum2 = 20;

int inum3 = 0;

int main (void)
{
	// code

	/* fnum3 = fnum1/fnum2;
	 printf("fnum3= %0.100lf\n",fnum3);
	 */

	inum3 = inum1 %  inum2;

	++ inum1;
    ++ inum2;

    exit(0);
}

/**
 * 
 * 
 * 
 * 
 * Division
 * output:
 *        Quotient
 *        Remainder
 * 
 */
