// -----------------------------------------------------------
// Given a grid of size m x n, calculate the total number of rectangles contained in this rectangle. All integer sizes and positions are counted.
// 
// Examples(Input1, Input2 --> Output):
// 
// 3, 2 --> 18
// 4, 4 --> 100
// 
// Here is how the 3x2 grid works (Thanks to GiacomoSorbi for the idea):
// 
// 1 rectangle of size 3x2:
// 
// [][][]
// [][][]
// 
// 2 rectangles of size 3x1:
// 
// [][][]
// 
// 4 rectangles of size 2x1:
// 
// [][]
// 
// 2 rectangles of size 2x2
// 
// [][]
// [][]
// 
// 3 rectangles of size 1x2:
// 
// []
// []
// 
// 6 rectangles of size 1x1:
// 
// []
// 
// As you can see (1 + 2 + 4 + 2 + 3 + 6) = 18, and is the solution for the 3x2 grid.
// 
// There is a very simple solution to this!
// -----------------------------------------------------------

#include <stddef.h>     // size_t

size_t number_of_rectangles(size_t m, size_t n){
  size_t vertical_pairs, horizontal_pairs;
  vertical_pairs = (m + 1) * m / 2;
  horizontal_pairs = (n + 1) * n / 2;
  return vertical_pairs * horizontal_pairs;
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