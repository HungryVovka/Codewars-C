// -----------------------------------------------------------
// Jack really likes his number five: the trick here is that you have to multiply each number by 5 raised to the number of digits of 
// each numbers, so, for example:
// 
//   3 -->    15  (  3 * 5¹)
//  10 -->   250  ( 10 * 5²)
// 200 --> 25000  (200 * 5³)
//   0 -->     0  (  0 * 5¹)
//  -3 -->   -15  ( -3 * 5¹)
// -----------------------------------------------------------

#include <stdlib.h> // abs
#include <math.h> // pow

int multiply(int number){
  int lunghezza = abs(number);
  int cifre = 0;
  if (lunghezza == 0){
    cifre = 1;
  } else {
    while (lunghezza > 0){
      lunghezza /= 10;
      cifre++;
    }
  }
  return number * (int)pow(5, cifre);
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