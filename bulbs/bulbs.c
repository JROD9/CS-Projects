#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(int argc, string argv[])
{
    // TODO
    printf("what's your name? %s\n", argv[1]);

    for(int i = 0, n = strlen(argv[1]); i < n; i++)
    {
         printf("%c", toupper(argv[i]));
    }
    printf("\n");

    int n = strlen(argv[1]);

    while(argv[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);

}



void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
