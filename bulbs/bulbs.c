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
    string name = get_string ("what's your name? ");

    for(int i = 0, n = strlen(name); i < n; i++)
    {
         printf("%c", toupper(name[i]));
    }
    printf("\n");

    int n = strlen(name);
    string b[name];
    printf("%c %c %c\n", b [1][0], b [1][1], b [1][2]);

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
