#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("whats your age\n");
    printf("your %i years old\n", age);
}
