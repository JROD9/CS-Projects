#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
        string text = get_string("Text: ");
        printf(text);
    }
    while();

    int index, L, S, w, t, e;
    t = ;
    w = ;
    e = ;
    L = (t/w);
    S = (e/w);
    index = 0.0588 * L - 0.296 * S - 15.8;


    //printing grade
    if (index >= 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
    else if(index >= 16)
    {
        printf("Grade 16+");
    }
    else (index < 1)
    {
        printf("Before Grade 1");
    }
}
