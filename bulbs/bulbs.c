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
    string name = get_string ("what's your name? ");

    for(int i = 0; i < strlen(name); i++)
    {
         printf("%c", toupper(name[i]));
    }
    printf("\n");

    int n = strlen(name[1]);

    while(name[n] != '\0')
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
