// -----------------------------------------------------------
// You are given two sorted arrays that contain only integers. These arrays may be sorted in either 
// ascending or descending order. Your task is to merge them into a single array, ensuring that:
// 
// The resulting array is sorted in ascending order.
// 
// Any duplicate values are removed, so each integer appears only once.
// 
// If both input arrays are empty, return an empty array.
// 
// No input validation is needed, as both arrays are guaranteed to contain zero or more integers.
// 
// Examples (input -> output)
// * [1, 2, 3, 4, 5], [6, 7, 8, 9, 10] -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// 
// * [1, 3, 5, 7, 9], [10, 8, 6, 4, 2] -> [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// 
// * [1, 3, 5, 7, 9, 11, 12], [1, 2, 3, 4, 5, 10, 12] -> [1, 2, 3, 4, 5, 7, 9, 10, 11, 12]
// 
// Happy coding!
// -----------------------------------------------------------

#include <stddef.h>

static void bublesort(int arr[], size_t len){
  size_t i, j;
  for (i = 0; i < len; i++){
    for (j = i + 1; j < len; j++){
      if (arr[j] < arr[i]){
        int k = arr[i];
        arr[i] = arr[j];
        arr[j] = k;
      }
    }
  }
  
}

size_t merge_arrays(
    size_t len_a, const int a[len_a],
    size_t len_b, const int b[len_b],
    int merged[len_a + len_b]){
    // write to `merged` and return its length. it is guaranteed to have room
    // for `len_a + len_b` elements
  size_t i, j = 0;
  for (i = 0; i < len_a; i++) merged[j++] = a[i];
  for (i = 0; i < len_b; i++) merged[j++] = b[i];
  
  bublesort(merged, j);
  
  size_t k, nuovo_len = 0;
  for (k = 0; k < j; k++){
    if (k == 0 || merged[k] != merged[k - 1]) merged[nuovo_len++] = merged[k];
  }
  return nuovo_len;
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