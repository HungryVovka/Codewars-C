// -----------------------------------------------------------
// Your function takes two arguments:
// 
// current father's age (years)
// current age of his son (years)
// 
// Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). The answer is 
// always greater or equal to 0, no matter if it was in the past or it is in the future.
// -----------------------------------------------------------

#include <stdlib.h>

int twice_as_old (int father_age, int son_age){
  return abs(father_age - (son_age * 2));
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