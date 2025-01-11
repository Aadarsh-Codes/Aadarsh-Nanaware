/**
 * S.G.M.P
 * @file: code_01.c
 * @brief: Demonstration of 'printf' and 'scanf' IO functions
 * @author: Aadarsh Nanaware (nanawareaadarsh7@gmail.com)
 */

// Headers
#include <stdio.h>
#include <stdlib.h>

// Global Data Definition
char cnum1 = 0;
char cnum2 = 0;
char cnum3 = 0;

short snum1 = 0;
short snum2 = 0;
short snum3 = 0;

int inum1 = 0;
int inum2 = 0;
int inum3 = 0;

long long lnum1 = 0;
long long lnum2 = 0;
long long lnum3 = 0;

//	4 bytes
// 'f' or 'F' as SUFFIX is mandatory for a floating point number to 
// 	store that number in 4 bytes data type 
float fnum1 = 0.0f;	
float fnum2 = 0.0F;
float fnum3 = 0.0f;

//	8 bytes
double dnum1 = 0.0;
double dnum2 = 0.0;
double dnum3 = 0.0;


// Entry Point Function
int main(int argc, char** argv, char** envp)
{
	// Code

	// Take Input for 1 byte
	printf("Enter 2 characters = ");
	scanf(" %c", &cnum1);
	scanf(" %c", &cnum2);
	printf("cnum1 = %c - %hhd\n", cnum1, cnum1);
	printf("cnum2 = %c - %hhd\n", cnum2, cnum2);
	cnum3 = cnum1 + cnum2;
	printf("cnum3 = %c - %hhd\n\n", cnum3, cnum3);

	//	Take Input for 2 bytes
	printf("Enter 2 numbers = ");
	scanf("%hd %hd", &snum1, &snum2);
	printf("snum1 = %hd - %hx - %hX\n", snum1, snum1, snum1);
	printf("snum2 = %hd - %hx - %hX\n", snum2, snum2, snum2);
	snum3 = snum1 * snum2;
	printf("snum3 = %hd - %hx - %hX\n\n", snum3, snum3, snum3);

	// Take Input for 4 bytes
	printf("Enter 2 numbers = ");
	scanf("%d %d", &inum1, &inum2);
	printf("inum1 = %d - %x - %X\n", inum1, inum1, inum1);
	printf("inum2 = %d - %x - %X\n", inum2, inum2, inum2);
	inum3 = inum1 * inum2;
	printf("inum3 = %d - %x - %X\n\n", inum3, inum3, inum3);

	//	Take Input for 8 bytes
	printf("Enter 2 large numbers = ");
	scanf("%lld %lld", &lnum1, &lnum2);
	printf("lnum1 = %lld - %llx - %llX\n", lnum1, lnum1, lnum1);
	printf("lnum2 = %lld - %llx - %llX\n", lnum2, lnum2, lnum2);
	lnum3 = lnum1 * lnum2;
	printf("lnum3 = %lld - %llx - %llX\n\n", lnum3, lnum3, lnum3);

	// Take Input for 4 bytes floating point number
	printf("Enter 2 floating numbers = ");
	scanf("%f %f", &fnum1, &fnum2);
	printf("fnum1 = %f\n", fnum1);
	printf("fnum2 = %f\n", fnum2);
	fnum3 = fnum1 * fnum2;
	printf("fnum3 = %f\n\n", fnum3);

	// Take Input for 8 bytes floating point number
	printf("Enter 2 large floating numbers = ");
	scanf("%lf %lf", &dnum1, &dnum2);
	printf("dnum1 = %lf\n", dnum1);
	printf("dnum2 = %lf\n", dnum2);
	dnum3 = dnum1 * dnum2;
	printf("dnum3 = %lf\n\n", dnum3);

	printf("EXIT\n\n");
	exit(0);
}