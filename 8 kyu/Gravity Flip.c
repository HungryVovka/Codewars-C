// -----------------------------------------------------------
// If you've completed this kata already and want a bigger challenge, here's the 3D version
// 
// Bob is bored during his physics lessons so he's built himself a toy box to help pass the time. The box is special because it has the ability to change 
// gravity.
// 
// There are some columns of toy cubes in the box arranged in a line. The i-th column contains a_i cubes. At first, the gravity in the box is pulling the 
// cubes downwards. When Bob switches the gravity, it begins to pull all the cubes to a certain side of the box, d, which can be either 'L' or 'R' (left 
// or right). Below is an example of what a box of cubes might look like before and after switching gravity.
// 
// +---+                                       +---+
// |   |                                       |   |
// +---+                                       +---+
// +---++---+     +---+              +---++---++---+
// |   ||   |     |   |   -->        |   ||   ||   |
// +---++---+     +---+              +---++---++---+
// +---++---++---++---+         +---++---++---++---+
// |   ||   ||   ||   |         |   ||   ||   ||   |
// +---++---++---++---+         +---++---++---++---+
// 
// Given the initial configuration of the cubes in the box, find out how many cubes are in each of the n columns after Bob switches the gravity.
// 
// Examples (input -> output:
// * 'R', [3, 2, 1, 2]      ->  [1, 2, 2, 3]
// * 'L', [1, 4, 5, 3, 5 ]  ->  [5, 5, 4, 3, 1]
// -----------------------------------------------------------

#include <stdlib.h> // qsort
#include <string.h> // memcpy
#include <stddef.h> // size_t

//  do not allocate memory for the return value
//  assign output to preallocated array *result

static int confronto_cresc(const void *a, const void *b){
  int x = *(const int*)a, y = *(const int*)b;
  return (x > y) - (x < y);
}

static int confronto_decresc(const void *a, const void *b){
  int x = *(const int*)a, y = *(const int*)b;
  return (y > x) - (y < x);
}

void flip(char d, const int *array, size_t n, int *result){
  memcpy(result, array, n * sizeof(int));
  if (d == 'R'){
    qsort(result, n, sizeof(int), confronto_cresc);
  } else if (d == 'L'){
    qsort(result, n, sizeof(int), confronto_decresc);
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