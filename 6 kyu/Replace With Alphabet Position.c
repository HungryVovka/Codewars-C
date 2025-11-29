// -----------------------------------------------------------
// Welcome.
// 
// In this kata you are required to, given a string, replace every letter with its position in the alphabet.
// 
// If anything in the text isn't a letter, ignore it and don't return it.
// 
// "a" = 1, "b" = 2, etc.
// 
// Example
// Input = "The sunset sets at twelve o' clock."
// Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, realloc, free
#include <ctype.h>    // tolower, isalpha

// returned string has to be dynamically allocated and will be freed by the caller

static int getAlphabetPosition(char character){
  char lowered;
  lowered = (char)tolower(character);
  if (!isalpha(lowered)) return 0;
  return lowered - 'a' + 1;
}

char *alphabet_position(const char *text){
  char *answer;
  int allocatedSize;
  int currentLength;
  int i;
  int position;
  allocatedSize = 64;
  answer = (char *)malloc(allocatedSize);
  if (answer == NULL) return NULL;
  
  currentLength = 0;
  i = 0;
  
  while (text[i] != '\0'){
    position = getAlphabetPosition(text[i]);
    if (position != 0){
      if (currentLength + 4 >= allocatedSize){
        char *newPtr;
        allocatedSize *= 2;
        newPtr = (char *)realloc(answer, allocatedSize);
        if (newPtr == NULL){
          free(answer);
          return NULL;
        }
        answer = newPtr;
      }
      if (position >= 10){
        answer[currentLength++] = (char)('0' + position / 10);
        answer[currentLength++] = (char)('0' + position % 10);
      } else {
        answer[currentLength++] = (char)('0' + position);
      }
      answer[currentLength++] = ' ';
    }
    i++;
  }
  if (currentLength > 0 && answer[currentLength - 1] == ' ') currentLength--;
  answer[currentLength] = '\0';
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