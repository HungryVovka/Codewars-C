// -----------------------------------------------------------
// Write a method, that will get an integer array as parameter and will process every number from this array.
// 
// Return a new array with processing every number of the input-array like this:
// 
// If the number has an integer square root, take this, otherwise square the number.
// 
// Example
// [4,3,9,7,2,1] -> [2,9,3,49,4,1]
// 
// Notes
// The input array will always contain only positive numbers, and will never be empty or null.
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <math.h> // sqrt

int* squareOrSquareRoot(int* array, int length){
  int *risultato = malloc(length * sizeof(int));
  if (!risultato) return NULL;
  int i = 0;
  for (; i < length; i++){
    int num = array[i];
    int radice = (int)sqrt((double)num);
    if (radice * radice == num){
      risultato[i] = radice;
    } else {
      risultato[i] = num * num;
    }
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