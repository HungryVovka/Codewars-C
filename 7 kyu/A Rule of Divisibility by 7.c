// -----------------------------------------------------------
// A number m of the form 10x + y is divisible by 7 if and only if x − 2y 
// is divisible by 7. In other words, subtract twice the last digit from 
// the number formed by the remaining digits. Continue to do this until 
// a number known to be divisible by 7 is obtained; you can stop when 
// this number has at most 2 digits because you are supposed to know if 
// a number of at most 2 digits is divisible by 7 or not.
// 
// The original number is divisible by 7 if and only if the last number 
// obtained using this procedure is divisible by 7.
// 
// Examples:
// 1 - m = 371 -> 37 − (2×1) -> 37 − 2 = 35 ; thus, since 35 is divisible 
// by 7, 371 is divisible by 7.
// 
// The number of steps to get the result is 1.
// 
// 2 - m = 1603 -> 160 - (2 x 3) -> 154 -> 15 - 8 = 7 and 7 is divisible 
// by 7.
// 
// 3 - m = 372 -> 37 − (2×2) -> 37 − 4 = 33 ; thus, since 33 is not divisible 
// by 7, 372 is not divisible by 7.
// 
// 4 - m = 477557101->47755708->4775554->477547->47740->4774->469->28 
// and 28 is divisible by 7, so is 477557101. The number of steps is 7.
// 
// Task:
// Your task is to return to the function seven(m) (m integer >= 0) 
// an array (or a pair, depending on the language) of numbers, 
// the first being the last number m with at most 2 digits obtained 
// by your function (this last m will be divisible or not by 7), 
// the second one being the number of steps to get the result.
// 
// Forth Note:
// Return on the stack number-of-steps, last-number-m-with-at-most-2-digits 
// 
// Examples:
// seven(371) should return [35, 1]
// seven(1603) should return [7, 2]
// seven(477557101) should return [28, 7]
// -----------------------------------------------------------

#include <stdlib.h>   // llabs

int *seven (long long m){
// Return an array of 2 int
// Memory will not be freed, return a static / global array
  static int result[2];
  int steps = 0;
  while (llabs(m) >= 100){
    long long last_digit = m % 10;
    long long rest = m / 10;
    m = rest - 2 * last_digit;
    steps++;
  }
  result[0] = (int)m;
  result[1] = steps;
  return result;
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