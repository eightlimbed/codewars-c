/* age parser: parses a string and returns the age (0-9) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getAge(char *inputString);

int main(void)
{
   printf("How old are you? ");

   char inputString[1000];

   fgets(inputString, 1000, stdin);

   return getAge(inputString);

}

int getAge(char *inputString)
{
   int age;

   for (int i = 0, n = strlen(inputString); i < n; i++) {
      
      if (inputString[i] >= 48 && inputString[i] <= 57) {
         
         age = inputString[i] - '0';
         
      }
   }
   
   printf("%d\n", age);
}
