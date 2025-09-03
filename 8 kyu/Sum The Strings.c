// -----------------------------------------------------------
// Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):
// 
// Example: (Input1, Input2 -->Output)
// 
// "4",  "5" --> "9"
// "34", "5" --> "39"
// "", "" --> "0"
// "2", "" --> "2"
// "-5", "3" --> "-2"
// 
// Notes:
// 
// If either input is an empty string, consider it as zero.
// 
// Inputs and the expected output will never exceed the signed 32-bit integer limit (2^31 - 1)
// -----------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *sum_strings (char *sum, const char *a, const char *b){
  // write to sum and return it
  const char *numero1 = (a && *a) ? a : "0";
  const char *numero2 = (b && *b) ? b : "0";
  long long valore1 = strtoll(numero1, NULL, 10);
  long long valore2 = strtoll(numero2, NULL, 10);
  long long totale = valore1 + valore2;
  sprintf(sum, "%lld", totale);
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