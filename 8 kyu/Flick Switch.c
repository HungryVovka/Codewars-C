// -----------------------------------------------------------
// Task
// Create a function that always returns True/true for every item in a given list.
// However, if an element is the word 'flick', switch to always returning the opposite boolean value.
// 
// Examples
// ['codewars', 'flick', 'code', 'wars'] ➞ [True, False, False, False]
// 
// ['flick', 'chocolate', 'adventure', 'sunshine'] ➞ [False, False, False, False]
// 
// ['bicycle', 'jarmony', 'flick', 'sheep', 'flick'] ➞ [True, True, False, False, True]
// 
// Notes
// "flick" will always be given in lowercase.
// A list may contain multiple flicks.
// Switch the boolean value on the same element as the flick itself.
// -----------------------------------------------------------

//  do not allocate memory for the return
//  assign values to pre-allocated result

#include <stdbool.h> // bool, true, false
#include <stddef.h> // size_t
#include <string.h> // strcmp

void flick_switch(size_t length, 
                  const char *const array[length], 
                  bool result[length]){
  bool i = true;
  size_t j = 0;
  for (; j < length; j++){
    if (strcmp(array[j], "flick") != 0){
      result[j] = i;
    } else {
      i = !i;
      result[j] = i;
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