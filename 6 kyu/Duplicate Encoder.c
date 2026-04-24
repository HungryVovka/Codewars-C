// -----------------------------------------------------------
// The goal of this exercise is to convert a string to a new string where 
// each character in the new string is "(" if that character appears only 
// once in the original string, or ")" if that character appears more than 
// once in the original string. Ignore capitalization when determining if 
// a character is a duplicate.
// 
// Examples
// "din"      =>  "((("
// "recede"   =>  "()()()"
// "Success"  =>  ")())())"
// "(( @"     =>  "))((" 
// 
// Notes
// Assertion messages may be unclear about what they display in some 
// languages. If you read "...It Should encode XXX", the "XXX" is the 
// expected result, not the input!
// -----------------------------------------------------------

#include <stdlib.h>   // malloc
#include <ctype.h>    // tolower

char *DuplicateEncoder (const char *string){
    // return a nul-terminated, heap-allocated string
  int freq[256] = {};
  int i = 0;
  
  while (string[i]){
    unsigned char c = (unsigned char)tolower(string[i]);
    freq[c]++;
    i++;
  }
  
  char *answer = malloc(i + 1);
  if (!answer) return NULL;
  
  i = 0;
  
  while (string[i]){
    unsigned char c = (unsigned char)tolower(string[i]);
    if (freq[c] > 1){
      answer[i] = ')';
    } else {
      answer[i] = '(';
    }
    i++;
  }
  answer[i] = '\0';
  return answer;
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