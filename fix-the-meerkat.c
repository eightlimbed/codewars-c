#include <stdio.h>

const char **fix_the_meerkat(const char **arr);

int main(void)
{
   char *arr[] = {"tail", "body", "head"};
   fix_the_meerkat(arr);
}

const char **fix_the_meerkat(const char **arr)
{
   char *temp = arr[0];
   arr[0] = arr[2];
   arr[2] = temp;
   return arr;
}
