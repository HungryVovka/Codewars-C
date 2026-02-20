// -----------------------------------------------------------
// How can you tell an extrovert from an introvert at NSA?
// Va gur ryringbef, gur rkgebireg ybbxf ng gur BGURE thl'f fubrf.
// 
// I found this joke on USENET, but the punchline is scrambled. Maybe you can decipher it?
// According to Wikipedia, ROT13 is frequently used to obfuscate jokes on USENET.
// 
// For this task you're only supposed to substitute characters. Not spaces, punctuation, 
// numbers, etc.
// 
// Test examples:
// 
// "EBG13 rknzcyr." -> "ROT13 example."
// 
// "This is my first ROT13 excercise!" -> "Guvf vf zl svefg EBG13 rkprepvfr!"
// -----------------------------------------------------------

#include <stddef.h>   // NULL

char *rot13(char *str_out, const char *str_in){
// write to str_out and return it
// it has enough room for strlen(str_in) + 1 bytes
  const char *src;
  char *dst;
  char c;
  if (!str_out || !str_in) return NULL;
  src = str_in;
  dst = str_out;
  while ((c = *src) != '\0'){
    if (c >= 'A' && c <= 'Z'){
      if (c <= 'M'){
        *dst = c + 13;
      } else {
        *dst = c - 13;
      }
    } else if (c >= 'a' && c <= 'z'){
      if (c <= 'm'){
        *dst = c + 13;
      } else {
        *dst = c - 13;
      }
    } else {
      *dst = c;
    }
    dst++;
    src++;
  }
  *dst = '\0';
  return str_out;
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