// -----------------------------------------------------------
// SpeedCode #2 - Array Madness
// Objective
// Given two integer arrays a, b, both of length >= 1, create a program that returns true if the sum of the 
// squares of each element in a is strictly greater than the sum of the cubes of each element in b.
// 
// E.g.
// 
// array_madness(3, {4, 5, 6}, 3, {1, 2, 3}) == true;
// // because 4 ** 2 + 5 ** 2 + 6 ** 2 > 1 ** 3 + 2 ** 3 + 3 ** 3
// 
// Get your timer out. Are you ready? Ready, get set, GO!!!
// -----------------------------------------------------------

#include <stdbool.h>
#include <stddef.h>

bool array_madness(size_t n1, const int arr1[n1], 
                   size_t n2, const int arr2[n2]){
  long long somma_quadrati = 0;
  long long somma_cubi = 0;
  size_t i, j;
  for (i = 0; i < n1; i++) somma_quadrati += (long long)arr1[i] * arr1[i];
  for (j = 0; j < n2; j++) somma_cubi += (long long)arr2[j] * arr2[j] * arr2[j];
  return somma_quadrati > somma_cubi;
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