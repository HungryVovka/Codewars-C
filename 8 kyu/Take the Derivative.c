// -----------------------------------------------------------
// This function takes two numbers as parameters, the first number being the coefficient, and the second 
// number being the exponent.
// 
// Your function should multiply the two numbers, and then subtract 1 from the exponent. Then, it has to 
// return an expression (like 28x^7). "^1" should not be truncated when exponent = 2.
// 
// For example:
// 
// derive(7, 8)
// 
// In this case, the function should multiply 7 and 8, and then subtract 1 from 8. It should output "56x^7", 
// the first number 56 being the product of the two numbers, and the second number being the exponent 
// minus 1.
// 
// derive(7, 8) --> this should output "56x^7" 
// derive(5, 9) --> this should output "45x^8"
// 
// Notes:
// 
// The output of this function should be a string
// The exponent will never be 1, and neither number will ever be 0
// -----------------------------------------------------------

#include <stdio.h>

// do not allocate memory for result
// assign result to provided pointer

void derive(int coefficient, int exponent, char *derivative){
  int coeff = coefficient * exponent;
  int expo = exponent - 1;
  sprintf(derivative, "%dx^%d", coeff, expo);
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