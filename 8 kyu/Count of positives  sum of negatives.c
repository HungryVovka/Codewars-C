// -----------------------------------------------------------
// Given an array of integers.
// 
// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither 
// positive nor negative.
// 
// If the input is an empty array or is null, return an empty array.
// 
// Example
// For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].
// -----------------------------------------------------------

#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positives_count, int *negatives_sum){
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
  
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
  if (count == 0){
    *positives_count = 0;
    *negatives_sum = 0;
    return;
  }
  int contatore_positivi = 0;
  int somma_negativi = 0;
  size_t i;
  for (i = 0; i < count; i++){
    if (values[i] > 0){
      contatore_positivi++;
    } else if (values[i] < 0){
      somma_negativi += values[i];
    }
  }
  *positives_count = contatore_positivi;
  *negatives_sum = somma_negativi;
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