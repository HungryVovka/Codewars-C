// -----------------------------------------------------------
// ATM machines allow 4 or 6 digit PIN codes and PIN codes cannot contain 
// anything but exactly 4 digits or exactly 6 digits.
// 
// If the function is passed a valid PIN string, return true, else return false.
// 
// Examples (Input --> Output)
// "1234"   -->  true
// "12345"  -->  false
// "a234"   -->  false
// -----------------------------------------------------------

#include <stdbool.h>    // bool
#include <ctype.h>      // isdigit

bool validate_pin(const char *pin){
  int len;
  for (len = 0; pin[len] != '\0'; len++){
    if (!isdigit((unsigned char)pin[len])) return false;
  }
  return (len == 4 || len == 6);
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