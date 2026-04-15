// -----------------------------------------------------------
// Consider the following numbers (where n! is factorial(n)):
// 
// u1 = (1 / 1!) * (1!)
// u2 = (1 / 2!) * (1! + 2!)
// u3 = (1 / 3!) * (1! + 2! + 3!)
// ...
// un = (1 / n!) * (1! + 2! + 3! + ... + n!)
// Which will win: 1 / n! or (1! + 2! + 3! + ... + n!)?
// 
// Are these numbers going to 0 because of 1/n! or to infinity due to 
// the sum of factorials or to another number?
// 
// Task
// Calculate (1 / n!) * (1! + 2! + 3! + ... + n!) for a given n, where n 
// is an integer greater or equal to 1.
// 
// Your result should be within 10^-6 of the expected one.
// 
// Remark
// Keep in mind that factorials grow rather rapidly, and you need to 
// handle large inputs.
// 
// Hint
// You could try to simplify the expression.
// -----------------------------------------------------------

double going(int n){
  int i;
  double term = 1.0;
  double sum = 1.0;
  for (i = n - 1; i >= 1; i--){
    term /= (i + 1);
    sum += term;
  }
  return sum;
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