#include <stdio.h>

const char *bool_to_word(int value);

int main()
{
   int boolean = 0;

   printf("%s\n", bool_to_word(boolean));

   return(0);
}

const char *bool_to_word(int value)
{
   if (value == 0) {
      return "No";
   } else {
      return "Yes";
   }
}
