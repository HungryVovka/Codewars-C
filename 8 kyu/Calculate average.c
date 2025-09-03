// -----------------------------------------------------------
// Write a function which calculates the average of the numbers in a given array.
// 
// Note: Empty arrays should return 0.
// -----------------------------------------------------------

double find_average(const double array[/* length */], unsigned length){
  if (length == 0) return 0.0;
  double somma = 0.0;
  unsigned i;
  for (i = 0; i < length; i++) somma += array[i];
  return somma / length;
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