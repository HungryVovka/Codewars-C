// -----------------------------------------------------------
// Jaden Smith, the son of Will Smith, is the star of films such as The Karate Kid (2010) and After Earth (2013). Jaden is also 
// known for some of his philosophy that he delivers via Twitter. When writing on Twitter, he is known for almost always 
// capitalizing every word. For simplicity, you'll have to capitalize each word, check out how contractions are expected to be in the 
// example below.
// 
// Your task is to convert strings to how they would be written by Jaden Smith. The strings are actual quotes from Jaden 
// Smith, but they are not capitalized in the same way he originally typed them.
// 
// Example:
// 
// Not Jaden-Cased: "How can mirrors be real if our eyes aren't real"
// Jaden-Cased:     "How Can Mirrors Be Real If Our Eyes Aren't Real"
// -----------------------------------------------------------

#include <ctype.h> // toupper, isalpha
#include <string.h> // strlen

char *to_jaden_case (char *jaden_case, const char *string){
// write to jaden_case and return it
  int lunghezza = strlen(string);
  int i;
  int nuovo_inizio = 1;
  
  for (i = 0; i < lunghezza; i++){
    char c = string[i];
    if (nuovo_inizio && isalpha((unsigned char)c)){
      jaden_case[i] = (char)toupper((unsigned char) c);
      nuovo_inizio = 0;
    } else {
      jaden_case[i] = c;
      if (c == ' ') nuovo_inizio = 1;
    }
  }
  jaden_case[lunghezza] = '\0';
  return jaden_case;
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