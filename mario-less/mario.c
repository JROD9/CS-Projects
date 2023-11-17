#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do {
        height = get_int("number 1 through 8\n");
    }
    while ( height > 1 && height < 8 );
    for (int h = 1; h < 8 ; h++)
    {
        printf("#\n");
    }
}
