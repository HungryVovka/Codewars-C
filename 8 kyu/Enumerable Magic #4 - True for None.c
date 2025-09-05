// -----------------------------------------------------------
// Write a function that takes two arguments: an array and a callback function (in Ruby: a block).
// 
// The function should return true if the callback / block returns false for all of the items in the array, or if the array is 
// empty; otherwise return false.
// -----------------------------------------------------------

#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool none(const int* arr, size_t size, Predicate fun){
  size_t i;
  for (i = 0; i < size; i++){
    if (fun(arr[i])) return false;
  }
  return true;
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