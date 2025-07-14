// -----------------------------------------------------------
// Consider the function
// 
// f: x -> sqrt(1 + x) - 1 at x = 1e-15.
// 
// We get: f(x) = 4.44089209850062616e-16
// 
// or something around that, depending on the language.
// 
// This function involves the subtraction of a pair of similar numbers when x is near 0 and the results are significantly erroneous in this region. Using 
// pow instead of sqrt doesn't give better results.
// 
// A "good" answer is 4.99999999999999875... * 1e-16.
// 
// Can you modify f(x) to give a good approximation of f(x) in the neighborhood of 0?
// 
// Note:
// Don't round or truncate your results. See the testing function in Sample Tests:.
// -----------------------------------------------------------

#include <math.h>

double f(double x){
  return x / (sqrt(x + 1.0) + 1.0); 
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