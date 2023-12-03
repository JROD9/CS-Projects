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

    // open file for reading
    FILE *input_file = fopen(argv[1], "r");

    // chack for validility
    if (input_file == NULL)
    {
        printf("could not open file");
        return 2;
    }

    //storing blocks of 512 bytes in an array
    unsigned char buffer[512];


    //track number of images being created
    int count_image = 0;

    //files pointer for recovered images
    FILE *output_file = NULL;

    //char filename[8]
    char *filename = malloc(8 * sizeof(char));

    fread(buffer, sizeof(char), 512, input_file);

    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == oxff && buffer[3] & 0xf0 == 0xe0)
    {
        // write the jped filenames
        sprintf(filename, "%03i.jpg", count_image);

        //open output_file for writing
        output_file = fopen(filename, "w");

        //count the number of images created so far
        count_image++:
    }
    // check if the output has been used for valid input
    if (output_file != NULL)
    {
        fwrite(buffer, sizeof(char), 512, output_file);
    }
}
    free(filename);
    fclose(output_file);
    fclose(input_file);

    return 0;
}

