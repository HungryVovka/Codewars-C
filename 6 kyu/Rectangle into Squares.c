// -----------------------------------------------------------
// The drawing below gives an idea of how to cut a given "true" rectangle into 
// squares ("true" rectangle meaning that the two dimensions are different).
// 
// +-------+-------+-------+-------+-------+
// |       |       |       |       |       |
// |   R   |   R   |   R   |   G   |   G   |
// |       |       |  3²=9 |       |       |
// +-------+-------+-------+-------+-------+
// |       |       |       |       |       |
// |   R   |   R   |   R   |   G   |   G   |
// |       |       |       |  2²=4 |       |
// +-------+-------+-------+-------+-------+
// |       |       |       |       |       |
// |   R   |   R   |   R   |   B   |   P   |
// |       |       |       |   1   |   1   |
// +-------+-------+-------+-------+-------+
// 
// Can you translate this drawing into an algorithm?
// 
// You will be given two dimensions
// 
// a positive integer length
// a positive integer width
// 
// You will return a collection or a string (depending on the language; Shell bash, 
// PowerShell, Pascal and Fortran return a string) with the size of each of the 
// squares.
// 
// Examples in general form:
// (depending on the language)
// 
//   sqInRect(5, 3) should return [3, 2, 1, 1]
//   sqInRect(3, 5) should return [3, 2, 1, 1]
//   
//   You can see examples for your language in **"SAMPLE TESTS".**
// 
// Notes:
// lng == wdth as a starting case would be an entirely different problem and 
// the drawing is planned to be interpreted with lng != wdth. (See kata, Square into 
// Squares. Protect trees! http://www.codewars.com/kata/54eb33e5bc1a25440d000891 for this 
// problem).
// 
// When the initial parameters are so that lng == wdth, the solution [lng] 
// would be the most obvious but not in the spirit of this kata so, in that case, 
// return None/nil/null/Nothing or return {} with C++, [] with Perl, 
// Raku.
// 
// In that case the returned structure of C will have its sz component equal 
// to 0.
// 
// Return the string "nil" with Bash, PowerShell, Pascal and Fortran.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, calloc, free

// Return a dynamically allocated pointer to a struct Data.
// Both the pointer and its array member will be freed, even when sz == 0.

struct Data {
     int *array; // heap-allocated array
     int sz;     // length of the array
};

struct Data *sqInRect(int length, int width) {
  struct Data *answer;
  int *squares_array;
  int capacity;
  int index;
  int longer_side, shorter_side;
  
  if (length == width){
    answer = (struct Data *)calloc(1, sizeof(struct Data));
    return answer;
  }
  capacity = length + width;
  answer = (struct Data *)malloc(sizeof(struct Data));
  if (answer == NULL) return NULL;
  
  squares_array = (int *)malloc(sizeof(int) * capacity);
  if (squares_array == NULL){
    free(answer);
    return NULL;
  }
  
  index = 0;
  longer_side = length;
  shorter_side = width;
  
  while (longer_side > 0 && shorter_side > 0){
    if (shorter_side > longer_side){
      int x = shorter_side;
      shorter_side = longer_side;
      longer_side = x;
    }
    squares_array[index] = shorter_side;
    index++;
    longer_side -= shorter_side;
  }
  answer->array = squares_array;
  answer->sz = index;
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