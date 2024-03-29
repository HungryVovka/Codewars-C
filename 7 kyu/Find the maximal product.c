// -----------------------------------------------------------
// Given a non-empty array of integers, find the maximum product of elements from all available sequences.
// 
// A sequence here is any pattern in which the elements are equally spaced apart in the array.
// 
// The sequence should start at its place in the array: for example, the sequence of 3 elements apart should start at the third element.
// 
// Example:
// 
// Given the array [11, 6, -2, 0, 5, -4, 2]
// 
// When the sequence is 1 element apart: Product = 11 × 6 × (-2) × 0 × 5 × (-4) × 2 = 0.
// 
// When the sequence is 2 apart: Product = 6 × 0 × (-4) = 0.
// 
// When the sequence is 3 apart: Product = (-2) × (-4) = 8.
// 
// When the sequence is 4 apart: Product = 0
// 
// When the sequence is 5 apart: Product = 5
// 
// When the sequence is 6 apart: Product = -4.
// 
// When the sequence is 7 apart: Product = 2.
// 
// So, the function should return 8.
// -----------------------------------------------------------

#include <stddef.h>
#include <math.h>

int find_max_product(size_t length, const int arr[length])
{
    double answer = -INFINITY;
    for (int i = 1; i <= length; i++)
    {
        int j = 1;
        for (int k = i - 1; k < length; k += i)
        {
            j *= arr[k];
        }
        if (answer < j)
        {
            answer = j;
        }
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
// You should have received a copy of the GNU General Public License v3.0
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------