#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("Height: \n");
    }
    while ( h < 1 || h > 8);

    for (int r = 0; r < h; r++)
    {
        for ( int j = 0; j <= h -1; j++)
           printf("#");
        printf("\n");
    }
}
