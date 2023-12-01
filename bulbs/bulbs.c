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
    string name[4];
     name[0] = "hello\n";
     name[1] = "one\n";
     name[2] = "to\n";

    printf("HI %s %i %i %i \n", name[0], name[2][0], name[2][1], name[2][2]);

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
