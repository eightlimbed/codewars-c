/*
Define a function that returns the sum of all non-negative integers up to
and including its argument.

ex: sum_to(3) => 6
*/

#include <stdio.h>

int sum_to(int n);

int main(void)
{
   int num;
   printf("enter a number: ");
   scanf("%d", &num);

   printf("sum = %d\n", sum_to(num));

   return (0);
}

int sum_to(int n)
{
   int sum = 0;

   for (; n > 0; n--) {
      sum += n;
   }
   
   return (sum);
}
