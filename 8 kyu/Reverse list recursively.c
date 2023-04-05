// -----------------------------------------------------------
// Write a function revR which reverses a given list. Try not to cheat and provide a recursive solution.
// -----------------------------------------------------------

#include <stdio.h>

int* revR (int* arr, int n)
{
    if (n <= 1)
    {
        return arr;
    }
    int rev = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = rev;
    revR(arr + 1, n - 2);
    return arr;
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