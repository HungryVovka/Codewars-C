// -----------------------------------------------------------
// You have a positive number n consisting of digits. You can do at most one operation: Choosing the index of a digit in the 
// number, remove this digit at that index and insert it back to another or at the same place in the number in order to find the 
// smallest number you can get.
// 
// Task:
// Return an array or a tuple or a string depending on the language (see "Sample Tests") with
// 
// the smallest number you got
// the index i of the digit d you took, i as small as possible
// the index j (as small as possible) where you insert this digit d to have the smallest number.
// Examples:
// smallest(261235) --> [126235, 2, 0] or (126235, 2, 0) or "126235, 2, 0"
// 
// 126235 is the smallest number gotten by taking 1 at index 2 and putting it at index 0
// 
// smallest(209917) --> [29917, 0, 1] or ...
// 
// [29917, 1, 0] could be a solution too but index `i` in [29917, 1, 0] is greater than 
// index `i` in [29917, 0, 1].
// 
// 29917 is the smallest number gotten by taking 2 at index 0 and putting it at index 1 which gave 029917 which is the 
// number 29917.
// 
// smallest(1000000) --> [1, 0, 6] or ...
// 
// Note
// Have a look at "Sample Tests" to see the input and output in each language
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

long long *smallest(long long numero){
  // return a heap-allocated array of 3 long longs:
  char cifre[21]; // 20 + '\0'
  sprintf(cifre, "%lld", numero);
  int lunghezza = strlen(cifre);
  long long *risposta = malloc(3 * sizeof(long long));
  risposta[0] = numero;
  risposta[1] = 0;
  risposta[2] = 0;
  int i, j;
  for (i = 0; i < lunghezza; i++){
    for (j = 0; j < lunghezza; j++){
      if (i == j) continue;
      char copia[21];
      strcpy(copia, cifre);
      char cifra = copia[i];
      memmove(&copia[i], &copia[i+1], lunghezza - i);
      char nuova[21] = {0};
      if (j == 0){
        nuova[0] = cifra;
        strncpy(nuova + 1, copia, lunghezza - 1);
      } else {
        strncpy(nuova, copia, j);
        nuova[j] = cifra;
        strcpy(nuova + j + 1, copia + j);
      }
      long long nuovo_numero = atoll(nuova);
      if (nuovo_numero < risposta[0]){
        risposta[0] = nuovo_numero;
        risposta[1] = i;
        risposta[2] = j;
      }
    }
  }
  return risposta;
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