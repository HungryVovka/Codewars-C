// -----------------------------------------------------------
// You are going to be given a non-empty string. Your job is to return the middle character(s) of the string.
// 
// If the string's length is odd, return the middle character.
// If the string's length is even, return the middle 2 characters.
// 
// Examples:
// "test" --> "es"
// "testing" --> "t"
// "middle" --> "dd"
// "A" --> "A"
// -----------------------------------------------------------

#include <string.h> // strlen
#include <stddef.h> // size_t

/* remember to null-terminate outp! */

char *get_middle(char outp[3], const char *inp){
  size_t lunghezza = strlen(inp);
  size_t midd = lunghezza / 2;
  if (lunghezza % 2 == 0){
    outp[0] = inp[midd - 1];
    outp[1] = inp[midd];
    outp[2] = '\0';
  } else {
    outp[0] = inp[midd];
    outp[1] = '\0';
  }
  return outp;
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