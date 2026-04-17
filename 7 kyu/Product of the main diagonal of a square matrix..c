// -----------------------------------------------------------
// Given a list of rows of a square matrix, find the product of the main diagonal.
// 
// Examples:
// 
//   [[1, 0], [0, 1]] should return 1
//   [[1, 2, 3], [4, 5, 6], [7, 8, 9]] should return 45
//
// http://en.wikipedia.org/wiki/Main_diagonal
// -----------------------------------------------------------

#include <stddef.h>   // size_t 

unsigned long long main_diagonal_product(size_t n, const unsigned short matrix[n][n]){
  size_t i;
  unsigned long long product = 1;
  for (i = 0; i < n; i++){
    product *= matrix[i][i];
  }
  return product;
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