// -----------------------------------------------------------
// Given an array of integers, find the one that appears an odd number of times.
// 
// There will always be only one integer that appears an odd number of times.
// 
// Examples
// [7] should return 7, because it occurs 1 time (which is odd).
// [0] should return 0, because it occurs 1 time (which is odd).
// [1,1,2] should return 2, because it occurs 1 time (which is odd).
// [0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
// [1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).
// -----------------------------------------------------------

#include <stddef.h>

int find_odd (size_t length, const int array[length]){
  size_t i, j;
  for (i = 0; i < length; i++){
    size_t conteggio = 0;
    for (j = 0; j < length; j++){
      if (array[j] == array[i]) conteggio++;
    }
    if (conteggio % 2 != 0) return array[i];
  }
  return -1;
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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