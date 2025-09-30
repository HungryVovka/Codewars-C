// -----------------------------------------------------------
// Simple, given a string of words, return the length of the shortest word(s).
// 
// String will never be empty and you do not need to account for different data types.
// -----------------------------------------------------------

#include <sys/types.h>    // ssize_t
#include <string.h>       // strlen
#include <limits.h>       // INT_MAX

ssize_t find_short(const char *s){
  ssize_t min_len = INT_MAX;
  ssize_t current_len = 0;
  
  size_t i = 0;
  for (;; i++){
    if (s[i] == ' ' || s[i] == '\0'){
      if (current_len > 0 && current_len < min_len) min_len = current_len;
      current_len = 0;
      if (s[i] == '\0') break;
    } else {
      current_len++;
    }
  }
  return (min_len == INT_MAX) ? 0 : min_len;
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