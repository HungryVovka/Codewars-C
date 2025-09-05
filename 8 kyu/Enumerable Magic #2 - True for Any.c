// -----------------------------------------------------------
// The task is to write a function that accepts two parameters: an array and a callback function (in Ruby: a block).
// 
// The function should return true if the callback function / block returns true for any item in the array, otherwise 
// return false.
// 
// The function should return false if the array is empty.
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <stddef.h> // size_t

typedef bool (*Predicate)(int);

bool any(const int* arr, size_t size, Predicate fun){
  size_t i = 0;
  for (; i < size; i++){
    if (fun(arr[i])) return true;
  }
  return false;
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