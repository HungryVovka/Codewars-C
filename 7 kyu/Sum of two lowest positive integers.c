// -----------------------------------------------------------
// Create a function that returns the sum of the two lowest positive numbers given 
// an array of minimum 4 positive integers. No floats or non-positive integers will 
// be passed.
// 
// For example, when an array is passed like [19, 5, 42, 2, 77], the output 
// should be 7.
// 
// [10, 343445353, 3453445, 3453545353453] should return 3453455.
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <limits.h>   // LLONG_MAX

long long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
  long long smallest = LLONG_MAX;
  long long second_smallest = LLONG_MAX;
  size_t i;
  for (i = 0; i < n; i++){
    long long value = numbers[i];
    if (value < smallest){
      second_smallest = smallest;
      smallest = value;
    } else if (value < second_smallest){
      second_smallest = value;
    }
  }
  return smallest + second_smallest;
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