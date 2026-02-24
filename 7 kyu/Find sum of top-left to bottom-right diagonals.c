// -----------------------------------------------------------
// Given a square matrix (i.e. an array of subarrays), find the sum of values 
// from the first value of the first array, the second value of 
// the second array, the third value of the third array, and so on...
// 
// Examples
// array = [[1, 2],
//          [3, 4]]
// 
// diagonal sum: 1 + 4 = 5
// array = [[5, 9, 1, 0],
//          [8, 7, 2, 3],
//          [1, 4, 1, 9],
//          [2, 3, 8, 2]]
// 
// diagonal sum: 5 + 7 + 1 + 2 = 15
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int diagonal_sum(size_t size, const int matrix[size][size]){
  size_t i;
  int sum;
  sum = 0;
  for (i = 0; i < size; i++){
    sum += matrix[i][i];
  }
  return sum;
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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