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
        int decimal = name[i];
        int binary[] = {0,0,0,0,0,0,0,0};
        int j = 0;
        while (decimal > 0)
        {
            binary[j] = decimal %2;
            decimal = decimal / 2;
            j++;
        }
        printf("%c", toupper(name[i]));
    }
    printf("\n");


   // printf("%s\n", name);

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
