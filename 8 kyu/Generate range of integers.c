// -----------------------------------------------------------
// Implement the function generateRange which takes three arguments (start, stop, step) and returns the range of 
// integers from start to stop (inclusive) in increments of step.
// 
// Examples
// (1, 10, 1) -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// (-10, 1, 1) -> [-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1]
// (1, 15, 20) -> [1]
// 
// Note
// start < stop
// step > 0
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <stddef.h> // size_t

//  1) dynamically allocate memory for the return array
//  2) assign the size of this array to the pointer *sz

int *generate_range(int min, int max, int step, size_t *sz){
  if (step <= 0 || min > max){
    *sz = 0;
    return NULL;
  }
  
  *sz = (size_t)((max - min) / step + 1);
  
  int *risultato = malloc(*sz * sizeof(int));
  if (!risultato){
    *sz = 0;
    return NULL;
  }
  
  size_t i = 0;
  for (; i < *sz; i++) risultato[i] = min + (int)(i * step);
  
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