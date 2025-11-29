// -----------------------------------------------------------
// Complete the solution so that the function will break up camel casing, using a space between words.
// 
// Example
// "camelCasing"  =>  "camel Casing"
// "identifier"   =>  "identifier"
// ""             =>  ""
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, realloc, free
#include <ctype.h>    // isupper

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase){
  char *answer;
  int allocatedSize;
  int currentLength;
  int i;
  
  allocatedSize = 64;
  answer = (char *)malloc(allocatedSize);
  if (answer == NULL) return NULL;
  
  currentLength = 0;
  i = 0;
  
  while (camelCase[i] != '\0'){
    if (currentLength + 2 >= allocatedSize){
      char *newPtr;
      allocatedSize *= 2;
      newPtr = (char *)realloc(answer, allocatedSize);
      if (newPtr == NULL){
        free(answer);
        return NULL;
      }
      answer = newPtr;
    }
    if (isupper((unsigned char)camelCase[i])) answer[currentLength++] = ' ';
    answer[currentLength++] = camelCase[i];
    i++;
  }
  answer[currentLength] ='\0';
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