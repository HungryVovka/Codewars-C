// -----------------------------------------------------------
// It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the 
// original string. You don't have to worry with strings with less than two characters.
// -----------------------------------------------------------

char* remove_char(char* dst, const char* src)
{
/* your solution should return the string even if you use dst */
    char *dst_pointer = dst;
    src += 1;
    while (*(src + 1) != '\0')
    {
        *dst_pointer++ = *src++;
    }
    *dst_pointer = '\0';
    return dst;
}

// or

char* remove_char(char* dst, const char* src)
{
/* your solution should return the string even if you use dst */
    char *dst_pointer = dst;
    src += 1;
    while (*src)
    {
        *dst++ = *src++;
    }
    dst[-1] = 0;
    return dst_pointer;
}

// or

# include <string.h>

char* remove_char(char* dst, const char* src)
{
/* your solution should return the string even if you use dst */
    return strcpy(dst, src + 1)[strlen(src) - 2] = 0, dst;
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