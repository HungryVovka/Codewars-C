// -----------------------------------------------------------
// Write ary_take function, that takes an array ary, 
// ary_size - the size of the array, value n - the number 
// of first elements to take, and a pointer to 
// an unsigned integer res_size, and does the following:
// 
// returns a subarray with n elements if 0 < n < ary_size
// returns NULL if n == 0
// returns a copy of the array ary if n >= ary_size
// 
// In all cases res_size must be set to the size of the resulting subarray.
// 
// if n == 0, res_size must also be set to 0.
// if n >= ary_size, res_size must be set to ary_size.
// if 0 < n < ary_size, res_size must be set to n.
// 
// Examples:
// 
// For array { 0, 1, 1, 2, 3, 5 } and n = 3, return { 0, 1, 1 } 
// and set res_size to 3.
// 
// For array { 9, 8, 7, 6, 5, 4 } and n = 0, return NULL 
// and set res_size to 0.
// 
// For array { 1, 2, 4, 8, 16, 32 } and n = 255 return the copy of the array 
// and set res_size to its size, in this case it's 6.
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <stdlib.h>   // malloc, free
#include <stdbool.h>  // bool, true, false

int *ary_take(const int *ary, size_t ary_size, size_t n, size_t *res_size){
  if (n == 0){
    *res_size = 0;
    return NULL;
  }
  
  size_t size = (n >= ary_size) ? ary_size : n;
  *res_size = size;
  
  int *result = malloc(size * sizeof(int));
  if (!result) return NULL;
  
  size_t i;
  for (i = 0; i < size; i++) result[i] = ary[i];
  
  return result;
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