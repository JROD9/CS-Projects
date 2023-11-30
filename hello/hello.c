#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int apples;
    apples = get_int("How old are you");

    if (apples > 5)
    {
    printf("Hello %i\n", apples);
    }
    else
    {
        printf("%i\n", apples);
    }
}

