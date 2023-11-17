#include <stdio.h>

int main(void)
{
    String name = get_string("what is your name?\n");
    printf("hello,%s", name);
}
