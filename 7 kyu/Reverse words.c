// -----------------------------------------------------------
// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should 
// be retained.
// 
// Examples
// "This is an example!" ==> "sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"
// -----------------------------------------------------------

#include <stdlib.h> // malloc, free
#include <string.h> // strlen, strcpy

static void inverti_intervallo(char *testo, int a, int b){
  char tmp;
  while (a < b){
    tmp = testo[a];
    testo[a] = testo[b];
    testo[b] = tmp;
    a++;
    b--;
  }
}

char* reverseWords(const char* text) {
    // return a heap-allocated string:
  int lunghezza, i, inizio;
  char *risultato;
  
  lunghezza = strlen(text);
  risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  strcpy(risultato, text);
  
  inizio = 0;
  for (i = 0; i <= lunghezza; i++){
    if (risultato[i] == ' ' || risultato[i] == '\0'){
      inverti_intervallo(risultato, inizio, i - 1);
      inizio = i + 1;
    }
  }
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