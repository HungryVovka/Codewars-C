// -----------------------------------------------------------
// In this task, you are required to implement a function in C that takes a string as 
// input and returns a newly allocated string. The new string should be formed by 
// repeating each letter in the input string a number of times equal to its position in 
// the alphabet. The function should not change the case of input letters and ignore 
// non-alphabetic characters.
// 
// For example, if the input string is " !abC ", the function should return “abbCCC”. 
// Here, ‘a’ is the 1st letter of the alphabet so it appears once, ‘b’ 
// is the 2nd letter so it appears twice, and ‘C’ (uppercase) is the 3rd letter so 
// it appears three times. The function ignores the spaces and the exclamation mark.
// 
// Input A string of mixed case letters and possibly non-alphabetic characters; 
// Example: abc!!.
// 
// Output A free()'able string where each alphabetic character in str is repeated a 
// number of times equal to its position in the alphabet; Example: abbccc.
// -----------------------------------------------------------

#include <stdlib.h>     // malloc
#include <ctype.h>      // isalpha, toupper

char*IndeXTime(const char* str){
  // Enjoy
  // returned string should be heap-allocated:
  size_t input_index = 0;
  size_t output_index = 0;
  
  while (str[input_index] != '\0'){
    if (isalpha((unsigned char)str[input_index])){
      int alpha_position = toupper((unsigned char)str[input_index]) - 'A' + 1;
      output_index += alpha_position;
    }
    input_index++;
  }
  
  char *answer = (char *)malloc(output_index + 1);
  if (answer == NULL) return NULL;
  
  size_t answer_index = 0;
  input_index = 0;
  
  while (str[input_index] != '\0'){
    if (isalpha((unsigned char)str[input_index])){
      int alphabet_position = toupper((unsigned char)str[input_index]) - 'A' + 1;
      int repeat_counter;
      for (repeat_counter = 0; repeat_counter < alphabet_position; repeat_counter++){
        answer[answer_index] = str[input_index];
        answer_index++;
      }
    }
    input_index++;
  }
  answer[answer_index] = '\0';
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