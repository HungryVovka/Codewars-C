// -----------------------------------------------------------
// Snail Sort
// Given an n x n array, return the array elements arranged from outermost elements 
// to the middle element, traveling clockwise.
// 
// array = [[1,2,3],
//          [4,5,6],
//          [7,8,9]]
// snail(array) #=> [1,2,3,6,9,8,7,4,5]
// 
// For better understanding, please follow the numbers of the next array consecutively:
// 
// array = [[1,2,3],
//          [8,9,4],
//          [7,6,5]]
// snail(array) #=> [1,2,3,4,5,6,7,8,9]
// 
// NOTE: The idea is not sort the elements from the lowest value to the highest; 
// the idea is to traverse the 2-d array in a clockwise snailshell pattern.
// 
// NOTE 2: The 0x0 (empty matrix) is represented as en empty array inside an array [[]].
// -----------------------------------------------------------

#include <stdlib.h>   // size_t

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
  // The numbers of rows and cols are passed separately for historical reasons
  // Return a heap allocated array, report the size in *outsz
  if (rows == 0 || cols == 0){
    *outsz = 0;
    return NULL;
  }
  size_t total = rows * cols;
  int *answer = malloc(total * sizeof(int));
  if (!answer){
    *outsz = 0;
    return NULL;
  }
  
  size_t i = 0;
  size_t top = 0;
  size_t bottom = rows - 1;
  size_t left = 0;
  size_t right = cols - 1;
  
  while (top <= bottom && left <= right){
    // left to right
    for (size_t col = left; col <= right; col++){
      answer[i++] = mx[top][col];
    }
    top++;
    
    // top to bottom
    for (size_t row = top; row <= bottom; row++){
      answer[i++] = mx[row][right];
    }
    if (right == 0) break;
    right--;
    
    // right to left
    if (top <= bottom){
      for (size_t col = right + 1; col-- > left; ){
        answer[i++] = mx[bottom][col];
      }
      if (bottom == 0) break;
      bottom--;
    }
    
    // bottom to top
    if (left <= right){
      for (size_t row = bottom + 1; row-- > top; ){
        answer[i++] = mx[row][left];
      }
      left++;
    }
  }
  *outsz = total;
  return answer;
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