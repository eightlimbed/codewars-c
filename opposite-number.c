#include <stdio.h>

float opposite(float num);

int main(void)
{
   float n;
   printf("enter a number: ");
   scanf("%f", &n);

   printf("opposite: %f\n", opposite(n));

}

float opposite(float num)
{
   return num *= -1;
}
