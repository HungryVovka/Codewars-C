// -----------------------------------------------------------
// I will give you an integer. Give me back a shape that is as long and wide as the 
// integer. The integer will be a whole number between 1 and 50.
// 
// Example
// n = 3, so I expect a 3x3 square back just like below as a string:
// 
// +++
// +++
// +++
// -----------------------------------------------------------

#include <stdlib.h>     // malloc
#include <stddef.h>     // size_t

// Return a dynamically allocated, null-terminated string.
char* generate_shape(size_t n){
  size_t total_len;
  char *answer;
  size_t row, col;
  size_t pos = 0;
  
  if (n == 0) return calloc(1, 1);
  total_len = n * (n + 1) + 1;
  answer = (char *)malloc(total_len);
  if (answer == NULL) return NULL;
  
  for (row = 0; row < n; row++){
    for (col = 0; col < n; col++){
      answer[pos] = '+';
      pos++;
    }
    if (row + 1 < n){
      answer[pos] = '\n';
      pos++;  
    }
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