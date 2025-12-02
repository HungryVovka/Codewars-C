// -----------------------------------------------------------
// Write an algorithm that takes an array and moves all of the zeros to the end, preserving 
// the order of the other elements.
// 
// move_zeros(10, int [] {1, 2, 0, 1, 0, 1, 0, 3, 0, 1}); // -> int [] {1, 2, 1, 1, 3, 1, 0, 0, 0, 0}
// -----------------------------------------------------------

#include <stddef.h>   // size_t

void move_zeros(size_t len, int arr[len]){
    // mutate arr in place
  size_t i;
  size_t pos = 0;
  for (i = 0; i < len; i++){
    if (arr[i] != 0){
      arr[pos] = arr[i];
      pos++;
    }
  }
  while (pos < len){
    arr[pos] = 0;
    pos++;
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