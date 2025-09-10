// -----------------------------------------------------------
// Description:
// Remove an exclamation mark from the end of a string. For a beginner kata, you can assume that the input 
// data is always a string, no need to verify it.
// 
// Examples
// "Hi!"     ---> "Hi"
// "Hi!!!"   ---> "Hi!!"
// "!Hi"     ---> "!Hi"
// "!Hi!"    ---> "!Hi"
// "Hi! Hi!" ---> "Hi! Hi"
// "Hi"      ---> "Hi"
// -----------------------------------------------------------

#include <string.h> // strlen

char *remove_mark (char *string){
	// modify string in-place and return it
	size_t lunghezza = strlen(string);
  if (lunghezza > 0 && string[lunghezza - 1] == '!') string[lunghezza - 1] = '\0';
  return string;
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