/*
A bigram is a pair of consecutive words. Given a string, return the longest
bigram in that string. Include the space between the words. Assume there will
be no punctuation. In the case of a tie, return the earlier bigram.

E.g., longest_bigram("One must have a mind of winter") => "must have"
*/

#include <stdio.h>
#include <string.h>
#define MAX 1000

char *longest_bigram(char *string);

int main(void)
{
   char string[MAX];

   printf("enter a string: ");
   fgets(string, MAX, stdin);
   fflush(stdin);

   printf("longest bigram: %s\n", longest_bigram(string));

   return 0;
}

char *longest_bigram(char *string)
{
   int len1 = 0;
   int len2 = 0;
   int temp_len1 = 0;
   int temp_len2 = 0;
   int total_length = 0;
   int i = 0;   
   int greatest_length = 0;
   int longest_bigram_i;

   printf("string = %s\n", string);

   for (int i = 0, n = strlen(string); i < n; i++) {
      int word1len = 0;
      int word2len = 0;

   }

      
      while (string[i] != ' ') {
         printf("string[i] = %c\n", string[i]);
         i++;
         temp_len1++;
      }
      printf("i = %d\n", i); 
      i++;  // assuming there is only a space between each word

      while (string[i] != ' ') {
         printf("string[i] = %c\n", string[i]);
         i++;
         temp_len2++;
      }

      total_length = temp_len1 + temp_len2;

      if (total_length > greatest_length) {
         greatest_length = total_length;
         longest_bigram_i = i;   // index of last char of second word in bigram
      }
      

   }
   */

   int space_count = 0;
   int j = 0;
   char longest_bigram[MAX];

   while (space_count < 2) {
      longest_bigram[j] = string[longest_bigram_i];
         if (string[longest_bigram_i] == ' ') {
            space_count++;
         }
      longest_bigram_i--;
      j++;
   }

   printf("longest_bigram = %s\n", longest_bigram);
}




