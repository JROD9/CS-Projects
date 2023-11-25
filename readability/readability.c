#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(void)
{
        string text = get_string("Text: ");
        int letters = 0;
        int words = 1;
        int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }

        else if (text[i] == ' ')
        {
            words++;
        }

        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
        float L = (float) letters / (float) words * 100;
        float S= (float) sentences / (float) words * 100;

        int index = round(0.0588 * L - 0.296 * S - 15.8);

         if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}



    // analysing input

   // int count_letters(string text);
   // int count_words(string text);
   // int count_sentences(string text);


    // calculation input
 //   int index, L, S;
 //   L = (t/w);
 //   S = (e/w);
 //   index = 0.0588 * L - 0.296 * S - 15.8;


    // printing grade
 //   if (index >= 1 && index < 16)
 //   {
 //       printf("Grade %i\n", index);
 //   }
 //   else if(index >= 16)
//    { make readability
// ./readability
 //       printf("Grade 16+");
 //   } hello oven baker mom. your the best. and the worst.
  //  else (index < 1)
 //   {
 //       printf("Before Grade 1");
 //   }
// {
  //  printf("0");
// }
