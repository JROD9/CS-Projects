#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    string name[0];
    for (int k = 0; k < name[1]; k++)
    {
     name[k] = get_string ("what's your name? ");
    }

    for(int i = 0, n = strlen(name[k]); i < n; i++)
    {
         printf("%c", toupper(name[k]));
    }
    printf("\n");


    printf("%i\n", name[1][0]);

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
