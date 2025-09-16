// -----------------------------------------------------------
// Your coworker was supposed to write a simple helper function to capitalize a string (that contains a single word) before they 
// went on vacation.
// 
// Unfortunately, they have now left and the code they gave you doesn't work. Fix the helper function they wrote so that it 
// works as intended (i.e. it must make the first character in the string upper case).
// 
// The string will always start with a letter and will never be empty.
// 
// Examples:
// 
// "hello" --> "Hello"
// "Hello" --> "Hello" (the first letter was already capitalized)
// "a"     --> "A"
// -----------------------------------------------------------

#include <ctype.h>  // toupper, tolower
#include <stdlib.h> // malloc
#include <string.h> // strlen, memcpy

char *capitalize_word (char *parola){
  int lunghezza;
  char *risultato;
  
  lunghezza = strlen(parola);
  risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  if (lunghezza > 0){
    risultato[0] = (char)toupper((unsigned char)parola[0]);
    memcpy(risultato + 1, parola + 1, lunghezza + 1);
  }
  risultato[lunghezza] = '\0';
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