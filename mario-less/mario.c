#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("type a positive number ");
    int i = height;
    while (i >= 1 && i <= 8)
    {
        printf("#\n");
        i--;
    }
}
