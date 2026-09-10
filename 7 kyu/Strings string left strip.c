// -----------------------------------------------------------
// Challenge: Given a writeable target string and a read-only string of characters, 
// remove in-place all leading characters of the string that are present in 
// the string of characters.
// 
// The leading characters make up a prefix of the target string. Such prefix has 
// the length of n, where n is the number of characters from the beginning of 
// the string to the first character in the string that is not contained by 
// the read-only string of characters.
// 
// In case that the read-only string of characters is NULL, remove in-place 
// the leading whitespace in the target string.
// 
// In case that the read-only string of characters is empty, do not remove anything.
// 
// Example:
// 
// char s[] = "!!!!###@hello";
// const char *chars = "!#@";
// if (stringLeftStrip(s, chars)) { // returns "hello"
//   (void)puts(s);
// }
// 
// Addendum: The target string will always be defined (not NULL). However, it can be empty.
// 
// Make sure you do the removal in-place. There's no requirement for this kata 
// to allocate or de-allocate any memory.
// 
// Please keep in mind that you only have to remove the leading characters, i.e. 
// given const char *chars = " " and char s[] = "Hello, world!", nothing should 
// be removed and the string s returned intact. This is because the first character 
// to not be contained by the chars happens to be the first character of the target string.
// -----------------------------------------------------------

#include <stddef.h>     // NULL, size_t
#include <string.h>     // strlen, memmove

static int is_space(char c){
  return c == ' ' || c == '\t' || c == '\n' ||
    c == '\r' || c == '\v' || c == '\f';
}

static int in_chars(char c, const char *chars){
  size_t i;
  for(i = 0; chars[i] != '\0'; i++){
    if (chars[i] == c) return 1;
  }
  return 0;
}

char *stringLeftStrip(char *target, const char *chars){
  size_t start;
  // empty string - no action
  if (chars != NULL && chars[0] == '\0') return target;
  
  // counting the leinght of prefix for delete
  start = 0;
  while (target[start] != '\0'){
    if (chars == NULL){
      if (!is_space(target[start])) break;
    } else {
      if (!in_chars(target[start], chars)) break;
    }
    start++;
  }
  // puts string on the left in start positions
  if (start > 0){
    memmove(target, target + start, strlen(target + start) + 1);
  }
  return target;
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