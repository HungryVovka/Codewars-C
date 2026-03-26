// -----------------------------------------------------------
// Factorials are often used in probability and are used as an introductory
// problem for looping constructs. In this kata you will be summing together multiple factorials.
// 
// Here are a few examples of factorials:
// 
// 4 Factorial = 4! = 4 * 3 * 2 * 1 = 24
// 
// 6 Factorial = 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
// In this kata you will be given a list of values that you must first find the factorial, 
// and then return their sum.
// 
// For example if you are passed the list [4, 6] the equivalent mathematical expression would 
// be 4! + 6! which would equal 744.
// 
// Good Luck!
// 
// Note: Assume that all values in the list are positive integer values > 0 and each value in 
// the list is unique.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

unsigned long long sum_factorial(size_t z, const int array[z]){
  size_t i;
  int max;
  int has_zero;
  unsigned long long current_factorial;
  unsigned long long sum;
  
  max = array[0];
  has_zero = (array[0] == 0);
  for (i = 1; i < z; i++){
    if (array[i] > max) max = array[i];
    if (array[i] == 0) has_zero = 1;
  }
  
  sum = 0;
  if (has_zero) sum += 1;
  
  current_factorial = 1;
  
  for (i = 1; i <= (size_t)max; i++){
    current_factorial *= i;
    size_t inner_i;
    for (inner_i = 0; inner_i < z; inner_i++){
      if (array[inner_i] == (int)i){
        sum += current_factorial;
        break;
      }
    }
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