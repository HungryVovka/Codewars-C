// -----------------------------------------------------------
// We have a matrix of integers with m rows and n columns.
// 
// ( a11  a12  ...  a1n )
// ( a21  a22  ...  a2n )
// ( ...  ...  ...  ... )
// ( am1  am2  ...  amn )
// 
// We want to calculate the total sum for the matrix:
// 
// m   n
// Σ   Σ   (-1)^(i + j) * a_ij
// i=1 j=1
// 
// As you can see, the name "alternating sum" of the title is 
// due to the sign of the terms that changes from one term to its 
// contiguous one and so on.
// 
// Let's see an example:
// 
// matrix = [[1, 2, 3], [-3, -2, 1], [3, - 1, 2]]
// 
// total_sum = (1 - 2 + 3) + [-(-3) + (-2) - 1] + [3 - (-1) + 2] = 2 + 0 + 6 = 8
// You may be given matrixes with their dimensions 
// between these values:10 < m < 300 and 10 < n < 300.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int score_matrix(size_t m, size_t n, int matrix[m][n]){
  size_t i, j;
  int sum = 0;
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      if ((i + j) % 2 == 0){
        sum += matrix[i][j];
      } else {
        sum -= matrix[i][j];
      }
    }
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