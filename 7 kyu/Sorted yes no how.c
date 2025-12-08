// -----------------------------------------------------------
// Complete the method which accepts an array of integers, and returns one of the 
// following:
// 
// "yes, ascending" - if the numbers in the array are sorted in an ascending order
// "yes, descending" - if the numbers in the array are sorted in a descending order
// "no" - otherwise
// 
// The order does not have to be strict: a sorted array can contain consecutive 
// duplicates, e.g. [1, 1, 2, 3] is sorted in ascending order.
// 
// It is guaranteed that there will always be a unique valid answer. More precisely:
// 
// there will be no arrays with less than 2 elements
// there will be no arrays where all elements are equal
// -----------------------------------------------------------

const char *isSortedAndHow (const int array[/* arrayLength */], int arrayLength){
	int i;
  int ascending = 1;
  int descending = 1;
  
  for (i = 0; i < arrayLength - 1; i++){
    if (array[i] > array[i + 1]){
      ascending = 0;
      break;
    }
  }
  
  for (i = 0; i < arrayLength - 1; i++){
    if (array[i] < array[i + 1]){
      descending = 0;
      break;
    }
  }
  if (ascending) return "yes, ascending";
  if (descending) return "yes, descending";
  return "no"; // you can return a string literal
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