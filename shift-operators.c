#include <stdio.h>

#define LIMIT 10

int main(void)
{
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);
      
   printf("Right shifting is equivalent to DIVIDING BY 2\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("Right shift by %d: %d\n", i, num>>i);
   }

   printf("\n");

   printf("Left shifting is equivalent to MULTIPLYING by 2\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("Left shift by %d: %d\n", i, num<<i);
   }

   printf("\n");

   printf("AND (&) operator returns 1 if both operands are 1 "
   "returns 0 if either operands are 0\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("%d & %d = %d\n", num, i*10, num&i);
   }

   printf("\n");

   printf("OR (|) operator returns 1 if at least one operand is 1\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("%d | %d = %d\n", num, i*10, num|i);
   }

   printf("\n");

   printf("XOR (^) operator returns 1 if the two operands are opposite\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("%d ^ %d = %d\n", num, i*10, num^i);
   }

   printf("\n");

   printf("Complement (~) operator is unary (works with only one operand) "
           "it changes 1 to 0 and 0 to 1\n\n");
   for (int i = 0; i <= LIMIT; i++) {
      printf("~%d = %d\n", i, ~i);
   }
}
