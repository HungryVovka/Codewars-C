// -----------------------------------------------------------
// Given a 2D array of some suspended blocks (represented as hastags), 
// return another 2D array which shows the end result once gravity is switched on.
// 
// Examples
// switch_gravity([
//   ["-", "#", "#", "-"],
//   ["-", "-", "-", "-"],
//   ["-", "-", "-", "-"],
//   ["-", "-", "-", "-"]
// ]) ➞ [
//   ["-", "-", "-", "-"],
//   ["-", "-", "-", "-"],
//   ["-", "-", "-", "-"],
//   ["-", "#", "#", "-"]
// ]
// 
// switch_gravity([
//   ["-", "#", "#", "-"],
//   ["-", "-", "#", "-"],
//   ["-", "-", "-", "-"],
// ]) ➞ [
//   ["-", "-", "-", "-"],
//   ["-", "-", "#", "-"],
//   ["-", "#", "#", "-"]
// ]
// 
// switch_gravity([
//   ["-", "#", "#", "#", "#", "-"],
//   ["#", "-", "-", "#", "#", "-"],
//   ["-", "#", "-", "-", "-", "-"],
//   ["-", "-", "-", "-", "-", "-"]
// ]) ➞ [
//   ["-", "-", "-", "-", "-", "-"],
//   ["-", "-", "-", "-", "-", "-"],
//   ["-", "#", "-", "#", "#", "-"],
//   ["#", "#", "#", "#", "#", "-"]
// ]
// 
// Notes
// Each block falls individually, meaning there are no rigid objects. 
// Think about it like falling sand in Minecraft as opposed to the rigid blocks in Tetris.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

void turn_gravity_on (size_t rows, size_t cols, char matrix[rows][cols]){
	// mutate the matrix in place
  size_t col, row;
  for (col = 0; col < cols; col++){
    size_t count_hash = 0;
    for (row = 0; row < rows; row++){
      if (matrix[row][col] == '#') count_hash++;
    }
    for (row = rows; row > 0; row--){
      if (count_hash > 0){
        matrix[row - 1][col] = '#';
        count_hash--;
      } else {
        matrix[row - 1][col] = '-';
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