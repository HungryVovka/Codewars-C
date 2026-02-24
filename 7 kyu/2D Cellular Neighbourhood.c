// -----------------------------------------------------------
// This kata is the first part of a series: Neighbourhood kata collection. 
// If this one is too easy you can try out the harder katas. ;)
// 
// The neighbourhood of a cell (in a matrix) are cells that are near to it. 
// There are two popular types:
// 
// The Moore neighborhood are eight cells which surround a given cell
// The Von Neumann neighborhood are four cells which share a border with the 
// given cell
// Task
// Given a neighbourhood type ("moore" or "von_neumann"), a 2D matrix 
// (a list of lists) and a pair of coordinates, return the list of neighbours 
// of the given cell.
// 
// Notes:
// 
// The order of the elements in the output list is not important
// If the input indexes are outside the matrix, return an empty list
// If the the matrix is empty, return an empty list
// Order of the indices: the first index should be applied for the outer/first 
// matrix layer and the last index for the most inner/last layer. 
// coordinates = (m, n) should be applied like mat[m][n]
// 
// Examples
// \ n   0    1    2    3    4
// m  --------------------------
// 0  |  0 |  1 |  2 |  3 |  4 |
// 1  |  5 |  6 |  7 |  8 |  9 |
// 2  | 10 | 11 | 12 | 13 | 14 |
// 3  | 15 | 16 | 17 | 18 | 19 |
// 4  | 20 | 21 | 22 | 23 | 24 |
//    --------------------------
// 
// get_neighborhood("moore", mat, (1,1)) == [0, 1, 2, 5, 7, 10, 11, 12]
// get_neighborhood("moore", mat, (0,0)) == [1, 6, 5]
// get_neighborhood("moore", mat, (4,2)) == [21, 16, 17, 18, 23]
// get_neighborhood("von_neumann", mat, (1,1)) == [1, 5, 7, 11]
// get_neighborhood("von_neumann", mat, (0,0)) == [1, 5]
// get_neighborhood("von_neumann", mat, (4,2)) == [21, 17, 23]
// -----------------------------------------------------------

#include <stddef.h>   // size_t

enum neighbourhood_type { MOORE, VON_NEUMANN };
struct coordinates { int row, col; };

int get_neighbourhood (
	enum neighbourhood_type type,
	int rows, int cols,
	const int matrix[rows][cols],
	struct coordinates cell,
	int neighbours[]
){
	// fill the neighbours[] array
	// return the neighbours count
  int r, c;
  int count;
  count = 0;
  if (cell.row < 0 || cell.row >= rows || cell.col < 0 || cell.col >= cols){
    return 0;
  }
  for (r = cell.row - 1; r <= cell.row + 1; r++){
    for (c = cell.col - 1; c <= cell.col + 1; c++){
      if (r >= 0 && r < rows && c >= 0 && c < cols){
        if (!(r == cell.row && c == cell.col)){
          if (type == MOORE || (type == VON_NEUMANN && (r == cell.row || c == cell.col))){
            neighbours[count] = matrix[r][c];
            count++;
          }
        }
      }
    }
  }
  return count;
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