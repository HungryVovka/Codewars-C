// -----------------------------------------------------------
// Task
// Create a method all which takes two params:
// 
// a sequence
// a function (function pointer in C)
// and returns true if the function in the params returns true for every element in the sequence. Otherwise, it should return false. If 
// the sequence is empty, it should return true, since technically nothing failed the test.
// 
// Example
// all((1, 2, 3, 4, 5), greater_than_9) -> false
// all((1, 2, 3, 4, 5), less_than_9)    -> True
// -----------------------------------------------------------

#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool all(const int arr[/* length */], size_t length, Predicate fun){
  size_t i;
  for (i = 0; i < length; i++){
    if (!fun(arr[i])) return false;
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