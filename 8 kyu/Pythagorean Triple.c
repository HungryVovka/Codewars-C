// -----------------------------------------------------------
// Given an unsorted array of 3 positive integers [ n1, n2, n3 ], determine if it is possible to form a Pythagorean 
// Triple using those 3 integers.
// 
// A Pythagorean Triple consists of arranging 3 integers, such that:
// 
// a2 + b2 = c2
// 
// Examples
// [5, 3, 4] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52
// 
// [3, 4, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 32 + 42 = 52
// 
// [13, 12, 5] : it is possible to form a Pythagorean Triple using these 3 integers: 52 + 122 = 132
// 
// [100, 3, 999] : it is NOT possible to form a Pythagorean Triple using these 3 integers - no matter how you arrange 
// them, you will never find a way to satisfy the equation a2 + b2 = c2
// 
// Return Values
// For Python: return True or False
// For JavaScript: return true or false
// Other languages: return 1 or 0 or refer to Sample Tests.
// -----------------------------------------------------------

#include <stdbool.h>

void sort3(unsigned sides[3]){
  // bubble sort of 3
  int i, j;
  unsigned tpm;
  for (i = 0; i < 2; i++){
    for (j = 0; j < 2 - i; j++){
      if (sides[j] > sides[j+1]){
        tpm = sides[j];
        sides[j] = sides[j + 1];
        sides[j + 1] = tpm;
      }
    }
  }
}

bool pythagorean_triple(const unsigned sides[3]){
  unsigned s[3] = {sides[0], sides[1], sides[2]};
  sort3(s);
  unsigned a = s[0], b = s[1], c = s[2];
  return c * c == (a * a + b * b); 
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