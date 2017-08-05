/*
A magic number is a number whose digits, when added together, sum to 7. 
E.g. 34. Define a function that returns an array of the first n magic
numbers. You may wish to write a helper function, magic_number?, that 
returns a boolean.

ex: magic_numbers(3) => 7, 16, 25
*/

#include <stdio.h>

int magic(int n);
int magic_numbers(int n);

int main(void)
{
   int num;

   printf("enter a number: ");
   scanf("%d", &num);

   printf("here are the first %d magic numbers: ", num);
   magic_numbers(num);

   return (0);
}

int magic(int n)  // returns 1 if sum = 7, 0 if not
{
   int sum = 0, mod = 100, divisor = 10;

   sum += (n % 10);    // add last digit of n

   while (n >= mod) {
      sum += ( (n % mod) / divisor );
      mod *= 10;
      divisor *= 10;
   }
   
   sum += ( (n % mod) / divisor );  // adds the first digit to sum
   
   int magic;

   if (sum == 7) {
      magic = 1;
   } else {
      magic = 0;
   }

   return (magic);

}

int magic_numbers(int n)   // returns the first n "magic numbers"
{
   int output_count = 0;   // number of magic numbers returned

   for (int x = 7; output_count < n; x++) {

      if (magic(x)) {
         printf("%d ", x);
         output_count += 1;
      }
   }

   printf("\n");
}
