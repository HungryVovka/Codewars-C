// -----------------------------------------------------------
// Given an array of integers, return a new array with each value doubled.
// 
// For example:
// 
// [1, 2, 3] --> [2, 4, 6]
// -----------------------------------------------------------

#include <stddef.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size)
{
	int *answer;
	answer = malloc(sizeof(size_t) * size);
	for (size_t i = 0; i < size; i++)
	{
		answer[i] = arr[i] * 2;
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