/* rose: 
Who remembers back to their time in the schoolyard, when girls would take a
flower and tear its petals, saying each of the following phrases each time
a petal was torn:

I love you
a little
a lot
passionately
madly
not at all

Your goal in this kata is to determine which phrase the girls would say
for a flower of a given number of petals, where nb_petals > 0.

*/

#include <stdio.h>

const char *how_much_i_love_you(int nb_petals);

int main(void)
{
   int petals;
   printf("How many petals? ");
   scanf("%d", &petals);

   how_much_i_love_you(petals);

}

const char *how_much_i_love_you(int nb_petals)
{
   int x = 6;  // number of possible outcomes

   if (nb_petals % x == 1) {
      printf("I love you\n");
   } else if (nb_petals % x == 2) {
      printf("a little\n");
   } else if (nb_petals % x == 3) {
      printf("a lot\n");
   } else if (nb_petals % x == 4) {
      printf("passionately\n");
   } else if (nb_petals % x == 5) {
      printf("madly\n");
   } else if (nb_petals % x == 6) {
      printf("not at all");
   }
}

