/*
Define a function that accepts two arguments, a string and an integer. The
function should return a copy of the string with the nth letter removed
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 500

char *remove_nth_letter(char *string, int n);

int main(void)
{
   char *string;
   int n;
   
   printf("enter a word: ");
   fgets(string, MAX, stdin);

   fflush(stdin);
   
   printf("enter a number: ");
   scanf("%d", &n);

   printf("your word with letter #%d removed: %s\n",
           n, remove_nth_letter(string, n));

   return (0);
}

char *remove_nth_letter(char *string, int n)
{
   // determine the length of the string
   int i = 0;
   int j = 0;
   
   while (string[i] != '\0') {
      ++i;
   }
   
   int length = i;
   
   if (string[length] == '\n') {
      string[length] = '\0';
   }

   // return string unmodified if n < 0 or n > length
   if ( (n < 0) || (n > length - 1) ) {
      return string;
   }

   char *front = malloc((length + 1) * sizeof(char));
   char *back  = malloc((length + 1) * sizeof(char));
   char *new_word = malloc((length + 1) * sizeof(char));

   int back_i = 0;

   for (i = 0; i < n-1; i++) {
      front[i] = string[i];
   }

   for (back_i = 0, i = n; i < length; back_i++, i++) {
      back[back_i] = string[i];
   }
   
   for (int i = 0, j = 0; i < length; i++) {
      new_word[i] = front[i];

         if (front[i] == '\0') {
            new_word[i] = back[j];
            j++;
         }
   }

   return new_word;
}

