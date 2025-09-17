// -----------------------------------------------------------
// Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. 
// The function should return true if the string is valid, and false if it's invalid.
// 
// Examples
// "()"              =>  true
// ")(()))"          =>  false
// "("               =>  false
// "(())((()())())"  =>  true
// 
// Constraints
// 0 <= length of input <= 100
// 
// All inputs will be strings, consisting only of characters ( and ).
// Empty strings are considered balanced (and therefore valid), and will be tested.
// For languages with mutable strings, the inputs should not be mutated.
// 
// Protip: If you are trying to figure out why a string of parentheses is invalid, paste the parentheses into the 
// code editor, and let the code highlighting show you!
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false

bool valid_parentheses(const char* str){
  int bilanciamento;
  int i;
  
  bilanciamento = 0;
  
  for (i = 0; str[i] != '\0'; i++){
    if (str[i] == '('){
      bilanciamento++;
    } else if (str[i] == ')'){
      bilanciamento--;
      if (bilanciamento < 0) return false;
    }
  }
  return bilanciamento == 0;
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