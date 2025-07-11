// -----------------------------------------------------------
// Write a function that checks if a given string (case insensitive) is a palindrome.
// 
// A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.
// -----------------------------------------------------------

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome(const char *str_in){
  size_t left = 0, right = strlen(str_in);
  if (right == 0) return true;
  right--;
  char c1, c2;
  while (left < right){
    c1 = tolower(str_in[left]);
    c2 = tolower(str_in[right]);
    if (c1 != c2) return false;
    left++;
    right--;
  }
  return true;
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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