// -----------------------------------------------------------
// Matrix Addition of Elements
// As the name suggests you just have to add all the elements of 
// the matrix (2-dimensional array) and return the sum.
// 
// Matrices can be of any size, not necessarily square.
// Matrices can have negative elements as well.
// Constraints
// 1 <= rows, columns < 20 -100 <= elements <= 100
// 
// Example
// [[1,0], [0,1]] // --> should return 2.
// [[7,9], [3,6]] // --> should return 25.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int sum_of_elements(size_t rows, size_t cols, const int matrix[rows][cols]){
  size_t i, j;
  int sum;
  sum = 0;
  for (i = 0; i < rows; i++){
    for (j = 0; j < cols; j++){
      sum += matrix[i][j];
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