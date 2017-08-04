/* makeUpperCase: changes all lower case chars in a string to upper case */

#include <stdio.h>
#include <string.h>

char *makeUpperCase(char *string);

char * main(void)
{
   printf("Enter a string: ");

   char string[1000];

   fgets(string, 1000, stdin);

   printf("%s", makeUpperCase(string));

}

char *makeUpperCase(char *string)
{
   for (int i = 0, n = strlen(string); i < n; i++) {

      if (string[i] >= 'a' && string[i] <= 'z') {
         string[i] -= 32;
      }

   }
   
   return string;
}
