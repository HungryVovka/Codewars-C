// -----------------------------------------------------------
// Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development 
// and functioning of living organisms.
// 
// If you want to know more: http://en.wikipedia.org/wiki/DNA
// 
// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the 
// DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is 
// no DNA at all (again, except for Haskell).
// 
// More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)
// 
// Example: (input --> output)
// 
// "ATTGC" --> "TAACG"
// "GTAT" --> "CATA"
// -----------------------------------------------------------

/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h> // malloc
#include <string.h> // strlen

char *dna_strand(const char *dna){
  int lunghezza, i;
  char *risultato;
  
  lunghezza = strlen(dna);
  risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  for (i = 0; i < lunghezza; i++){
    switch (dna[i]){
        case 'A': risultato[i] = 'T'; break;
        case 'T': risultato[i] = 'A'; break;
        case 'C': risultato[i] = 'G'; break;
        case 'G': risultato[i] = 'C'; break;
        default: risultato[i] = dna[i];
    }
  }
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