#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("how tall is your pyramid? \n");
    }
    while ( height < 1 || height > 8);


    for (int rows = 0; rows < height; rows ++)
    {
        int space, hashes;
        for ( space = rows -1; space < height; space ++)
        {
            printf(" ");
        }
        for (hashes = height - space + 1; hashes < height; hashes ++)
        {
            printf("#");
        }
        printf("\n");
    }
}
