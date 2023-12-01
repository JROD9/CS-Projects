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
    printf("after: \n");
    for(int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - 32);
        }
    }

    int n = strlen(name);

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
