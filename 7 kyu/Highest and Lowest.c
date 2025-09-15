// -----------------------------------------------------------
// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest 
// number.
// 
// Examples
// high_and_low("1 2 3 4 5") // return "5 1"
// high_and_low("1 2 -3 4 5") // return "5 -3"
// high_and_low("1 9 3 4 -5") // return "9 -5"
// 
// high_and_low("1 2 3 4 5", result) // result "5 1"
// high_and_low("1 2 -3 4 5", result) // result "5 -3"
// high_and_low("1 9 3 4 -5", result) // result "9 -5"
// 
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.
// -----------------------------------------------------------

#include <stdio.h> // sprintf
#include <stdlib.h> // strtol
#include <limits.h> // INT_MIN, INT_MAX

void high_and_low (const char *strnum, char *result){
// print your answer to <result> :
  const char *p = strnum;
  char *endptr;
  int max_val = INT_MIN;
  int min_val = INT_MAX;
  while (*p != '\0'){
    long valore = strtol(p, &endptr, 10);
    if (valore > max_val) max_val = (int)valore;
    if (valore < min_val) min_val = (int)valore;
    p = endptr;
    while (*p == ' ') p++;
  }
  sprintf(result, "%d %d", max_val, min_val);
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