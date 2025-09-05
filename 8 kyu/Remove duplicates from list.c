// -----------------------------------------------------------
// Define a function that removes duplicates from an array of non negative numbers and returns it as a 
// result.
// 
// The order of the sequence has to stay the same.
// 
// Examples:
// 
// Input -> Output
// [1, 1, 2] -> [1, 2]
// [1, 2, 1, 1, 3, 2] -> [1, 2, 3]
// -----------------------------------------------------------

#include <stdlib.h>
#include <stddef.h>

int *distinct(const int values[/*count*/], size_t count, size_t *pResultCount){
// report the length of your array through `pResultCount`:
// the returned pointer will be free()'d:
  int *risultato = malloc(count * sizeof(int));
  if (!risultato){
    *pResultCount = 0;
    return NULL;
  }
  
  size_t i, j, nuovo_len = 0;
  for (i = 0; i < count; i++){
    int valore = values[i];
    int gia_visto = 0;
    
    for (j = 0; j < nuovo_len; j++){
      if (risultato[j] == valore){
        gia_visto = 1;
        break;
      }
    }
    
    if (!gia_visto) risultato[nuovo_len++] = valore;
  }
  
  *pResultCount = nuovo_len;
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