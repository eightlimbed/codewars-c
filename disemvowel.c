/*

Disemvowel:

Given a string, remove every vowel if its index is odd.

Hint: Rather than deleting characters (which would shift which characters are
even and odd each time), construct a new string without the unwelcome vowels.

Example: disemvowel("hello") => "hllo"

*/

#include <stdio.h>
#define BUFFER  1000

char *disemvowel(char *s);
int isavowel(char c);

char output[BUFFER];  // external variable

int main(void)
{
    // get string from user 
    char string[BUFFER];

    printf("Enter a string: ");
    fgets(string, BUFFER, stdin);
    
    // run the function
    disemvowel(string);

    printf("disemvowel'd: %s\n", disemvowel(string));

    return 0;
}

char *disemvowel(char *s)
{
    // determine the length of the string
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    len -= 1;    // to remove the '\n'

    extern char output[BUFFER];    // string to be returned without vowels at odd i

    int i = 0;
    int j = 0;

    while (i < len) {
        if (isavowel(s[i])) {
            if (i % 2 == 0) {
                output[j] = s[i];
                j++;
            }
        } else {
            output[j] = s[i];
            j++;
        }
        i++;
    }
    
    return output;
}

int isavowel(char c)   // is c a vowel?
{
    switch (c) {
        case 'A':
        case 'a': 
            return 1;
        case 'E':
        case 'e': 
            return 1;
        case 'I':
        case 'i': 
            return 1;
        case 'O':
        case 'o': 
            return 1;
        case 'U':
        case 'u': 
            return 1;

        default:
            return 0;
    } 
}
