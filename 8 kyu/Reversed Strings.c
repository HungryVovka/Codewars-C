// -----------------------------------------------------------
// Complete the solution so that it reverses the string passed into it.
// 
// 'world'  =>  'dlrow'
// 'word'   =>  'drow'
// -----------------------------------------------------------

#include <string.h>

char *strrev (char *string)
{
    char letter;
    for (int i = 0, j = strlen(string) - 1;
        i != j && i < j;
        i++, j--)
    {
        letter = string[i];
        string[i] = string[j];
        string[j] = letter;
    }
    return string;
}