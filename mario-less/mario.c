#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: \n");
    }
    while ( height < 1 || height > 8);

    for (int rows = 0; rows < height; rows ++)
    {
        int space, hashes;
        for ( space = 0; space < height; space ++)
        {
           printf("#");
         printf("\n");
        }
       // for (hashes = height - space + 1; hashes < height; hashes ++)
      //  {

    }
}
