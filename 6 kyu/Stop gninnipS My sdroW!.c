// -----------------------------------------------------------
// Write a function that takes in a string of one or more words, and returns the same string, but with all
// words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of 
// only letters and spaces. Spaces will be included only when more than one word is present.
// 
// Examples:
// 
// "Hey fellow warriors"  --> "Hey wollef sroirraw" 
// "This is a test        --> "This is a test" 
// "This is another test" --> "This is rehtona test"
// -----------------------------------------------------------

#include <string.h> // strlen, strcpy, strcat

//  do not allocate memory for return string
//  assign the value to the pointer "result"

void spin_words(const char *sentence, char *result){
  char spl_str[100][100];
  char arr[100];
  char reversed[1000];
  int i, j;
  int word_count = 0;
  int idx = 0;
  int len;
  
  while (*sentence){
    if (*sentence == ' '){
      spl_str[word_count][idx] = '\0';
      word_count++;
      idx = 0;
    } else {
      spl_str[word_count][idx++] = *sentence;
    }
    sentence++;
  }
  spl_str[word_count][idx] = '\0';
  word_count++;
  
  reversed[0] = '\0';
  
  for (i = 0; i < word_count; i++){
    len = strlen(spl_str[i]);
    if (len > 4){
      for (j = 0; j < len; j++){
        arr[j] = spl_str[i][len - j - 1];
      }
      arr[len] = '\0';
      strcat(reversed, arr);
    } else {
      strcat(reversed, spl_str[i]);
    }
    if (i < word_count - 1) strcat(reversed, " ");
  }
  strcpy(result, reversed);
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