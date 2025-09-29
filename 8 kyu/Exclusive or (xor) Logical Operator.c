// -----------------------------------------------------------
// Exclusive "or" (xor) Logical Operator
// Overview
// In some scripting languages like PHP, there exists a logical operator (e.g. &&, ||, and, or, etc.) called the "Exclusive Or" 
// (hence the name of this Kata). The exclusive or evaluates two booleans. It then returns true if exactly one of the two 
// expressions are true, false otherwise. For example:
// 
// false xor false == false // since both are false
// true xor false == true // exactly one of the two expressions are true
// false xor true == true // exactly one of the two expressions are true
// true xor true == false // Both are true.  "xor" only returns true if EXACTLY one of the two expressions evaluate to true.
// 
// Task
// Since we cannot define keywords in Javascript (well, at least I don't know how to do it), your task is to define a function 
// xor(a, b) where a and b are the two expressions to be evaluated. Your xor function should have the behaviour described above, 
// returning true if exactly one of the two expressions evaluate to true, false otherwise.
// -----------------------------------------------------------

#include <stdbool.h>  // bool, true, false

bool xor(bool a, bool b) {
  return a != b;
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