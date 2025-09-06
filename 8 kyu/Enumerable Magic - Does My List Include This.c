// -----------------------------------------------------------
// Create a method that accepts a list and an item, and returns true if the item belongs to the list, otherwise false.
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <stddef.h> // size_t

bool include(const int* arr, size_t size, int item){
  size_t i = 0;
  for (; i < size; i++){
    if (arr[i] == item) return true;
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