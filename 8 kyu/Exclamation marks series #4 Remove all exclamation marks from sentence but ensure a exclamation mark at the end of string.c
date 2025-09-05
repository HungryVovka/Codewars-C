// -----------------------------------------------------------
// Description:
// Remove all exclamation marks from sentence but ensure a exclamation mark at the end of string. For a beginner kata, you 
// can assume that the input data is always a non empty string, no need to verify it.
// 
// Examples
// "Hi!"     ---> "Hi!"
// "Hi!!!"   ---> "Hi!"
// "!Hi"     ---> "Hi!"
// "!Hi!"    ---> "Hi!"
// "Hi! Hi!" ---> "Hi Hi!"
// "Hi"      ---> "Hi!"
// -----------------------------------------------------------

#include <stdlib.h> // malloc, free
#include <string.h> // strlen

char *remove_bang (const char *string){
// allocate a new string on the heap; memory will be freed
  size_t len = strlen(string);
  char *nuova = malloc(len + 2);
  if (!nuova) return NULL;
  
  size_t i = 0, j = 0;
  for (; i < len; i++){
    if (string[i] != '!') nuova[j++] = string[i];
  }
  
  nuova[j++] = '!';
  nuova[j] = '\0';
  return nuova;
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