
/**
  *@file: subtraction.c
  *@brief: Demonstration of arethmatic
  *@author: Aadarsh Nanaware(nnawareaadarsh7@gmail.com)
  *@date: 20 July 2023 (Thrusday)

  */

// Header file


#include <stdio.h>
#include <stdlib.h>


	//Global data defination 

	char aadarsh= 30; // aadarsh is an object of type character
	char code= 10; // code is an object of type character 
	char mayur= 0;  // mayur is an object of type charactr

	short marshlling= 4321; //marshilling is an object of type short
	short nanaware= 7480; //nanaware is an objct of type short 
	short ans= 0; // ans is an object of type shorrt

	int asd= 5432243; //asd is an object of type integer
	int sdf= 989421; //sdf is object of type integer
	int dfg= 0; //dfg is an object of type integer

	long fgh= 12101854; //fgh is an object of type long
	long ghj= 54810112; //ghj is an object of type long
	long hjk= 0; //hjk is an object of type long 

	float  xcde= 432.456; //xcd is an object of type float
	float fhtd= 7896.23; //fhtd is an object of type float
	float rpf= 0; //rpf is an object of type float 

	double boy= 38194145.213536; //boy is an object of type double
	double girl= 664439.4231; //girl is an object of type double 
	double student= 0; //student is  an object of type double
   

   int main(int argc,char** argv, char**envp)
{
  //code

	mayur= aadarsh-code;
	printf("aadarsh=%hhd\n",aadarsh);
	printf("code =%hhd\n",code);
	printf("mayur =%hhd\n",mayur);

	ans= marshlling-nanaware;
	printf("marshlling =%hd\n",marshlling);
	printf("nanaware =%hd\n",nanaware);
	printf("ans =%hd\n",ans);

	dfg= asd-sdf;
	printf("asd =%d\n",asd);
	printf("sdf =%d\n",sdf);
	printf("dfg =%d\n",dfg);

	hjk= fgh-ghj;
	printf("fgh =%ld\n",fgh);
	printf("ghj =%ld\n",ghj);
	printf("hjk =%ld\n",hjk);
	
	rpf= xcde-fhtd;
	printf("xcde=%f\n",xcde);
	printf("fhtd =%f\n",fhtd);
	printf("rpf =%f\n",rpf);
  

  student= boy-girl;
  printf("boy= %lf\n",boy);
  printf("girl= %lf\n",girl);
  printf("student= %lf\n",student);

	exit(0);


}