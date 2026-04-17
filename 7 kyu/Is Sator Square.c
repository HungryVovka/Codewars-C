// -----------------------------------------------------------
// A Discovery
// One fine day while Farmer Arepo tenaciously labored at turning the soil,
//        he discovered a field that was scattered with strange stone tablets.
//                   Noticing they were carved with letters in a square pattern,
//                              he wisely kept them in case some might be special.
// 
// Your Task
// Please help Farmer Arepo inspecting tablets
// to find out if any form a valid Sator Square!
// 
// The Square
// is a two-dimentional palindrome
// with 180° rotational symmetry,
// made from words of equal length
// that can be read in these 4 ways:
// 
//     1)    left-to-right    (across)
//     2)    top-to-bottom    (down)
//     3)    bottom-to-top    (up)
//     4)    right-to-left    (reverse)
// 
// An Example
// Considering this square:
// 
//     B A T S
//     A B U T
//     T U B A
//     S T A B
// 
// Here are the four ways a word (in this case "TUBA") can be read:
// 
//                          down
//                           ↓
//            B A T S    B A T S    B A T S    B A T S
//            A B U T    A B U T    A B U T    A B U T ← reverse
//   across → T U B A    T U B A    T U B A    T U B A
//            S T A B    S T A B    S T A B    S T A B
//                                    ↑
//                                    up
// 
// IMPORTANT:
// 
// In a true Sator Square, ALL of its words can be read in ALL four of these ways.
// If there is any deviation, it would be false to consider it a Sator Square.
// Some Details
// tablet (square) dimensions range from 2x2 to 33x33 inclusive
// all characters used will be upper-case alphabet letters
// there is no need to validate any input
// Input
// an N x N (square) two-dimentional matrix of uppercase letters
// Output
// boolean true or false whether or not the tablet is a Sator Square
// -----------------------------------------------------------

#include <stdbool.h>  // bool
#include <stddef.h>   // size_t

bool is_sator_square(size_t n, const char tablet[n][n]){
  size_t i, j;
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      char current = tablet[i][j];
      if (current != tablet[j][i]) return false;
      if (current != tablet[n - 1 - i][n - 1 - j]) return false;
    }
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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