// -----------------------------------------------------------
// Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a 
// string).
// 
// Examples:
// 
// Inputs: "abc", "bc"
// Output: true
// 
// Inputs: "abc", "d"
// Output: false
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <stddef.h> // size_t
#include <string.h> // strlen, strcmp

bool solution(const char *string, const char *ending){
  size_t lung_stringa = strlen(string);
  size_t lung_fine = strlen(ending);
  
  if (lung_fine > lung_stringa) return false;
  
  return strcmp(string + (lung_stringa - lung_fine), ending) == 0;
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