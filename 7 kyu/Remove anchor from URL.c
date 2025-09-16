// -----------------------------------------------------------
// Complete the function/method so that it returns the url with anything after the anchor (#) removed.
// 
// Examples
// "www.codewars.com#about" --> "www.codewars.com"
// "www.codewars.com?page=1" -->"www.codewars.com?page=1"
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <string.h> // strlen, memcpy

//  return a heap-allocated C-string
//  (memory will be freed by tester)

char *remove_url_anchor(const char *url_in){
  int i;
  int lunghezza = strlen(url_in);
  
  for (i = 0; i < lunghezza; i++){
    if (url_in[i] == '#'){
      lunghezza = i;
      break;
    }
  }
  
  char *risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  memcpy(risultato, url_in, lunghezza);
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