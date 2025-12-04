// -----------------------------------------------------------
// Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should 
// return an empty array.
// 
// For example:
// 
// int array[5] = {1, 2, 10, 50, 5};
// sort_ascending(5, array); // array is now {1, 2, 5, 10, 50}
// sort_ascending(0, NULL); // nothing to do for empty array
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <stdlib.h>   // qsort

static int cmp_ints(const void *a, const void *b){
  int ia = *(const int *)a;
  int ib = *(const int *)b;
  if (ia < ib) return -1;
  if (ia > ib) return 1;
  return 0;
}

void sort_ascending (size_t length, int array[length]){
  // sort the array given in parameter in place
  if (array == NULL || length == 0) return;
  qsort(array, length, sizeof(int), cmp_ints);
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