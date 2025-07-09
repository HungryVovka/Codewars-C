// -----------------------------------------------------------
// Write a function to split a string and convert it into an array of words.
// 
// Examples (Input ==> Output):
// "Robin Singh" ==> ["Robin", "Singh"]
// 
// "I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
// 
// Words will be separated by exactly one space, without leading or trailing spaces.
// 
// There will only be letters and spaces in the input string.
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

size_t count_words (const char *words){
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct !
  size_t count = 0;
  int in_word = 0;
  while (*words){
    if (!isspace(*words)){
      if (!in_word){
        count++;
        in_word = 1;
      }
    } else {
      in_word = 0;
    }
    words++;
  }
  return count;
}

void words_to_array (const char *words, char *words_array[]){
// allocate the words on the heap, they will be freed
// write them to the pre-allocated words_array
  size_t word_index = 0;
  while (*words){
    while (*words && isspace(*words)) words++;
    if (!*words) break;
    const char *start = words;
    while (*words && !isspace(*words)) words++;
    size_t len;
    len = words - start;
    char *word = malloc(len + 1);
    if (!word) continue;
    strncpy(word, start, len);
    word[len] = '\0';
    words_array[word_index++] = word;
  }
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