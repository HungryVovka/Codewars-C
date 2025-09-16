// -----------------------------------------------------------
// Given a string s, your task is to return another string such that even-indexed and odd-indexed characters of s are grouped 
// and the groups are space-separated. Even-indexed group comes as first, followed by a space, and then by the odd-indexed 
// part.
// 
// Examples
// input:    "CodeWars" => "CdWr oeas"
//            ||||||||      |||| ||||
// indices:   01234567      0246 1357
// 
// Even indices 0, 2, 4, 6, so we have "CdWr" as the first group.
// Odd indices are 1, 3, 5, 7, so the second group is "oeas".
// And the final string to return is "Cdwr oeas".
// 
// Notes
// Tested strings are at least 8 characters long.
// -----------------------------------------------------------

#include <stdlib.h> // malloc, free
#include <string.h> // strlen, strcpy

char *sortMyString (const char *s){
// return a nul-terminated, heap-allocated string
  int lunghezza, i, spazio;
  int indice_pari = 0, indice_dispari = 0;
  char *pari, *dispari, *risultato;
  
  lunghezza = strlen(s);
  pari = malloc(lunghezza + 1);
  dispari = malloc(lunghezza + 1);
  if (!pari || !dispari) return NULL;
  
  for (i = 0; i < lunghezza; i++){
    if (i % 2 == 0){
      pari[indice_pari++] = s[i];
    } else {
      dispari[indice_dispari++] = s[i];
    }
  }
  pari[indice_pari] = '\0';
  dispari[indice_dispari] = '\0';
  
  spazio = strlen(pari) + strlen(dispari) + 2;
  risultato = malloc(spazio);
  if (!risultato) return NULL;
  
  strcpy(risultato, pari);
  risultato[strlen(pari)] = ' ';
  strcpy(risultato + strlen(pari) + 1, dispari);
  
  free(pari);
  free(dispari);
  
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