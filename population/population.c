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
    while (ssize < 9);

    // TODO: Prompt for end size
    int esize;
    do
    {
        esize = get_int("End size: ");
    }
    while (esize < ssize);

    // TODO: Calculate number of years until we reach threshold

   while(ssize > esize)
   ;
    int year = 0;
    while (ssize < esize)
    {
        ssize = ssize + (ssize / 3) - (ssize / 4);
        year++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", year);
}
