// -----------------------------------------------------------
// Given a string made of digits [0-9], return a string where each digit is repeated a number of times equals to its 
// value.
// 
// Examples
// "312" should return "333122"
// "102269" should return "12222666666999999999"
// -----------------------------------------------------------

#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *digits_explode (const char *digits){
  int len = 0, i, j, k, count;
  char *answer;
  for (i = 0; digits[i]; i++){
    len += digits[i] - '0';
  }
  answer = malloc(len + 1);
  if (!answer) return NULL;
  k = 0;
  for (i = 0; i <= digits[i]; i++){
    if (isdigit(digits[i])){
      count = digits[i] - '0';
      for (j = 0; j < count; j++){
        answer[k++] = digits[i];
      }
    }
  }
  answer[k] = '\0';
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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