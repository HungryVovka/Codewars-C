// -----------------------------------------------------------
// You are given an odd-length array of integers, in which all of them are the same, except for one single number.
// 
// Complete the method which accepts such an array, and returns that single different number.
// 
// The input array will always be valid! (odd-length >= 3)
// 
// Examples
// [1, 1, 2] ==> 2
// [17, 17, 3, 17, 17, 17, 17] ==> 3
// -----------------------------------------------------------

#include <stddef.h>

int stray(size_t n, int arr[n])
{
    int answer = 0;
    for (size_t i = 0; i < n; i++)
    {
        answer ^= arr[i];
    }
    return answer;
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
// You should have received a copy of the GNU Lesser Public License
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------