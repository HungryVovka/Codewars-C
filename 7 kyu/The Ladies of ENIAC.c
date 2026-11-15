// -----------------------------------------------------------
// Comprised of a team of five incredibly brilliant women, "The ladies of ENIAC" 
// were the first “computors” working at the University of Pennsylvania’s Moore 
// School of Engineering (1945). Through their contributions, we gained the first 
// software application and the first programming classes! The ladies of ENIAC were 
// inducted into the WITI Hall of Fame in 1997!
// 
// Write a function which reveals "The ladies of ENIAC" names, so that you too can 
// add them to your own hall of tech fame!
// 
// To keep: only alpha characters, space characters and exclamation marks.
// To remove: digits and these characters: %$&/£?@
// 
// Result should be all in uppercase.
// -----------------------------------------------------------

#include <stdlib.h>     // malloc
#include <string.h>     // strlen
#include <ctype.h>      // isalpha, toupper

// the input is encoded in UTF-8
// (this is relevant because of the non-ascii symbol '£')
char *rad_ladies(const char* text) {
    // return a heap-allocated string:
  size_t length;
  size_t read_index;
  size_t write_index;
  char *answer;
  unsigned char current;
  
  if (text == NULL) return NULL;
  
  length = strlen(text);
  answer = (char *)malloc(length + 1);
  if (answer == NULL) return NULL;
  
  write_index = 0;
  for (read_index = 0; read_index < length; read_index++){
    current = (unsigned char)text[read_index];
    if ((current < 128 && isalpha(current)) ||
         current == ' ' || current == '!'){
      answer[write_index] = (char)toupper(current);
      write_index++;
    }
  }
  answer[write_index] = '\0';
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