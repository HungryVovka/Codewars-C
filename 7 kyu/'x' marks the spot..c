// -----------------------------------------------------------
// Task:
// Given a two dimensional array, return the co-ordinates of x.
// 
// If x is not inside the array, or if x appears multiple times, return [].
// 
// The co-ordinates should be zero indexed in row-major order.
// You should assume you will always get an array as input. The array will only contain 'x's and 'o's.
// 
// Examples
// Input: []
// Return an empty array if input is an empty array => []
// 
// Input: [
//   ['o', 'o'],
//   ['o', 'o']
// ]
// Return an empty array if no x found => []
// 
// Input: [
//   ['x', 'o'],
//   ['o', 'x']
// ]
// Return an empty array if more than one x found => []
// 
// Input: [
//   ['x', 'o'],
//   ['o', 'o']
// ]
// Return [0,0] when x at top left => [0, 0]
// 
// Input: [
//   ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
//   ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
//   ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
//   ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o'],
//   ['o', 'o', 'o', 'o', 'o', 'o', 'x', 'o'],
//   ['o', 'o', 'o', 'o', 'o', 'o', 'o', 'o']
// ]
// Return [4,6] for the example above => [4, 6]
// -----------------------------------------------------------

struct coords {
    int row, col;
};

struct coords x_marks_the_spot (int rows, int cols, 
                                const char matrix[rows][cols]){
  int row_i;
  int col_i;
  int x_count = 0;
  int x_row = -1;
  int x_col = -1;
  for (row_i = 0; row_i < rows; row_i++){
    for (col_i = 0; col_i < cols; col_i++){
      if (matrix[row_i][col_i] == 'x'){
        x_count++;
        if (x_count == 1){
          x_row = row_i;
          x_col = col_i;
        } else {
          return (struct coords){ -1, -1 };
        }
      }
    }
  }
  if (x_count == 1) return (struct coords){ x_row, x_col };
  return (struct coords){ -1, -1 };
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