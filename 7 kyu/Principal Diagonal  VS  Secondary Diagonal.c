// -----------------------------------------------------------
// Principal Diagonal -- The principal diagonal in a matrix identifies those elements 
// of the matrix running from North-West to South-East.
// 
// Secondary Diagonal -- the secondary diagonal of a matrix identifies those elements 
// of the matrix running from North-East to South-West.
// 
// For example:
// 
// matrix:             [1, 2, 3]
//                     [4, 5, 6]
//                     [7, 8, 9]
// 
// principal diagonal: [1, 5, 9]
// secondary diagonal: [3, 5, 7]
// 
// Task
// Your task is to find which diagonal is "larger": which diagonal has a bigger sum of their elements.
// 
// If the principal diagonal is larger, return "Principal Diagonal win!"
// If the secondary diagonal is larger, return "Secondary Diagonal win!"
// If they are equal, return "Draw!"
// Note: You will always receive matrices of the same dimension.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

const char *diagonal(const size_t n, const int matrix[n][n]) {
// return a string literal, not a heap-allocated string
// (or else you get fired >:(  )
  size_t i;
  int principal_sum = 0;
  int secondary_sum = 0;
  for (i = 0; i < n; i++){
    principal_sum += matrix[i][i];
    secondary_sum += matrix[i][n - 1 - i];
  }
  if (principal_sum > secondary_sum){
    return "Principal Diagonal win!";
  } else if (principal_sum < secondary_sum){
    return "Secondary Diagonal win!";
  } else {
    return "Draw!";
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