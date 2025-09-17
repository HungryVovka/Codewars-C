// -----------------------------------------------------------
// Definition
// A Tidy Number is a number whose digits are in non-decreasing order.
// 
// Task
// Given a number, determine if it is tidy or not.
// 
// Notes
// The number passed will always be positive.
// Return the result as a boolean.
// Examples
// 12 ==> return true
// Explanation: Digits {1, 2} are in non-decreasing order (1 <= 2).
// 
// 32 ==> return false
// Explanation: Digits {3, 2} are not in non-decreasing order (3 > 2).
// 
// 1024 ==> return false
// Explanation: Digits {1, 0, 2, 4} are not in non-decreasing order (1 > 0).
// 
// 13579 ==> return true
// Explanation: Digits {1, 3, 5, 7, 9} are in non-decreasing order.
// 
// 2335 ==> return true
// Explanation: Digits {2, 3, 3, 5} are in non-decreasing order (3 = 3).
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false

bool tidyNumber(unsigned int number){
  int cifre[32];
  int conteggio;
  int i;
  
  conteggio = 0;
  while (number > 0){
    cifre[conteggio++] = number % 10;
    number /= 10;
  }
  
  for (i = conteggio - 1; i > 0; i--){
    if (cifre[i] > cifre[i - 1]) return false;
  }
  return true;
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