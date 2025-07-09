// -----------------------------------------------------------
// If you can't sleep, just count sheeps!!
// 
// Task:
// Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". 
// Input will always be valid, i.e. no negative integers.
// -----------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *count_sheep(unsigned n){
  if (n == 0) return calloc(1, 1); // return a heap-allocated string
  size_t max_digits;
  size_t sheep_len;
  size_t per_sheep; 
  size_t buffer_size;
  max_digits = 10;
  sheep_len = strlen(" sheep...");
  per_sheep = max_digits + sheep_len;
  buffer_size = n * per_sheep + 1; // 1 for '\0'
  char *answer = malloc(buffer_size);
  if (!answer) return NULL;
  char *write_ptr = answer;
  unsigned i;
  int written;
  for (i = 1; i <= n; i++){
    written = sprintf(write_ptr, "%u sheep...", i);
    write_ptr += written;
  }
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