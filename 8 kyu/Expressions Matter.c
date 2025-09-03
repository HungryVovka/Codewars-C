// -----------------------------------------------------------
// Given three integers a, b, and c, return the largest number obtained after inserting the operators +, *, and parentheses (). In other 
// words, try every combination of a, b, and c with the operators, without reordering the operands, and return the maximum value.
// 
// Example
// With the numbers 1, 2, and 3, here are some possible expressions:
// 
// 1 * (2 + 3) = 5
// 1 * 2 * 3 = 6
// 1 + 2 * 3 = 7
// (1 + 2) * 3 = 9
// 
// The maximum value that can be obtained is 9.
// 
// Notes
// The numbers are always positive, in the range 1 ≤ a, b, c ≤ 10.
// You can use the same operation more than once.
// It is not necessary to use all the operators or parentheses.
// You cannot swap the operands. For example, with the given numbers, you cannot get the expression (1 + 3) * 2 = 8.
// 
// Input and Output Examples
// expressionsMatter(1, 2, 3) ==> 9, because (1 + 2) * 3 = 9.
// expressionsMatter(1, 1, 1) ==> 3, because 1 + 1 + 1 = 3.
// expressionsMatter(9, 1, 1) ==> 18, because 9 * (1 + 1) = 18.
// -----------------------------------------------------------

int expression_matter(int a, int b, int c){
  int combinazioni[6];
  combinazioni[0] = a + b + c;
  combinazioni[1] = a * (b + c);
  combinazioni[2] = a * b * c;
  combinazioni[3] = a + b * c;
  combinazioni[4] = (a + b) * c;
  combinazioni[5] = a * b + c;
  int massimo = combinazioni[0];
  int i;
  for (i = 1; i < 6; i++){
    if (combinazioni[i] > massimo) massimo = combinazioni[i];
  }
  return massimo;
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