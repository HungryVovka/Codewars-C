// -----------------------------------------------------------
// On June 14th, 2025, I took my first ever UNT exam (United National Testing - 
// the main exam in Kazakhstan). On that day, I faced this beginner-friendly 
// task that I wanted to publish here.
// 
// Task
// Given a matrix (NxN), and a specific value.
// 
// What the value does is it changes the main diagonal of the matrix. The main 
// diagonal is basically the trace of the matrix (read this article if you are 
// unaware of what the trace is).
// 
// If value > 0, the main diagonal drops down.
// If value < 0, the main diagonal goes up.
// If value = 0, the diagonal does not change.
// 
// With this example here (I marked the diagonal numbers with *):
// 
// # Input:
// 
// matrix = [[ 1,  2,  3,  4],
//           [ 5,  6,  7,  8],
//           [ 9, 10, 11, 12],
//           [13, 14, 15, 16]]
// 
// value = 2
// 
// [[*1,   2,   3,   4],
//  [ 5,  *6,   7,   8],
//  [ 9,  10, *11,  12],
//  [13,  14,  15, *16]]
// 
// # The main diagonal here is [1, 6, 11, 16] but with given value 2:
// 
// [[ 1,   2,  3,  4],
//  [ 5,   6,  7,  8],
//  [*9,  10, 11, 12],
//  [13, *14, 15, 16]]
// 
// # The main diagonal is [9, 14].
// 
// # In case of the value being negative, for example -2:
// 
// [[ 1,  2, *3,  4],
//  [ 5,  6,  7, *8],
//  [ 9, 10, 11, 12],
//  [13, 14, 15, 16]]
// 
// # The main diagonal is [3, 8].
// 
// With these rules in effect, find the sum of the trace of a matrix with the given 
// value.
// The value will never reach the size of the matrix.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

unsigned matrix_diagonal(size_t n, const unsigned matrix[n][n], int value){
  size_t start_row;
  size_t start_col;
  size_t diagonal_length;
  size_t offset;
  unsigned sum;
  
  if (value >= 0){
    start_row = (size_t)value;
    start_col = 0U;
    diagonal_length = n - (size_t)value;
  } else {
    start_row = 0U;
    start_col = (size_t)(-value);
    diagonal_length = n - (size_t)(-value);
  }
  sum = 0U;
  for (offset = 0U; offset < diagonal_length; offset++){
    sum += matrix[start_row + offset][start_col + offset];
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
// Copyright (C) 2025 Vladimir Rukavishnikov
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