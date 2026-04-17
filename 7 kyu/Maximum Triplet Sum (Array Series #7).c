// -----------------------------------------------------------
// Task
// Given an array/list of integers, find the maximum sum of 3 DISTINCT array elements.
// 
// Notes :
// array size is at least 3 .
// array elements can be zero or negative
// Repetition of numbers in the array/list could occur , So 
// (duplications are not included when summing).
// 
// Input >> Output Examples
// maxTriSum ({3,2,6,8,2,3}) ==> return (17)
// Best triplet = {6,8,3}, its sum is 17
// 
// maxTriSum ({2,1,8,0,6,4,8,6,2,4}) ==> return (18)
// Best triplet = {8, 6, 4} , its sum is 18.
// 
// maxTriSum ({-7,12,-7,29,-5,0,-7,0,0,29}) ==> return (41)
// Best triplet = {12 , 29 , 0} , its sum is 41
// -----------------------------------------------------------

#include <limits.h>   // INT_MIN

int maxTriSum(const int numbers[/* count */], int count){
  // Do your magic!
  int i;
  int max1 = INT_MIN;
  int max2 = INT_MIN;
  int max3 = INT_MIN;
  
  for (i = 0; i < count; i++){
    int current = numbers[i];
    if (current == max1 || current == max2 || current == max3) continue;
    if (current > max1){
      max3 = max2;
      max2 = max1;
      max1 = current;
    } else if (current > max2){
      max3 = max2;
      max2 = current;
    } else if (current > max3){
      max3 = current;
    }
  }
  return max1 + max2 + max3;
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