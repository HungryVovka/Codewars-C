// -----------------------------------------------------------
// Wilson primes satisfy the following condition. Let P represent a prime number.
// 
// Then,
// 
// ((P-1)! + 1) / (P * P)
// 
// should give a whole number.
// 
// Your task is to create a function that returns true if the given number is a Wilson prime.
// -----------------------------------------------------------

#include <stdbool.h>

bool am_i_wilson(unsigned int n){
  unsigned int primi_wilson[] = {5, 13, 563};
  int dimensione = sizeof(primi_wilson) / sizeof(primi_wilson[0]);
  int i;
  for(i = 0; i < dimensione; i++){
    if (n == primi_wilson[i]) return true;
  }
  return false;
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