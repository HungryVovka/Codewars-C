// -----------------------------------------------------------
// Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
// 
// For example, if we run 9119 through the function, 811181 will come out, because 9^2 is 8^1 and 1^2 is 1.
// 
// Note: The function accepts an integer and returns an integer
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

unsigned long long square_digits (unsigned n){
  if (n == 0) return 0ULL;
  
  unsigned cifre[10];
  size_t conteggio = 0;
  while (n > 0 && conteggio < 10){
    cifre[conteggio++] = n % 10;
    n /= 10;
  }
  
  unsigned long long risultato = 0ULL;
  size_t i;
  for (i = 0; i < conteggio; i++){
    unsigned d = cifre[conteggio - 1 - i];
    unsigned q = d * d;
    risultato = risultato * (q >= 10 ? 100ULL : 10ULL) + q;
  }
  return risultato;
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