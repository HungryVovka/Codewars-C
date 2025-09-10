// -----------------------------------------------------------
// When provided with a letter, return its position in the alphabet.
// 
// Input :: "a"
// 
// Output :: "Position of alphabet: 1"
// 
// Note: Only lowercased English letters are tested
// -----------------------------------------------------------

#include <stdio.h> // sprintf
#include <stdlib.h> // malloc

char* position(char alphabet){
  int numero = (int)alphabet - 96;
  char *risultato = malloc(32);
  if (risultato == NULL) return NULL;
  sprintf(risultato, "Position of alphabet: %d", numero);
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