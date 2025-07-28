// -----------------------------------------------------------
// Your Job
// Find the sum of all multiples of n below m
// 
// Keep in Mind
// n and m are natural numbers (positive integers)
// m is excluded from the multiples
// 
// Examples
// sum_mul(2, 9)   // => 2 + 4 + 6 + 8 = 20
// sum_mul(3, 13)  // => 3 + 6 + 9 + 12 = 30
// sum_mul(4, 123) // => 4 + 8 + 12 + ... = 1860
// sum_mul(4, -7)  // => -1 (n must be greater than 0)
// sum_mul(-4, 7)  // => -1 (m must be greater than 0)
// sum_mul(0, 2)   // => -1 (n cannot be equal to 0)
// sum_mul(2, 0)   // => -1 (m cannot be equal to 0)
// -----------------------------------------------------------

//  for invalid input, return -1

int sum_mul(int n, int m){
  if (n <= 0 || m <= 0) return -1;
  int sum = 0, i;
  for (i = n; i < m; i += n){
    sum += i;
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