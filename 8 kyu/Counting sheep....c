// -----------------------------------------------------------
// Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in 
// the array (true means present).
// 
// For example,
// 
// { true,  true,  true,  false,
//   true,  true,  true,  true,
//   true,  false, true,  false,
//   true,  false, false, true,
//   true,  true,  true,  true,
//   false, false, true,  true }
// 
// The correct answer would be 17.
// 
// Hint: Don't forget to check for bad values like null/undefined
// -----------------------------------------------------------

#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
	int answer = 0;
	for (size_t i = 0; i < count; i++)
	{
		answer += sheep[i];
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