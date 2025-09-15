// -----------------------------------------------------------
// This time no story, no theory. The examples below show you how to write function accum:
// 
// Examples:
// accum("abcd") -> "A-Bb-Ccc-Dddd"
// accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// accum("cwAt") -> "C-Ww-Aaa-Tttt"
// 
// The parameter of accum is a string which includes only letters from a..z and A..Z.
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <string.h> // strlen
#include <ctype.h>  // toupper, tolower

char *accum(const char *source){
// returned pointer will be freed:
  int lunghezza, dimensione, i, j, indice;
  char *risultato;
  
  lunghezza = strlen(source);
  dimensione = 0;
  for (i = 0; i < lunghezza; i++) dimensione += (i + 1);
  dimensione += (lunghezza - 1) + 1;
  risultato = malloc(dimensione);
  if (!risultato) return NULL;
  
  indice = 0;
  for (i = 0; i < lunghezza; i++){
    for (j = 0; j <= i; j++){
      if (j == 0){
        risultato[indice++] = (char)toupper((unsigned char)source[i]);
      } else {
        risultato[indice++] = (char)tolower((unsigned char)source[i]);
      }
    }
    if (i < lunghezza - 1) risultato[indice++] = '-';
  }
  
  risultato[indice] = '\0';
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