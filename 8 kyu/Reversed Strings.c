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

// -----------------------------------------------------------
// License
// Tasks are the property of Codewars (https://www.codewars.com/) 
// and users of this resource.
// 
// All solution code in this repository 
// is the personal property of Vladimir Rukavishnikov
// (vladimirrukavishnikovmail@gmail.com).
// 
// Copyright (C) 2022 Vladimir Rukavishnikov
// 
// This file is part of the HungryVovka/Codewars-C
// (https://github.com/HungryVovka/Codewars-C)
// 
// License is GNU General Public License v3.0
// (https://github.com/HungryVovka/Codewars-C/blob/main/LICENSE)
// 
// You should have received a copy of the GNU General Public License v3.0
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------