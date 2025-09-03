// -----------------------------------------------------------
// I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.
// 
// P.S. Each array includes only integer numbers. Output is a number too.
// -----------------------------------------------------------

#include <stddef.h>

long long arr_plus_arr(const int a[/* na */],  
                       const int b[/* nb */], 
                       size_t na, size_t nb){
  long long somma = 0;
  size_t i;
  for (i = 0; i < na; i++) somma += a[i];
  for (i = 0; i < nb; i++) somma += b[i];
  return somma;
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