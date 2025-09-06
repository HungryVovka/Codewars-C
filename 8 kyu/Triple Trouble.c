// -----------------------------------------------------------
// Triple Trouble
// Create a function that will return a string that combines all of the letters of the three inputed strings in groups. Taking the first 
// letter of all of the inputs and grouping them next to each other. Do this for every letter, see example below!
// 
// E.g. Input: "aa", "bb" , "cc" => Output: "abcabc"
// 
// Note: You can expect all of the inputs to be the same length.
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <string.h> // strlen

char *triple_trouble(const char *one, const char *two, const char *three){
  size_t len = strlen(one); // we think that the lenght of all is equal
  char *risultato = malloc(3 * len + 1);
  if (!risultato) return NULL;
  
  size_t i = 0, j = 0;
  for (; i < len; i++){
    risultato[j++] = one[i];
    risultato[j++] = two[i];
    risultato[j++] = three[i];
  }
  risultato[j] = '\0';
  return risultato;
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