// -----------------------------------------------------------
// altERnaTIng cAsE <=> ALTerNAtiNG CaSe
// Define String.prototype.toAlternatingCase (or a similar function/method such as 
// to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each 
// lowercase letter becomes uppercase and each uppercase letter becomes lowercase. For example:
// 
// to_alternating_case("hello world"); // => "HELLO WORLD"
// to_alternating_case("HELLO WORLD"); // => "hello world"
// to_alternating_case("hello WORLD"); // => "HELLO world"
// to_alternating_case("HeLLo WoRLD"); // => "hEllO wOrld"
// to_alternating_case("12345"); // => "12345" (Non-alphabetical characters are unaffected)
// to_alternating_case("1a2b3c4d5e"); // => "1A2B3C4D5E"
// to_alternating_case("String.prototype.toAlternatingCase"); // => "sTRING.PROTOTYPE.TOaLTERNATINGcASE"
// 
// As usual, your function/method should be pure, i.e. it should not mutate the original string.
// -----------------------------------------------------------

#include <stdlib.h>
#include <ctype.h>

char *to_alternating_case(const char *s) {
  // return a heap-allocated string:
  size_t calcola_lunghezza = 0;
  while (s[calcola_lunghezza] != '\0') calcola_lunghezza++;
  char *nuovo = malloc(calcola_lunghezza + 1);
  if (!nuovo) return NULL;
  size_t i;
  for (i = 0; i < calcola_lunghezza; i++){
    if (islower((unsigned char)s[i])){
      nuovo[i] = toupper((unsigned char)s[i]);
    } else if (isupper((unsigned char)s[i])){
      nuovo[i] = tolower((unsigned char)s[i]);
    } else {
      nuovo[i] = s[i];
    }
  }
  nuovo[calcola_lunghezza] = '\0';
  return nuovo;
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