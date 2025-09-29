// -----------------------------------------------------------
// Issue
// Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.
// 
// The pipes connecting your level's stages together need to be fixed before you receive any more complaints.
// 
// The pipes are correct when each pipe after the first is 1 more than the previous one.
// 
// Task
// Given a list of unique numbers sorted in ascending order, return a new list so that the values increment by 1 
// for each index from the minimum value up to the maximum value (both included).
// 
// Example
// Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8
// -----------------------------------------------------------

#include <stddef.h>   // size_t
#include <stdlib.h>   // malloc

//  return a dynamically allocated int array
//  set the pointer sz_out to size of output
//  return array will be freed by the tester

int *pipe_fix(size_t sz_in, const int input[sz_in], size_t *sz_out){
  if (sz_in == 0){
    *sz_out = 0;
    return NULL;
  }
  
  int min = input[0];
  int max = input[0];
  size_t i = 1;
  for (; i < sz_in; i++){
    if (input[i] < min) min = input[i];
    if (input[i] > max) max = input[i];
  }
  
  *sz_out = (size_t)(max - min + 1);
  
  int *answer = malloc(*sz_out * sizeof(int));
  if (!answer){
    *sz_out = 0;
    return NULL;
  }
  
  size_t j;
  for (j = 0; j < *sz_out; j++) answer[j] = min + (int)j;
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