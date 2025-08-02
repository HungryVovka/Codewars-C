// -----------------------------------------------------------
// In this kata you should simply determine, whether a given year is a leap year or not. In case you don't know the rules, here they are:
// 
// Years divisible by 4 are leap years,
// but years divisible by 100 are not leap years,
// but years divisible by 400 are leap years.
// 
// Tested years are in range 1600 ≤ year ≤ 4000.
// -----------------------------------------------------------

#include <stdbool.h>

bool IsLeapYear(int year){
  if (year % 4 == 0){
    if (year % 100 == 0) return year % 400 == 0;
    else return true;
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