// -----------------------------------------------------------
// Write a function that removes the spaces from the string, then return the resultant string.
// 
// Examples (Input -> Output):
// 
// "8 j 8   mBliB8g  imjB8B8  jl  B" -> "8j8mBliB8gimjB8B8jlB"
// "8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd" -> "88Bifk8hB8BB8BBBB888chl8BhBfd"
// "8aaaaa dddd r     " -> "8aaaaaddddr"
// 
// For C and Nasm, you must return a new dynamically allocated string.
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in){
  size_t lunghezza = strlen(str_in);
  char *risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  size_t i = 0, j = 0;
  for (i = 0; i < lunghezza; i++){
    if (str_in[i] != ' ') risultato[j++] = str_in[i];
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