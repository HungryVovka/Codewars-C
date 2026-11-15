// -----------------------------------------------------------
// In your class, you have started lessons about arithmetic progression. 
// Since you are also a programmer, you have decided to write a function 
// that will return the first n elements of the sequence with the given 
// common difference d and first element a. Note that the difference may be zero!
// 
// The result should be a string of numbers, separated by comma and space.
// 
// Example
// # first element: 1, difference: 2, how many: 5
// arithmetic_sequence_elements(1, 2, 5) == "1, 3, 5, 7, 9"
// -----------------------------------------------------------

#include <stdlib.h>     // malloc, calloc
#include <stdio.h>      // sprintf
#include <string.h>     // strlen
#include <stddef.h>     // size_t

char *arithmetic_sequence_elements(int a, int d, size_t n){
    // return a heap-allocated string
  size_t i;
  size_t total_len;
  size_t pos;
  long long int current;
  char num_buf[32];
  char *answer;
  
  if (n == 0) return calloc(1, 1);
  
  total_len = 0;
  current = a;
  for (i = 0; i < n; i++){
    sprintf(num_buf, "%lld", current);
    total_len += strlen(num_buf);
    if (i + 1 < n) total_len += 2;
    current += d;
  }
  
  answer = malloc(total_len + 1);
  if (answer == NULL) return NULL;
  
  pos = 0;
  current = a;
  for (i = 0; i < n; i++){
    size_t len;
    sprintf(num_buf, "%lld", current);
    len = strlen(num_buf);
    memcpy(answer + pos, num_buf, len);
    pos += len;
    if (i + 1 < n){
      answer[pos++] = ',';
      answer[pos++] = ' ';
    }
    current += d;
  }
  answer[pos] = '\0';
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