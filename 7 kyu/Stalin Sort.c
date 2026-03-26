// -----------------------------------------------------------
// Stalin Sort
// "If there is no person, there is no problem"
// 
// Unlike conventional sorting algorithms that rearrange elements, Stalin 
// Sort solves the problem of disorder radically: any element that violates 
// the ascending order is shot and removed from the list.
// 
// Task
// Implement the function stalin_sort / stalinSort, which accepts an array 
// of integers and modifies it in-place, removing all elements that violate 
// the ascending order relative to the previous surviving element.
// 
// All other elements are considered enemies of order and must be eliminated.
// 
// Rules
// The first element always survives.
// Each next element survives only if it is ≥ the previous survivor.
// The order of the survivors is preserved.
// An empty array remains unchanged.
// Optionally, print "Расстрелять!" to stdout for each eliminated element.
// 
// Examples
// [1, 2, 3, 4, 5]        →  [1, 2, 3, 4, 5]   (all loyal, no executions)
// [5, 3, 1, 2, 4]        →  [5]                (4 executions)
// [1, 2, 2, 3, 1, 4]     →  [1, 2, 2, 3, 4]   (1 execution)
// [3, 1, 4, 1, 5, 9, 2]  →  [3, 4, 5, 9]      (3 executions)
// []                      →  []                (no one to purge)
// 
// ⚠ The function does not return anything — it modifies the array directly.
// 
// ► Complexity: O(n) time, O(1) space — in theory.
// The real-world implementation may vary depending on
// how efficiently your government handles paperwork.
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <stdio.h>    // puts

// ☭ The Party demands order. Provide it. ☭
// Hint: puts(u8"Расстрелять!") for each eliminated element

void stalin_sort(size_t *length, int array[*length]){
    // length: input/output parameter
    // update it with the length of the sorted array
  
  if (*length == 0) return;
  size_t write_i = 1;
  int survivor = array[0];
  size_t i;
  for (i = 1; i < *length; i++){
    if (array[i] >= survivor){
      array[write_i] = array[i];
      survivor = array[i];
      write_i++;
    } else {
      puts(u8"Расстрелять!");
    }
  }
  *length = write_i;
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