// -----------------------------------------------------------
// Task:
// You have to write a function pattern which returns the following Pattern(See Pattern & Examples) upto n 
// number of rows.
// 
// Note:Returning the pattern is not the same as Printing the pattern.
// Rules/Note:
// If n < 1 then it should return "" i.e. empty string.
// There are no whitespaces in the pattern.
// 
// Pattern:
// 1
// 22
// 333
// ....
// .....
// nnnnnn
// 
// Examples:
// pattern(5):
// 
// 1
// 22
// 333
// 4444
// 55555
// pattern(11):
// 
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777
// 88888888
// 999999999
// 10101010101010101010
// 1111111111111111111111
// Hint: Use \n in string to jump to next line
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <stdio.h>  // sprintf, snprintf

char* pattern(const int n){
  int lunghezza_totale;
  int i, j, len_num, pos;
  char *risultato;

  if (n <= 0){
    // stringa vuota
    risultato = malloc(1);
    if (risultato) risultato[0] = '\0';
    return risultato;
  }
  
  lunghezza_totale = 0;
  for (i = 1; i <= n; i++){
    len_num = snprintf(NULL, 0, "%d", i);
    lunghezza_totale += len_num * i;
    if (i != n) lunghezza_totale += 1;
  }
  
  risultato = malloc(lunghezza_totale + 1);
  if (!risultato) return NULL;
  
  pos = 0;
  for (i = 1; i <= n; i++){
    for (j = 0; j < i; j++){
      pos += sprintf(risultato + pos, "%d", i);
    }
    if (i != n) risultato[pos++] = '\n';
  }
  risultato[pos] = '\0';
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