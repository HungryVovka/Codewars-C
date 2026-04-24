// -----------------------------------------------------------
// Complete the method/function so that it converts dash/underscore 
// delimited words into camel casing. The first word within the output 
// should be capitalized only if the original word was capitalized 
// (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.
// 
// Examples
// "the-stealth-warrior" gets converted to "theStealthWarrior"
// 
// "The_Stealth_Warrior" gets converted to "TheStealthWarrior"
// 
// "The_Stealth-Warrior" gets converted to "TheStealthWarrior"
// 
// Regular ExpressionsAlgorithmsStrings
// -----------------------------------------------------------

#include <ctype.h>    // toupper

//  do not allocate memory for the result
//  write to pre-allocated pointer *camel

void to_camel_case(const char *text, char *camel){
  int i = 0, j = 0, make_upper = 0;
  
  while (text[i] != '\0'){
    if (text[i] == '-' || text[i] == '_'){
      make_upper = 1;
    } else {
      if (make_upper){
        camel[j] = (char)toupper((unsigned char)text[i]);
        make_upper = 0;
      } else {
        camel[j] = text[i];
      }
      j++;
    }
    i++;
  }
  camel[j] = '\0';
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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