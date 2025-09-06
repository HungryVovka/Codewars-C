// -----------------------------------------------------------
// Write a simple regex to validate a username. Allowed characters are:
// 
// lowercase letters,
// numbers,
// underscore
// 
// Length should be between 4 and 16 characters (both included).
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <string.h> // strlen
#include <ctype.h> // isdigit, islower

bool validate_username (const char *username){
  size_t len = strlen(username);
  if (len < 4 || len > 16) return false;
  size_t i = 0;
  for (; i < len ; i++){
    char c = username[i];
    if (!(isdigit((unsigned char)c) ||
          islower((unsigned char)c) ||
          c == '_')) return false;
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