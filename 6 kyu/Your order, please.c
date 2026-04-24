// -----------------------------------------------------------
// Your task is to sort a given string. Each word in the string will contain 
// a single number. This number is the position the word should have in the result.
// 
// Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).
// 
// If the input string is empty, return an empty string. The words in the input 
// String will only contain valid consecutive numbers.
// 
// Examples
// "is2 Thi1s T4est 3a"  -->  "Thi1s is2 3a T4est"
// "4of Fo1r pe6ople g3ood th5e the2"  -->  "Fo1r the2 g3ood 4of th5e pe6ople"
// ""  -->  ""
// StringsFundamentals
// -----------------------------------------------------------

#include <string.h>   // memcpy
#include <ctype.h>    // isdigit

char *order_words (char *ordered, const char *words){
// write to ordered and return it
// the size of 'ordered' is equal to 1 + strlen(words)
  const char *pos[10] = {0};
  int len[10] = {0};
  int i = 0;
  
  while (words[i]){
    while (words[i] == ' ') i++;
    if (!words[i]) break;
    
    int start = i;
    int length = 0;
    int index = -1;
    
    while (words[i] && words[i] != ' '){
      if (isdigit((unsigned char)words[i])) index = words[i] - '1';
      i++;
      length++;
    }
    
    if (index >= 0 && index < 10){
      pos[index] = words + start;
      len[index] = length;
    }
  }
  int out = 0;
  
  for (i = 0; i < 10; i++){
    if (pos[i]){
      memcpy(ordered + out, pos[i], len[i]);
      out += len[i];
      ordered[out++] = ' ';
    }
  }
  if (out > 0) out--;
  ordered[out] = '\0';
  return ordered;
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