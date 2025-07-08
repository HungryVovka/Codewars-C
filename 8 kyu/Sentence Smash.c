// -----------------------------------------------------------
// Sentence Smash
// Write a function that takes an array of words and smashes them together into a sentence and returns the 
// sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each 
// word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!
// 
// Example
// ['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
// 
// Assumptions
// You can assume that you are only given words.
// You cannot assume the size of the array.
// You can assume that you do get an array.
// 
// What We're Testing
// We're testing basic loops and string manipulation. This is for beginners who are just learning loops and string 
// manipulation.
// 
// Disclaimer
// This is for beginners so we want to test basic loops and string manipulation. Advanced users should easily be able 
// to do this in one line.
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>

char *smash (const char *const words[/* count */], size_t count){
// allocate a string on the heap, memory will be freed
  if (count == 0){
    return calloc(1, 1);
  }
  size_t result_length = 0;
  size_t i;
  for (i = 0; i < count; i++){
    result_length += strlen(words[i]);
  }
  result_length += (count - 1);
  result_length += 1;
  char *answer = malloc(result_length);
  if (!answer) return NULL;
  answer[0] = '\0';
  for (i = 0; i < count; i++){
    strcat(answer, words[i]);
    if (i < count - 1) strcat(answer, " ");
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