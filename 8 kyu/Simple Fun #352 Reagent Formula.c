// -----------------------------------------------------------
// Now we will confect a reagent. There are eight materials to choose from, numbered 1,2,..., 8 respectively.
// 
// We know the rules of confect:
// 
// material1 and material2 cannot be selected at the same time
// material3 and material4 cannot be selected at the same time
// material5 and material6 must be selected at the same time
// material7 or  material8 must be selected(at least one, or both)
// 
// Task
// You are given a integer array formula. Array contains only digits 1-8 that represents material 1-8. Your task is to determine if the formula 
// is valid. Returns true if it's valid, false otherwise.
// 
// Example
// For formula = [1,3,7], The output should be true.
// 
// For formula = [7,1,2,3], The output should be false.
// 
// For formula = [1,3,5,7], The output should be false.
// 
// For formula = [1,5,6,7,3], The output should be true.
// 
// For formula = [5,6,7], The output should be true.
// 
// For formula = [5,6,7,8], The output should be true.
// 
// For formula = [6,7,8], The output should be false.
// 
// For formula = [7,8], The output should be true.
// 
// Note
// All inputs are valid. Array contains at least 1 digit. Each digit appears at most once.
// 
// Happy Coding ^_^
// -----------------------------------------------------------

#include <stdbool.h>  // bool, true, false
#include <stddef.h>   // size_t

bool contains(size_t length, const unsigned formula[length], unsigned value){
  size_t i;
  for (i = 0; i < length; i++){
    if (formula[i] == value) return true;
  }
  return false;
}

bool is_valid(size_t length, const unsigned formula[length]){
  if (contains(length, formula, 1) && contains(length, formula, 2)) return false;
  if (contains(length, formula, 3) && contains(length, formula, 4)) return false;
  if (contains(length, formula, 5) && !contains(length, formula, 6)) return false;
  if (contains(length, formula, 6) && !contains(length, formula, 5)) return false;
  if (!contains(length, formula, 7) && !contains(length, formula, 8)) return false;
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