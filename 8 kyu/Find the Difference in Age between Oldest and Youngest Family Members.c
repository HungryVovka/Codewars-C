// -----------------------------------------------------------
// At the annual family gathering, the family likes to find the oldest living family member’s age and the youngest family member’s 
// age and calculate the difference between them.
// 
// You will be given an array of all the family members' ages, in any order. The ages will be given in whole numbers, so a baby of 5 
// months, will have an ascribed ‘age’ of 0. Return a new array (a tuple in Python) with [youngest age, oldest age, difference between 
// the youngest and oldest age].
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <stddef.h> // size_t

int *difference_in_ages(size_t a, const int ages[a]){
  if (a == 0) return NULL;
  
  int min = ages[0], max = ages[0];
  size_t i = 1;
  for (; i < a; i++){
    if (ages[i] < min) min = ages[i];
    if (ages[i] > max) max = ages[i];
  }
  
  int gap = max - min;
  int *risultato = malloc(3 * sizeof(int));
  
  risultato[0] = min;
  risultato[1] = max;
  risultato[2] = gap;
  
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