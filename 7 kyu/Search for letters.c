// -----------------------------------------------------------
// Create a function which accepts one arbitrary string as an argument, 
// and return a string of length 26.
// 
// The objective is to set each of the 26 characters of the output string 
// to either '1' or '0' based on the fact whether the Nth letter of 
// the alphabet is present in the input (independent of its case).
// 
// So if an 'a' or an 'A' appears anywhere in the input string (any number 
// of times), set the first character of the output string to '1', 
// otherwise to '0'. if 'b' or 'B' appears in the string, set the second 
// character to '1', and so on for the rest of the alphabet.
// 
// For instance:
// 
// "a   **&  cZ"  =>  "10100000000000000000000001"
// "aaaaaaa79345675"  =>  "10000000000000000000000000"
// "&%#*"  =>  "00000000000000000000000000"
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free
#include <ctype.h>    // tolower, isalpha

char *change(const char *str_in) {
    // return a heap-allocated string:
  char *answer;
  int i;
  
  answer = (char *)malloc(27);
  if (!answer) return NULL;
  
  for (i = 0; i < 26; i++) answer[i] = '0';
  answer[26] = '\0';
  
  for (i = 0; str_in[i] != '\0'; i++){
    char c = str_in[i];
    if (isalpha((unsigned char)c)){
      int j = tolower((unsigned char)c) - 'a';
      answer[j] = '1';
    }
  }
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