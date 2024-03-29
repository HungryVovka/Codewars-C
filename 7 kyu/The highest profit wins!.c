// -----------------------------------------------------------
// Story
// Ben has a very simple idea to make some profit: he buys something and sells it again. Of course, this wouldn't give him any profit at all if he was 
// simply to buy and sell it at the same price. Instead, he's going to buy it for the lowest possible price and sell it at the highest.
// 
// Task
// Write a function that returns both the minimum and maximum number of the given list/array.
// 
// Examples (Input --> Output)
// [1,2,3,4,5] --> [1,5]
// [2334454,5] --> [5,2334454]
// [1]         --> [1,1]
// 
// Remarks
// All arrays or lists will always have at least one element, so you don't need to check the length. Also, your function will always get an array or a list, you 
// don't have to check for null, undefined or similar.
// -----------------------------------------------------------

void min_max (const int arr[], int count, int *min, int *max)
{
// assign to the min and max pointers
    *min = *max = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        else if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
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