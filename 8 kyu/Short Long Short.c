// -----------------------------------------------------------
// Given 2 strings, a and b, return a string of the form short+long+short, with the shorter string on the 
// outside and the longer string on the inside. The strings will not be the same length, but they may be 
// empty ( zero length ).
// 
// Hint for R users:
// 
// The length of string is not always the same as the number of characters
// 
// For example: (Input1, Input2) --> output
// 
// ("1", "22") --> "1221"
// ("22", "1") --> "1221"
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>

char *short_long_short (const char *a, const char *b){
	size_t lunghezza_a = strlen(a);
  size_t lunghezza_b = strlen(b);
  
  const char *corta, *lunga;
  size_t lcorta, llunga;
  
  if (lunghezza_a < lunghezza_b){
    corta = a;
    lunga = b;
    lcorta = lunghezza_a;
    llunga = lunghezza_b;
  } else {
    corta = b;
    lunga = a;
    lcorta = lunghezza_b;
    llunga = lunghezza_a;
  }
  
  size_t totale = lcorta + llunga + lcorta + 1;
  char *risultato = malloc(totale);
  if(!risultato) return NULL;
  
  strcpy(risultato, corta);
  strcat(risultato, lunga);
  strcat(risultato, corta);
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