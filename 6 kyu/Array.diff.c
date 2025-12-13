// -----------------------------------------------------------
// Implement a function that computes the difference between two lists. The 
// function should remove all occurrences of elements from the first list (a) 
// that are present in the second list (b). The order of elements in the first 
// list should be preserved in the result.
// 
// Examples
// If a = [1, 2] and b = [1], the result should be [2].
// 
// If a = [1, 2, 2, 2, 3] and b = [2], the result should be [1, 3].
// 
// NOTE:
// In C, assign return array length to pointer *z
// -----------------------------------------------------------

#include <stddef.h>     // size_t
#include <stdlib.h>     // malloc

//  assign the length of your array to *z
//  your returned array will be freed

static int contains(const int array[],
                    size_t length,
                    int value){
  size_t i = 0;
  for (; i < length; i++){
    if (array[i] == value) return 1;
  }
  return 0;
}

int *array_diff(const int arr1[/* n1 */], 
                size_t n1, 
                const int arr2[/* n2 */], 
                size_t n2, 
                size_t *z){
  size_t count = 0;
  size_t i = 0;
  for (; i < n1; i++){
    if (!contains(arr2, n2, arr1[i])) count++;
  }
  
  int *answer = (int *)malloc(count * sizeof(int));
  if (answer == NULL){
    *z = 0;
    return NULL;
  }
  
  size_t write_index = 0;
  for (i = 0; i < n1; i++){
    if (!contains(arr2, n2, arr1[i])){
      answer[write_index] = arr1[i];
      write_index++;
    }
  }
  *z = count;
  return answer;
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