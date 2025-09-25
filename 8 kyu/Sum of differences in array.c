// -----------------------------------------------------------
// Your task is to sum the differences between consecutive pairs in the array in descending order.
// 
// Example
// [2, 1, 10]  -->  9
// 
// In descending order: [10, 2, 1]
// 
// Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9
// 
// If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int diffsum(const int *arr, size_t n){
  if (n == 0) return 0;
  int min = arr[0];
  int max = arr[0];
  size_t i;
  for (i = 1; i < n; i++){
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
  }
  return max - min;
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