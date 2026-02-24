// -----------------------------------------------------------
// Create an identity matrix of the specified size ( >= 0 ).
// 
// Some examples:
// 
// (1)  =>  [[1]]
// 
// (2) => [ [1,0],
//          [0,1] ]
// 
//        [ [1,0,0,0,0],
//          [0,1,0,0,0],
// (5) =>   [0,0,1,0,0],
//          [0,0,0,1,0],
//          [0,0,0,0,1] ]   
// -----------------------------------------------------------

#include <stddef.h>   // size_t

// don't allocate memory for the result
// assign values to the provided matrix

void get_matrix(size_t n, int matrix[n][n]){
  size_t i, j;
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      if (i == j){
        matrix[i][j] = 1;
      } else {
        matrix[i][j] = 0;
      }
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