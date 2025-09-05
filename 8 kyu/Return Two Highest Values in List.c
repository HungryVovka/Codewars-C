// -----------------------------------------------------------
// In this kata, your job is to return the two distinct highest values in a list. If there're less than 2 unique 
// values, return as many of them, as possible.
// 
// The result should also be ordered from highest to lowest.
// 
// Examples:
// 
// [4, 10, 10, 9]  =>  [10, 9]
// [1, 1, 1]  =>  [1]
// []  =>  []
// -----------------------------------------------------------

#include <stddef.h>
#include <limits.h>

size_t two_highest(size_t length, 
                   const long long array[length], 
                   long long result[2]){
  long long massimo1 = 0;
  long long massimo2 = 0;
  
  int ha1 = 0, ha2 = 0;
  
  size_t i;
  for (i = 0; i < length; i++){
    long long valore = array[i];
    if (!ha1 || valore > massimo1){
      if (ha1 && valore != massimo1){
        massimo2 = massimo1;
        ha2= 1;
      }
      massimo1 = valore;
      ha1 = 1;
    } else if (valore != massimo1 && (!ha2 || valore > massimo2)){
      massimo2 = valore;
      ha2 = 1;
    }
  }
      
  size_t conteggio = 0;
  if (ha1) result[conteggio++] = massimo1;
  if (ha2) result[conteggio++] = massimo2;
  return conteggio;
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