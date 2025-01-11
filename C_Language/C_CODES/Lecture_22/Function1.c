/**
  *@file: code_01..c
  *@brief: Implemention  off function 
  *@author: Aadarsh Nanaware (nanawaareaadarsh7@gmail.com)
  *@date:  11 Augusst 2023


  */
  //Header  file

  #include<stdio.h>
  #include<stdlib.h>

  /**
    * 5! = 1 x 2 x 3 x 4 x 5
    *    =     2 x 3 x 4 x 5
    *    =         6 x 4 x 5
    *    =            24 x 5
    * 5! = 120
    *
    *
    * Algorithm : factorial
    *
    * loop ( number = 1 - n)
    *{ 
       
         result = result * number
    * }

     */

     /**

       *
       * name() -> FUNCTION 
       * if,for,while,sizeof ->Exception
       *
       * function syntax
       *
       *retuen_type FUNCTION__NAME (input parameters)
       *  {

       *     // FUNCTION BODY 
       *   }
       *
       */
/*
       * Algorithm : factorial
       *
       * loop ( number = 1 - n)
       *{ 
       
         result = result * number
      * }
      * Function Name : Factorial 
      *
      * Input : integer
      * output : integer
      *
      */


      // Function Defination

        int Factorial(int N)
      { 
        //code
         int result = 1;

         for( int le =1; le <= N; le++)
         {
           result = result * le;
         }

          // printf("Factorial of %d is %d \n",N,result);
          return(result);
      }

          int main (int argc,char** argv,char** envp)

          { 
            // code

            //Function call

            int result= 0;

            result= Factorial(3);
            printf("result =%d\n",result);
            result= Factorial(5);
            printf("result =%d\n",result);
            result= Factorial(10);
            printf("result =%d\n",result);
            result= Factorial(2);
            printf("result = %d\n",result);
            result= Factorial(7);
            printf("result =%d\n",result);
            result= Factorial(5);
            printf("result =%d\n",result);

             exit(0);
          }
