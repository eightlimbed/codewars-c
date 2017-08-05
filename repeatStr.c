/* repeatStr: repeats the given string exactly n times */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *repeatStr(int count, const char *src);

int main(void)
{
   char s[1000];
   int n;

   printf("enter a string: ");
   fgets(s, 1000, stdin);

   printf("enter a number: ");
   scanf("%d", &n);

   repeatStr(n, s);

   printf("%s", repeatStr(n, s));
   printf("\n");

}

char *repeatStr(int count, const char *src)
{
   int len = strlen(src);
   char *newString = malloc(len * count + 1);

   for (int i = 0; i < count; i++) {
      strcpy(newString + len * i, src);
   }

   return newString;
   
}
