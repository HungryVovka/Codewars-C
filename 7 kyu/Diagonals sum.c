// -----------------------------------------------------------
// Create a function that receives a (square) matrix and calculates 
// the sum of both diagonals (main and secondary).
// 
// Example
// [   // 3x3 matrix
//   [ 1, 2, 3 ],
//   [ 4, 5, 6 ],
//   [ 7, 8, 9 ]
// ]
// 
// // Should return 30: (1 + 5 + 9) + (3 + 5 + 7)
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int sum_diagonals(size_t n, const int matrix[n][n]){
  size_t i;
  int sum;
  sum = 0;
  for (i = 0; i < n; i++){
    sum += matrix[i][i];
    sum += matrix[i][n - 1 - i];
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