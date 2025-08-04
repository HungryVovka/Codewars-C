// -----------------------------------------------------------
// Consider the sequence U(n, x) = x + 2x**2 + 3x**3 + .. + nx**n where x is a real number and n a positive integer.
// 
// When n goes to infinity and x has a correct value (ie x is in its domain of convergence D), U(n, x) goes to a finite limit m depending on x.
// 
// Usually given x we try to find m. Here we will try to find x (x real, 0 < x < 1) when m is given (m real, m > 0).
// 
// Let us call solve the function solve(m) which returns x such as U(n, x) goes to m when n goes to infinity.
// 
// Examples:
// solve(2.0) returns 0.5 since U(n, 0.5) goes to 2 when n goes to infinity.
// 
// solve(8.0) returns 0.7034648345913732 since U(n, 0.7034648345913732) goes to 8 when n goes to infinity.
// 
// Note:
// You pass the tests if abs(actual - expected) <= 1e-12
// -----------------------------------------------------------

double solve(double m){
  double sinistra = 0.0;
  double destra = 1.0;
  while (destra - sinistra > 1e-12){
    double mezzo = (sinistra + destra) / 2.0;
    double f = mezzo / ((1.0 - mezzo) * (1.0 - mezzo));
    if (f < m) sinistra = mezzo;
    else destra = mezzo;
  }
  return (sinistra + destra) / 2.0;
}

// or

#include <math.h>

double solve(double m){
  if (m == 0.0) return NAN;
  return (1.0 + 2.0 * m - sqrt(1.0 + 4.0 * m)) / (2.0 * m);
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