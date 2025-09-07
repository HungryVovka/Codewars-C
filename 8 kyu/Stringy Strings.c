// -----------------------------------------------------------
// write me a function stringy that takes a size and returns a string of alternating 1s and 0s.
// 
// the string should start with a 1.
// 
// a string with size 6 should return :'101010'.
// 
// with size 4 should return : '1010'.
// 
// with size 12 should return : '101010101010'.
// 
// The size will always be positive and will only use whole numbers.
// -----------------------------------------------------------

#include <stdlib.h> // malloc, size_t

char *stringy(size_t size){
    // return a malloced string, memory will be freed
  char *risultato = malloc(size + 1);
  if (!risultato) return NULL;
  size_t i = 0;
  for (; i < size; i++) risultato[i] = (i % 2 == 0) ? '1' : '0';
  risultato[size] = '\0';
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