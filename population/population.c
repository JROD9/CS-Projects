#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int ssize;
    do
    {
        ssize = get_int("Start size: \n");
    }
    while(ssize <= 9);

    // TODO: Prompt for end size
    int esize;
    do
    {
        esize = get_int("End size: \n");
    }
    while(esize <= 9);
    // TODO: Calculate number of years until we reach threshold
    int years;
    years = (ssize/3 + ssize/4);
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
