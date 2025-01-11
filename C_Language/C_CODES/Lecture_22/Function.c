/**
  *@file: code_01.c
  *@brief: Implemention of function
  *@author: Aadarsh Nanaware (nanawaraadarsh7@gmail.com)
  *@date: 11 Augst 2023


  */

  // Hedar file 

   #include<stdio.h>
   #include<stdlib.h>

   /**
     *
     *5 != 1 X  2 X 3 X 4 X 5
     *           2 X 3 X 4 X 5
     *              6 X 4 X 5
     *                 24 X 5
     *5 != 120
     *
     * Algoritham: Factorial 
     *
     * loop ( number = 1-n)
     *{
         result = result*number
     }

     */

     /**
       *
       *
       * nam() -> FUNCTION 
       *
       *  IF,FOR,WHILE,SIZEOF ->
          Exception
       *
       * Function syntax
       *
       * return_type Function__name(input_parametetrs)
       * {

           // FUNCTION BODY
         }
       */

      /**
        *
        *Algorithm: Factorial
        * loop (number = 1 - n )
           {
               result = result*number
           }
        * Function Name : Factorial
        * Input: Void (None) 
        * Output : Void (None)
        * 
        **/

        // Function Defetion

        void Factorial(void)

        {

           // code 
           int N =5;
           int result =1;

            for (int le=1;le<=N;le++)
            {
              result = result * le;
            }
              printf("Factorial of %d is %d\n",N,result);

        }  
         int main(int argc, char** argv,char** envp)

         {

           //code

            Factorial(); // Function call
            Factorial();
            Factorial();
            Factorial();
            Factorial();
            Factorial();
            Factorial();
            Factorial();
            Factorial();
           
         
          exit(0);
          }
