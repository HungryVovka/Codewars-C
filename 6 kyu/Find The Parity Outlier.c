// -----------------------------------------------------------
// You are given an array (which will have a length of at least 3, 
// but could be very large) containing integers. The array 
// is either entirely comprised of odd integers or entirely comprised of 
// even integers except for a single integer N. Write a method that takes 
// the array as an argument and returns this "outlier" N.
// 
// Examples
// [2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)
// 
// [160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int find_outlier(const int values[/* count */], size_t count){
  size_t i;
  int even_count = 0;
  int odd_count = 0;
  
  for (i = 0; i < 3; i++){
    if (values[i] % 2 == 0){
      even_count++;
    } else {
      odd_count++;
    }
  }
  int find_even = (odd_count > even_count);
  
  for (i = 0; i < count; i++){
    if (find_even){
      if (values[i] % 2 == 0) return values[i];
    } else {
      if (values[i] % 2 != 0) return values[i];
    }
  }
  return 0;
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