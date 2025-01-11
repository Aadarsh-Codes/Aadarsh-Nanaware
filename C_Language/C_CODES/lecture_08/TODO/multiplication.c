/**
  *@file: multiplication.c
  *@brief: Demonstration of arethmatic
  *@author: Aadarsh Nanaware(nnawareaadarsh7@gmail.com)
  *@date: 20 July 2023 (Thursday)

  */

// Header file


#include <stdio.h>
#include <stdlib.h>


	//Global data defination 

	char qaz= 67; // qaz is an object of type character
	char plm= 34; // plm is an object of type character 
	char ans1= 0;  // ans1 is an object of type charactr

	short wsx= 1357; //wsx is an object of type short
	short okm= 2468; //okm is an objct of type short 
	short ans2= 0; // ans2 is an object of type shorrt

	int  edc= 3245768; //edc is an object of type integer
	int ijn= 9669065; //ijn is object of type integer
	int ans3= 0; //ans3 is an object of type integer

	long rfv= 12345678; //rfv is an object of type long
	long uhb= 68345672; //uhb is an object of type long
	long ans4= 0; //ans4 is an object of type long 

	float tgb= 556.6435; //tgb is an object of type float
	float ygn= 334.5645; //ygn is an object of type float
	float ans5= 0; //ans5 is an object of type float 

	double mjk= 1334537.443567; //mjk is an object of type double
	double hgfr= 5652364.75484; //hgfr is an object of type double 
	double ans6= 0; //ans6 is  an object of type double
   

   int main(int argc,char** argv, char**envp)
{
  //code

	ans1= qaz*plm;
	printf("qaz =%hhd\n",qaz);
	printf("plm =%hhd\n",plm);
	printf("ans1 =%hhd\n",ans1);

	ans2= wsx*okm;
	printf("wsx =%hd\n",wsx);
	printf("okm =%hd\n",okm);
	printf("ans2 =%hd\n",ans2);

	ans3= edc*ijn;
	printf("edc =%d\n",edc);
	printf("ijn =%d\n",ijn);
	printf("ans3 =%d\n",ans3);

	ans4= rfv*uhb;
	printf("rfv =%ld\n",rfv);
	printf("uhb =%ld\n",uhb);
	printf("ans4 =%ld\n",ans4);
	
	ans5= tgb*ygn;
	printf("tgb =%f\n",tgb);
	printf("ygn =%f\n",ygn);
	printf("ans5=%f\n",ans5);

	ans6= mjk*hgfr;
	printf("mjk =%lf\n",mjk);
	printf("hgfr=%lf\n",hgfr);
	printf("ans6 =%lf\n",ans6);


	exit(0);


}