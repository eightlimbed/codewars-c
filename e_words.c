/*
Define a function that accepts a string as an argument. Your function must
return the number of words in the string that end with the letter "e".

ex:
e_words("tree") => 1
e_words("Let be be finale of seem.") => 3
*/

#include <stdio.h>
#include <string.h>

int e_words(char *string);

int main(void)
{
   char string[1000];
   printf("enter some words: ");
   fgets(string, 1000, stdin);

   printf("%d\n", (e_words(string)));

   return(0);
}

int e_words(char *string)  // returns the number of words that end in 'e'
{
   int count = 0;  // e_count 

   for (int i = 0; i < strlen(string); i++) {
      if ((string[i] == ' ' || string[i] == '\n') && string[i-1] == 'e') {
            count+= 1;
      }
   }

   return (count);
}
