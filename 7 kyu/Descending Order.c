// -----------------------------------------------------------
// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in 
// descending order. Essentially, rearrange the digits to create the highest possible number.
// 
// Examples:
// Input: 42145 Output: 54421
// 
// Input: 145263 Output: 654321
// 
// Input: 123456789 Output: 987654321
// -----------------------------------------------------------

#include <inttypes.h>   // unit64_t
#include <stdlib.h>     // qsort

static int cmp_desc(const void *a, const void *b){
  return (*(int*)b - *(int*)a);
}

uint64_t descendingOrder(uint64_t n){
  if (n == 0) return 0;
  int digits[20];
  size_t count = 0;
  while (n > 0){
    digits[count++] = n % 10;
    n /= 10;
  }
  
  qsort(digits, count, sizeof(int), cmp_desc);
  uint64_t answer = 0;
  size_t i = 0;
  for (; i < count; i++) answer = answer * 10 + digits[i];
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