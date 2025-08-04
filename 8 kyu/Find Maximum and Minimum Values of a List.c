// -----------------------------------------------------------
// Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that receive a list of integers as 
// input, and return the largest and lowest number in that list, respectively. Each function returns one number.
// 
// Examples (Input -> Output)
// * [4,6,2,1,9,63,-134,566]         -> max = 566, min = -134
// * [-52, 56, 30, 29, -54, 0, -110] -> min = -110, max = 56
// * [42, 54, 65, 87, 0]             -> min = 0, max = 87
// * [5]                             -> min = 5, max = 5
// 
// Notes
// You may consider that there will not be any empty arrays/vectors.
// -----------------------------------------------------------

int min(int* array, int arrayLength){
  if (!array || arrayLength <= 0) return 0;
  int minimo = array[0], i;
  for (i = 1; i < arrayLength; i++){
    if (array[i] < minimo) minimo = array[i];
  }
  return minimo;
}

int max(int* array, int arrayLength){
  if (!array || arrayLength <= 0) return 0;
  int massimo = array[0], i;
  for (i = 1; i < arrayLength; i++){
    if (array[i] > massimo) massimo = array[i];
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