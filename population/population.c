#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int ssize;
    do
    {
        ssize = get_int("Start size: ");
    }
    while(ssize <= 8);

    // TODO: Prompt for end size
    int esize;
    do
    {
        esize = get_int("End size: ");
    }
    while(esize <= 8);
    // TODO: Calculate number of years until we reach threshold
    int years, year, gain, lose;
    gain = (ssize/3);
    lose = (ssize/4);
    year = (gain - lose);
    years = (year / esize);
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
