// -----------------------------------------------------------
// The Western Suburbs Croquet Club has two categories of membership, Senior 
// and Open. They would like your help with an application form that will 
// tell prospective members which category they will be placed.
// 
// To be a senior, a member must be at least 55 years old and have 
// a handicap greater than 7. In this croquet club, handicaps range 
// from -2 to +26; the better the player the lower the handicap.
// 
// Input
// Input will consist of a list of pairs. Each pair contains information 
// for a single potential member. Information consists of an integer for 
// 	the person's age and an integer for the person's handicap.
// 
// Output
// Output will consist of a list of string values (in Haskell and C: 
// Open or Senior) stating whether the respective member is to be 
// placed in the senior or open category.
// 
// Example
// input =  [[18, 20], [45, 2], [61, 12], [37, 6], [21, 21], [78, 9]]
// output = ["Open", "Open", "Senior", "Open", "Open", "Senior"]
// -----------------------------------------------------------

#include <stddef.h>   // size_t

enum membership {OPEN = 1, SENIOR = 2};

void open_or_senior (size_t n, 
                     const int members[n][2], 
                     enum membership memberships[n]){
// write to the memberships[] array
  size_t index;
  for (index = 0; index < n; index++){
    int age = members[index][0];
    int handicap = members[index][1];
    if (age >= 55 && handicap > 7){
      memberships[index] = SENIOR;
    } else {
      memberships[index] = OPEN;
    }
  }
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