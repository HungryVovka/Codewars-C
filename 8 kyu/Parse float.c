// -----------------------------------------------------------
// Write function parseFloat which takes an input and returns a number or Nothing if conversion is not possible.
// -----------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct maybe_double {
  bool value_exists;
  double value;
};

struct maybe_double parse_float(const char *input){
// If the input is a valid string representation of a double,
// store it in `value` and set `value_exists` to `true`
// Otherwise, set `value_exists` to `false`, and the content of `value` is irrelevant
  char *end;
  double answer = strtod(input, &end);
  if (end == input || *end != '\0') return (struct maybe_double){ false, 0.0 };
  return (struct maybe_double){ true, answer };
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