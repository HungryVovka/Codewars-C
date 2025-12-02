// -----------------------------------------------------------
// The maximum sum subarray problem consists in finding the maximum sum of a 
// contiguous subsequence in an array or list of integers:
// 
// For example:
// 
// Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output: 6 (Sum of [4, -1, 2, 1])
// 
// Easy case is when the list is made up of only positive numbers and the maximum 
// sum is the sum of the whole array. If the list is made up of only negative numbers, 
// return 0 instead. Your solution should be fast, it will be tested on very large 
// arrays so slow solutions will time out.
// 
// Empty list is considered to have zero greatest sum. Note that the empty list or 
// array is also a valid sublist/subarray.
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int maxSequence(const int array[/* n */], size_t n){
  size_t i;
  int max_sum = 0, current_sum = 0;
  for (i = 0; i < n; i++){
    current_sum += array[i];
    if (current_sum < 0) current_sum = 0;
    if (current_sum > max_sum) max_sum = current_sum;
  }
  return max_sum;
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