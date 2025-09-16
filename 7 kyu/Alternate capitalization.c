// -----------------------------------------------------------
// Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 
// 0 will be considered even.
// 
// For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.
// 
// The input will be a lowercase string with no spaces.
// 
// Good luck!
// 
// If you like this Kata, please try:
// 
// Indexed capitalization
// 
// Even-odd disparity
// -----------------------------------------------------------

#include <stdlib.h> // malloc, calloc
#include <string.h> // strlen
#include <ctype.h>  // toupper, tolower

char **capitalize(const char *testo){
// return a dynamically-allocated array of 2 dynamically-allocated strings
// the array and the 2 strings will be freed by the tests
  int lunghezza = strlen(testo);
  int i;
  
  char **coppia = malloc(2 * sizeof * coppia);
  if (!coppia) return NULL;
  
  coppia[0] = malloc(lunghezza + 1);
  coppia[1] = malloc(lunghezza + 1);
  if (!coppia[0] || !coppia[1]){
    free(coppia[0]);
    free(coppia[1]);
    free(coppia);
    return NULL;
  }
  
  for (i = 0; i < lunghezza; i++){
    char c = testo[i];
    if (i % 2 == 0){
      coppia[0][i] = (char)toupper((unsigned char)c);
      coppia[1][i] = (char)tolower((unsigned char)c);
    } else {
      coppia[0][i] = (char)tolower((unsigned char)c);
      coppia[1][i] = (char)toupper((unsigned char)c);
    }
  }
  
  coppia[0][lunghezza] = '\0';
  coppia[1][lunghezza] = '\0';
  return coppia;
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