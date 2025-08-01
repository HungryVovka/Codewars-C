// -----------------------------------------------------------
// Can you find the needle in the haystack?
// 
// Write a function findNeedle() that takes an array full of junk but containing one "needle"
// 
// After your function finds the needle it should return a message (as a string) that says:
// 
// "found the needle at position " plus the index it found the needle, so:
// 
// Example(Input --> Output)
// 
// ["hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"] --> "found the needle at position 5" 
// 
// Note: In COBOL, it should return "found the needle at position 6"
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find_needle(const char *const haystack[/* count */], size_t count){
// return a heap-allocated string:
	size_t needle = 0;
  while (needle < count && strcmp(haystack[needle], "needle") != 0) needle++;
  char *messaggio = malloc(60);
  if (!messaggio) return NULL;
  sprintf(messaggio,
          "found the needle at position %zu",
          needle < count ? needle : (size_t) - 1);
  return messaggio;
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