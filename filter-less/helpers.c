#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // comb through each grayscale
    for (int i = 0; i < height; i++)
    {
        // comb through each column
        for (int j = 0; j < width; j++)
        {
            // convert pixels to float
            float Red = image[i][j].rgbtRed;
            float Blue = image[i][j].rgbtBlue;
            float Green = image[i][j].rgbtGreen;

            // find the average value
            int average = round((Red + Blue + Green) / 3);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // comb through each row
    for (int i = 0; i < height; i++)
    {
        // comb through each column
        for (int j = 0; j < width; j++)
        {
            // converting images into float
            float originalRed = image[i][j].rgbtRed;
            float originalBlue = image[i][j].rgbtBlue;
            float originalGreen = image[i][j].rgbtGreen;

            // find the updated pixel value
            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            // find the average value
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            // update the final pixels
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // comb through each row
    for (int i = 0; i < height; i++)
    {
        // comb through each column
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // create copy of image
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }
    // comb through each row
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int totalRed, totalBlue, totalGreen;
            totalRed = totalBlue = totalGreen = 0;
            float counter = 0.00;

            // get neghnouring pixels
            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int currentX = i + x;
                    int currentY = j + y;


                    if (currentX < 0 || currentX > (height - 1) ||
                    currentY < 0 || currentY > (width - 1))
                    {
                        continue;
                    }
                    // get image value
                    totalRed += image[currentX][currentY].rgbtRed;
                    totalGreen += image[currentX][currentY].rgbtGreen;
                    totalBlue += image[currentX][currentY].rgbtBlue;

                    counter++;
                }

                // calculate the average of the neighboring pixels
                temp[i][j].rgbtRed = round(totalRed / counter);
                temp[i][j].rgbtGreen = round(totalGreen / counter);
                temp[i][j].rgbtBlue = round(totalBlue / counter);
            }
        }
    }
    
    // copy new pixels into original image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = temp[i][j].rgbtRed;
            image[i][j].rgbtGreen = temp[i][j].rgbtGreen;
            image[i][j].rgbtBlue = temp[i][j].rgbtBlue;
        }
        return;
    }
}
