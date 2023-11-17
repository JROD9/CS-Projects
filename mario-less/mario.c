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
        for ( int s = 0; s < h; s++)
        {
           printf("#");
         printf("\n");
        }
       // for (int ha = h - s + 1; ha < h; ha ++)
      //  {

    //  }

    }
}
