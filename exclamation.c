// Remove all exclamation marks from sentence but ensure a exclamation
// mark at the end of string.

#include <stdio.h>
#include <string.h>

char *remove_bang(char *s);

int main(void)
{
   printf("%s\n", remove_bang("!!!!Hi!"));
}

char *remove_bang(char *s)
{
   int bang_count = 0;
   for (int i = 0, n = strlen(s); i < n; i++) {
      printf("s[i] = %c\n", s[i]);
      if (s[i] == '!') {
         bang_count++;  
      }
   }

   int i = 0;
   while (bang_count > 1) {
      if (s[i] == '!') {
         s[i] = 'X';
      }
   }

   return s;
}
