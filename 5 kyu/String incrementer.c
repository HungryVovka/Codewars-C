// -----------------------------------------------------------
// Your job is to write a function which increments a string, to create a new string.
// 
// If the string already ends with a number, the number should be incremented by 1.
// If the string does not end with a number. the number 1 should be appended to the new string.
// 
// Examples:
// 
// foo -> foo1
// 
// foobar23 -> foobar24
// 
// foo0042 -> foo0043
// 
// foo9 -> foo10
// 
// foo099 -> foo100
// 
// Attention: If the number has leading zeros the amount of digits should be considered.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free
#include <string.h>   // strlen, memcpy
#include <ctype.h>    // isdigit

char *incrementString(const char *str){
// allocate on the heap, memory will be freed
  size_t original_length;
  size_t digit_start_index;
  size_t index;
  size_t digit_count;
  int carry;
  char *answer;
  original_length = strlen(str);
  digit_start_index = original_length;
  while (digit_start_index > 0 && isdigit((unsigned char)str[digit_start_index - 1])){
    digit_start_index--;
  }
  digit_count = original_length - digit_start_index;
  if (digit_count == 0){
    answer = (char *)malloc(original_length + 2);
    if (!answer) return NULL;
    memcpy(answer, str, original_length);
    answer[original_length] = '1';
    answer[original_length + 1] = '\0';
    return answer;
  }
  answer = (char *)malloc(original_length + 2);
  if (!answer) return NULL;
  memcpy(answer, str, original_length + 1);
  carry = 1;
  index = original_length;
  while (index > digit_start_index && carry){
    index--;
    if (answer[index] == '9'){
      answer[index] = '0';
    } else {
      answer[index]++;
      carry = 0;
    }
  }
  if (carry){
    memmove(answer + digit_start_index + 1, 
            answer + digit_start_index, 
            digit_count + 1);
    answer[digit_start_index] = '1';
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