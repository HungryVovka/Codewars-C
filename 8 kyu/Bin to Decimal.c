// -----------------------------------------------------------
// Complete the function which converts a binary number (given as a string) to a decimal number.
// -----------------------------------------------------------

#include <stddef.h> // size_t

unsigned bin_to_decimal(const char *bin){
  unsigned risultato = 0;
  size_t i = 0;
  for (; bin[i] != '\0'; i++) risultato = risultato * 2 + (bin[i] - '0');
  return risultato;
}

// or

#include <stdlib.h> // strtol

unsigned bin_to_decimal(const char *bin){
	return strtol(bin, 0, 2);
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