#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("type a positive number ");
    if (height >=1 && height <= 8){
    printf("height, %d \n", height);
    }
    else get_int("type a positive number ");

}
