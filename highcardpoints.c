/*
In the card game bridge, four cards are given point values: Jack: 1, Queen: 2,
King: 3, Ace: 4. Given an array of strings corresponding to a hand of cards 
(the cards are represented like so: ["2","3","4","5","6","7","8","9","10","J",
"Q","K","A"]), return the total number of high card points for that hand.

examples:
high_card_points(["2","3","4","5","6","7","8","9","10","J","Q","K","A"])=> 10 
high_card_points(["2", "A", "A"]) => 8
*/

#include <stdio.h>
#define MAX 1000

int point_counter(char *hand);

int main(void)
{
   char hand[MAX];
   printf("enter your hand: ");
   fgets(hand, MAX, stdin);
   fflush(stdin);

   printf("your hand is worth %d points\n", point_counter(hand));

   return 0;
}

int point_counter(char *hand)
{
   int points = 0;
   int length = 0;

   // get length of hand
   while (hand[length] != '\0') {
      length++;
   }
   
   // iterate hand and search for JQKA
   for (int i = 0; i < length; i++) {
      // if you find JQKA, add the points
      if (hand[i] == 'J') {
         points += 1;
      } else if (hand[i] == 'Q') {
         points += 2;
      } else if (hand[i] == 'K') {
         points += 3;
      } else if (hand[i] == 'A') {
         points += 4;
      }
   }

   return points;
}
