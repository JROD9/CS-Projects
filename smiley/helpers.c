#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for (int row = 0; row < width; row++)
    {
        for (int column = 0; column < height; column++)
        {
            // Make black pixels turn red
            if (image[column][row].rgbtred == 0x00 &&
            image[column][row].rgbtGreen == 0x00 &&
            image[column][row].rgbtBlue == 0x00)
            {
                image[column][row].rgbtRed = 0xff;
            }
        }
    }
}
