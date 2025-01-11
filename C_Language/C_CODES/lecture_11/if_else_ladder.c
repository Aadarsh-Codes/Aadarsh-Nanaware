/**
 * @file: if_else_ladder.c 
 * @brief: Demonstrations of Branching Statements 'if...else... ladder'
 * @author: (nanawareaaryan1306@gmail.com)
 * @date: 22 July 2023 (Saturday) 09:53:56 PM
 */


 //Headers
 
 #include<stdio.h>
 #include<stdlib.h>

 //Global Data Defination

 int color = 999;

 int main(void)

 {

   //code

   if(1 == color)
   {

     //True block 1
     printf("Color is WHITE\n");

   }
   else if(2 == color)
   {
     //True block 2
     printf("Color is RED\n");
   } 

   else if(3 == color)
   {
    //true block 3
    printf("Color is GREEN\n");
   }

   else if(4 == color)
   {
    //true block 4
    printf("color is BLUE\n");
   }
   else
   {
   //false block
   printf("Color is BLACK\n");
   }  
  printf("exit\n");
  exit(0);
  }