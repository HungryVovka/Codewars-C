// -----------------------------------------------------------
// Given the string representations of two integers, return the string 
// representation of the sum of those integers.
// 
// For example:
// 
// strsum("1", "2")    /* => 3 */
// 
// A string representation of an integer will contain no characters besides 
// the ten numerals "0" to "9".
// 
// I have removed the use of BigInteger and BigDecimal in java
// 
// Python: your solution need to work with huge numbers (about a milion digits), 
// converting to int will not work.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc
#include <string.h>   // strlen, memmove

// return a pointer to a dynamically allocated, freeable buffer
char *strsum(const char *a, const char *b){
  int len_a, len_b;
  int max_len;
  int i, j, k;
  int carry;
  int digit_sum;
  int start;
  char *answer;
  len_a = strlen(a);
  len_b = strlen(b);
  max_len = (len_a > len_b) ? len_a : len_b;
  answer = malloc(max_len + 2);
  if (!answer) return NULL;
  answer[max_len + 1] = '\0';
  i = len_a - 1;
  j = len_b - 1;
  k = max_len;
  carry = 0;
  while (k >= 0){
    digit_sum = carry;
    if (i >= 0){
      digit_sum += a[i] - '0';
      i--;
    }
    if (j >= 0){
      digit_sum += b[j] - '0';
      j--;
    }
    answer[k] = (digit_sum % 10) + '0';
    carry = digit_sum / 10;
    k--;
  }
  start = 0;
  while (answer[start] == '0' && answer[start + 1] != '\0') start++;
  if (answer[0] == '0') memmove(answer, answer + start, max_len + 2 - start);
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