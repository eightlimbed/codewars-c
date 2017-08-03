#include <stdio.h>

const char *evil(int value);

int main(void)
{
   printf("%s\n", evil(13)); 
   return 0;
}

const char *evil(int value)
{
   // variable to count the # of 1s in binary expression 
   int count = 0;

   // loop to get value to 0
   while (value != 0) {
      
      // & (AND) bitwise operator returns 1 if
      // both bits are 1, returns 0 if either
      // bits are 0.
      value = value & (value-1);
      count++;
   }

   if (count % 2 == 0)
      return "It's Evil!";
   else
      return "It's Odious!";
}

/*
00001101 = 13
00001100 = 12

13&12 = 12

1s count increases by 1

00001100 = 12
00001011 = 11

12&11 = 8

00001000 = 8
00000111 = 7

8&7 = 0
*/

