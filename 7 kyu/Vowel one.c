// -----------------------------------------------------------
// vowelOne
// Write a function that takes a string and outputs a strings of 1's and 0's where vowels become 1's and 
// non-vowels become 0's.
// 
// All non-vowels including non alpha characters (spaces,commas etc.) should be included.
// 
// Examples:
// 
// vowelOne "abceios" -- "1001110"
// 
// vowelOne "aeiou, abc" -- "1111100100"
// -----------------------------------------------------------

#include <ctype.h> // tolower

//  don't dynamically allocate memory for return
//  assign results to output, then return output
//  output is preallocated / not null terminated

char *vowel_one(const char *input, char *output){
  int i;    // indice
  char c;   // carattere corrente
  
  for (i = 0; input[i] != '\0'; i++){
    c = (char)tolower((unsigned char)input[i]);
    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u'){
      output[i] = '1'; // vocale
    } else {
      output[i] = '0'; // altrimenti
    }
  }
  output[i] = '\0'; // terminatore di stringa
  return output;
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