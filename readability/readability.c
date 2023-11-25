#include <cs50.h>
#include <stdio.h>

int count_letters;
int count_words;
int count_sentences;

int main(void)
{

    // asking for input
 //   do
    {
        string text = get_string("Text: ");
       // printf("%s\n", text);
    }
  //   while();


    // analysing input
    int t = count_letters(string text);
    int w = count_words(string text);
    int e = count_sentences(string text);


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
 //       printf("Grade 16+");
 //   }
  //  else (index < 1)
 //   {
 //       printf("Before Grade 1");
 //   }
 {
    printf("%i\n %i\n %i\n", t, w, e);
 }
}
