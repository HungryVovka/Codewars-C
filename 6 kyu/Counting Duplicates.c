// -----------------------------------------------------------
// Count the number of Duplicates
// Write a function that will return the count of distinct case-insensitive 
// alphabetic characters and numeric digits that occur more than once 
// in the input string. The input string can be assumed to contain 
// only alphabets (both uppercase and lowercase) and numeric digits.
// 
// Example
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice
// -----------------------------------------------------------

#include <stdbool.h>  // bool, true, false
#include <ctype.h>    // isalpha(), isdigit(), tolower()
#include <stddef.h>   // size_t

size_t duplicate_count(const char *text){
  int char_count[36] = {0};   // (0-9, a-z)
  
  size_t i;
  
  while (*text != '\0'){
    char c = *text;
    if (isupper(c)) c = tolower(c);
    
    if (isdigit(c)){
      i = c - '0';            // 0-9
    } else if (isalpha(c)){
      i = c - 'a' + 10;       // a-z (10-35)
    } else {
      text++;
      continue;
    }
    char_count[i]++;
    text++;
  }
  
  size_t duplicates = 0;
  
  for (i = 0; i < 36; i++){
    if (char_count[i] > 1) duplicates++;
  }
  return duplicates;
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