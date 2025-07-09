// -----------------------------------------------------------
// In this Kata you are expected to find the coefficients of quadratic equation of the given two roots (x1 and x2).
// 
// Equation will be the form of ax^2 + bx + c = 0
// 
// Return type is a Vector (tuple in Rust, Array in Ruby) containing coefficients of the equations in the order 
// (a, b, c).
// 
// Since there are infinitely many solutions to this problem, we fix a = 1.
// 
// Remember, the roots can be written like (x-x1) * (x-x2) = 0
// 
// Example
// quadratic(1,2) = (1, -3, 2)
// This means (x-1) * (x-2) = 0; when we do the multiplication this becomes x^2 - 3x + 2 = 0
// 
// Example 2
// quadratic(0,1) = (1, -1, 0)
// This means (x-0) * (x-1) = 0; when we do the multiplication this becomes x^2 - x + 0 = 0
// 
// Notes
// Inputs will be integers.
// When x1 == x2, this means the root has the multiplicity of two
// -----------------------------------------------------------

void quadratic(int x1, int x2, int coefficients[3]) {
  coefficients[0] = 1;
  coefficients[1] = -(x1 + x2);
  coefficients[2] = x1 * x2;
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