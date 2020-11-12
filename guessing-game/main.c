/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_RANGE 50

int main()
{
   srand(time(NULL));

   int secret_number = rand() % MAX_RANGE + 1;
   int user_guess;
   int tries = 0;
   
   while (true)
   {
      printf("enter a number between 0 and %i> ", MAX_RANGE);
      int r = scanf("%i", &user_guess);

      if (r)
      {
         if (user_guess == secret_number)
         {
            printf("you guessed the number with %i tries!\n", tries);
            return 0;
         }

         else if (user_guess > secret_number)
         {
            printf("too high slow down please!\n");
            tries++;
         }

         else if (user_guess < secret_number)
         {
            printf("too low fasten up please!\n");
            tries++;
         }  
      }

      else
      {
         printf("\e[31menter numbers only please!\e[0m\n");
         return -1;
      }
   }
}
