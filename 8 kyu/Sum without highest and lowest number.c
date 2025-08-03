// -----------------------------------------------------------
// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by 
// index! ).
// 
// The highest or lowest element respectively is a single element at each edge, even if there are more than one 
// with the same value.
// 
// Mind the input validation.
// 
// Example
// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6
// 
// Input validation
// If an empty value ( null, None, Nothing, nil etc. ) is given instead of an array, or the given array is an empty 
// list or a list with only 1 element, return 0.
// -----------------------------------------------------------

#include <limits.h>

int sum(const int numbers[/*length*/], int length){
  if (!numbers || length <= 1) return 0;
  long long somma = 0;
  int minimo = INT_MAX;
  int massimo = INT_MIN;
  int i;
  for (i = 0; i < length; i++){
    int valore = numbers[i];
    somma += valore;
    if (valore < minimo) minimo = valore;
    if (valore > massimo) massimo = valore;
  }
  somma -= minimo;
  somma -= massimo;
  return (int)somma;
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