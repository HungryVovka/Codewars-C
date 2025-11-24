// -----------------------------------------------------------
// UTF-8 is a Unicode encoding. It is by far the dominant encoding for webpages, 
// and is in widespread use for storing text files on disk or exchanging textual data 
// between computers or programs.
// 
// UTF-8 is a variable-length encoding: the representation of a codepoint can take 
// from 1 to 4 8-bit code-units , depending on the codepoint's numerical value.
// 
// The Problem
// In languages where "strings" are really sequences of 8-bit bytes (C/C++, PHP, 
// OCaml, Go, Lua...), UTF-8 is a possible encoding for them and usually has some 
// level of language support. However, the function/method/property to retrieve 
// the string's length actually returns the number of bytes in the string, not the 
// number of codepoints.
// 
// For example
// The codepoint of the emoji 🙉 (U+1F649, Hear-No-Evil Monkey) is 0x1F649.
// 
// strlen(u8"🙉") // 4
// 
// Task
// Write a function that returns the number of codepoints in a UTF-8 string.
// 
// ""        --> 0
// "Aÿ♠🙉"  --> 4
// "é"       --> 1 (actual é character)
// "é"       --> 2 (e + combining acute accent)
// "㐷©∏!重" --> 5
// -----------------------------------------------------------

#include <stddef.h>     // size_t
#include <string.h>     // strlen

// the input is null-terminated
// do not include the NUL character in the count
size_t count_codepoints(const char *utf8)
{
  size_t count = 0;
  const unsigned char *c = (const unsigned char *)utf8;
  while (*c != '\0'){
    if ((*c & 0xC0) != 0x80) count++;
    c++;
  }
  return count;
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