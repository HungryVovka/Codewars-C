// -----------------------------------------------------------
// Instructions
// Write a function that takes a single non-empty string of only lowercase and uppercase ascii letters (word) as its argument, 
// and returns an ordered list containing the indices of all capital (uppercase) letters in the string.
// 
// Example (Input --> Output)
// "CodEWaRs" --> [0,3,4,6]
// -----------------------------------------------------------

#include <stddef.h> // size_t
#include <stdlib.h> // malloc

size_t *find_capitals (const char *word, size_t *uppercase_count){
// report the number of uppercase letters through the
// 'uppercase_count' pointer:
// return a free-able pointer:
  size_t i, conteggio;
  size_t *indici;
  conteggio = 0;
  for (i = 0; word[i] != '\0'; i++){
    if (word[i] >= 'A' && word [i] <= 'Z') conteggio++;
  }
  *uppercase_count = conteggio;
  if (conteggio == 0) return NULL;
  
  indici = malloc(conteggio * sizeof(size_t));
  if (!indici) return NULL;
  
  conteggio = 0;
  for (i = 0; word[i] != '\0'; i++){
    if (word[i] >= 'A' && word[i] <= 'Z') indici[conteggio++] = i;
  }
  return indici;
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