// -----------------------------------------------------------
// In her trip to Italy, Elizabeth Gilbert made it her duty to eat perfect pizza. One 
// day she ordered one for dinner, and then some Italian friends appeared at her 
// room. The problem is that there were many people who ask for a piece of pizza 
// at that moment, and she had a knife that only cuts straight.
// 
// Given the number of pizza cuts, find the maximum amount of pieces of pizza 
// that you can get (not necessarily of equal size). If the number of cuts is 
// negative, return -1 instead (or Nothing in Haskell).
// -----------------------------------------------------------

#include <limits.h>   // INT_MAX

int max_pizza(int cuts){
  int pieces;
  long long temporary_value;
  if (cuts < 0) return -1;
  temporary_value = (long long)cuts * (cuts + 1);
  if (temporary_value / 2 > INT_MAX - 1) return -1;
  pieces = (int)(temporary_value / 2) + 1;
  return pieces;
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