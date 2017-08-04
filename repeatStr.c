/* repeatStr: repeats the given string exactly n times */
#include <stdio.h>
#include <string.h>

char *repeatStr(int count, const char *src);

int main(void)
{
   printf("enter a string: ");

   char s[1000];

   fgets(s, 1000, stdin);

   int n;
   printf("enter a number: ");
   scanf("%d", &n);

   repeatStr(n, s);

   printf("%s\n", repeatStr(n, s));
}

char *repeatStr(int count, const char *src)
{
   char newString[1000];
   int len = strlen(src) - 1;

   for (int i = 0, j = 0; j < (len * count); i++, j++) {

      if (src[i] == '\0' || src[i] == '\n') {
         i = 0;
      }

      newString[j] = src[i];
   }


   return newString;
   
}
