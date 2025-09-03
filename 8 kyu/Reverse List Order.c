// -----------------------------------------------------------
// In this kata you will create a function that takes in a list and returns a list with the reverse order.
// 
// Examples (Input -> Output)
// * [1, 2, 3, 4]  -> [4, 3, 2, 1]
// * [9, 2, 0, 7]  -> [7, 0, 2, 9]
// -----------------------------------------------------------

#include <stdlib.h>

// return a dynamically allocated int array
// return array will be freed by the tester

int *reverse_list(const int *array, size_t length){
  int *nuovo_array = malloc(length * sizeof(int));
  if (!nuovo_array) return NULL;
  size_t i;
  for (i = 0; i < length; i++) nuovo_array[i] = array[length - 1 - i];
  return nuovo_array;
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
// Copyright (C) 2025 Vladimir Rukavishnikov
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