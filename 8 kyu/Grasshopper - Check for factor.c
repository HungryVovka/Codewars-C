// -----------------------------------------------------------
// This function should test if the factor is a factor of base.
// 
// Return true if it is a factor or false if it is not.
// 
// About factors
// Factors are numbers you can multiply together to get another number.
// 
// 2 and 3 are factors of 6 because: 2 * 3 = 6
// 
// You can find a factor by dividing numbers. If the remainder is 0 then the number is a factor.
// You can use the mod operator (%) in most languages to check for a remainder
// 
// For example 2 is not a factor of 7 because: 7 % 2 = 1
// 
// Note: base is a non-negative number, factor is a positive number.
// -----------------------------------------------------------

#include <stdbool.h>

bool check_for_factor(int base, int factor){
  return (base % factor == 0);
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