/*
Anagrams are two words with exactly the same letters. Order does not matter.
Define a function that, given two strings, returns a boolean indicating
whether they are anagrams.
*/

#include <stdio.h>
#define MAX 1000

int anagram(char *word1, char *word2);

int main(void)
{
   char word1[MAX];
   char word2[MAX];

   printf("enter first word: ");
   fgets(word1, MAX, stdin);

   fflush(stdin);

   printf("enter second word: ");
   fgets(word2, MAX, stdin);

   if (anagram(word1, word2)) {
      printf("those words make an anagram\n");
   } else {
      printf("those words don't make an anagram\n");
   }

   return (0);
}

int anagram(char *word1, char *word2)
{
   int match_count = 0;    // counts the number of matching chars in both words
   int word1_len = 0; 
   int word2_len = 0;       
   int char_matches = 0;

   // check to see if both words have same number of chars
   while (word1[word1_len] != '\0') {
      word1_len++;
   }

   while (word2[word2_len] != '\0') {
      word2_len++;
   }

   if (word1_len != word2_len) {
      return 0;
   }
   
   // iterate through both words, count number of matching chars
   for (int i = 0; i < word1_len; i++) {
      for (int j = 0; j < word2_len; j++) {
         if (word1[i] == word2[j]) {
            char_matches += 1;
         }
      }
   }

   if (char_matches == word1_len) {
      return 1;
   } else {
      return 0;
   }

}

