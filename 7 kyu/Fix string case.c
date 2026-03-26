// -----------------------------------------------------------
// In this Kata, you will be given a string that may have mixed uppercase and lowercase 
// letters and your task is to convert that string to either lowercase only or uppercase only based on:
// 
// make as few changes as possible.
// if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
// For example:
// 
// solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
// solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
// solve("coDE") = "code". Upper == lowercase. Change all to lowercase.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc
#include <ctype.h>    // isupper, islower, toupper, tolower
// return a dynamically allocated string
// (to be freed by the testing function)

char *solve(const char *str){
  size_t length;
  size_t i;
  int upper_count;
  int lower_count;
  char *answer;
  
  length = 0;
  while (str[length] != '\0') length++;
  
  upper_count = 0;
  lower_count = 0;
  
  for (i = 0; i < length; i++){
    if (isupper((unsigned char)str[i])) upper_count++;
    if (islower((unsigned char)str[i])) lower_count++;
  }
  
  answer = (char *)malloc((length + 1) * sizeof(char));
  if (answer == NULL) return NULL;
  
  if (upper_count > lower_count){
    for (i = 0; i < length; i++) answer[i] = (char)toupper((unsigned char)str[i]);
  } else {
    for (i = 0; i < length; i++) answer[i] = (char)tolower((unsigned char)str[i]);
  }
  
  answer[length] = '\0';
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