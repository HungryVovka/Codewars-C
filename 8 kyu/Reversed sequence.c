// -----------------------------------------------------------
// Build a function that returns an array of integers from n to 1 where n>0.
// 
// Example : n=5 --> [5,4,3,2,1]
// -----------------------------------------------------------

/* Note: allocate memory yourself */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num){
  if (num == 0) return NULL;
  unsigned short *seq = malloc(num * sizeof *seq);
  if (!seq) return NULL; // no memory
  unsigned short i;
  for (i = 0; i < num; i++){
    seq[i] = (unsigned short)(num - i);
  }
  return seq;
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