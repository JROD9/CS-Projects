#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
 if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }

    // open file for reading
    FILE *input_file = fopen(argv[1], "r");

    // chack for validility
    if (input_file == NULL)
    {
        printf("could not open file");
        return 2;
    }

    //storing blocks of 512 bytes in an array
    unsigned car buffer[512];

    //track number of images being created
    int count_image = 0;

    //files pointer for recovered images
    FILE *output_file = NULL;

    //char filename[8]
    char *count_image = malloc(8 * sizeof(cahr));

    fread(buffer, sizeof(char), 512, input_file);

    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == oxff && buffer[3] & 0xf0 == 0xe0)
    {
        sprintf(filename, "%03i.jpg", count_image);
        output_file = fopen(filename, "w");
        
    }

}
