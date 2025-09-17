// -----------------------------------------------------------
// Write a program to determine if a string contains only unique characters. Return true if it does and false 
// otherwise.
// 
// The string may contain any of the 128 ASCII characters. Characters are case-sensitive, e.g. 'a' and 'A' are 
// considered different characters.
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <string.h>  // strlen

bool has_unique_chars(const char *str){
  int visti[256];   // caratteri visti
  size_t i;         // indice
  unsigned char c;  // carattere corrente
  size_t lunghezza; // lunghezza della stringa
  
  for (i = 0; i < 256; i++) visti[i] = 0; // azzeriamo l'array
  lunghezza = strlen(str);
  
  for (i = 0; i < lunghezza; i++){
    c = (unsigned char)str[i];
    if (visti[c]) return false;   // duplicato
    visti[c] = 1;                 // visto
  }
  
  return true;
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