// -----------------------------------------------------------
// Your task is to rotate a matrix 90 degree to the left. The matrix is an array 
// of integers with dimension n,m. So this kata checks some basics, it's not too difficult.
// 
// There's nothing more to explain, no tricks, no "bad cases";-). Perhaps you 
// take a look at the testcases...
// 
// One easy example:
// 
// Input: {{-1, 4, 5},
//         { 2, 3, 4}}
// 
// Output: {{ 5, 4},
//          { 4, 3},
//          {-1, 2}}
// 
// First there are some static tests, later on random tests too...
// -----------------------------------------------------------

#include <stddef.h>   // size_t

void rotate_matrix (size_t m, size_t n, 
                    const int matrix[m][n], 
                    int rotated[n][m]){
// write to the rotated[][] matrix
  size_t row_i;
  size_t column_i;
  for (row_i = 0; row_i < m; row_i++){
    for (column_i = 0; column_i < n; column_i++){
      rotated[n - 1 - column_i][row_i] = matrix[row_i][column_i];
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