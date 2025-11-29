// -----------------------------------------------------------
// Finish the solution so that it takes an input n (integer) and returns a string that is the decimal 
// representation of the number grouped by commas after every 3 digits.
// 
// Assume: 0 <= n <= 2147483647
// 
// Examples
//        1  ->           "1"
//       10  ->          "10"
//      100  ->         "100"
//     1000  ->       "1,000"
//    10000  ->      "10,000"
//   100000  ->     "100,000"
//  1000000  ->   "1,000,000"
// 35235235  ->  "35,235,235"
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free
#include <string.h>   // strlen

static void reverse_string(char *str){
  int left;
  int right;
  char swapChar;
  
  left = 0;
  right = 0;
  
  while (str[right] != '\0'){
    right++;
  }
  right--;
  
  while (left < right){
    swapChar = str[left];
    str[left] = str[right];
    str[right] = swapChar;
    left++;
    right--;
  }
}

char *group_by_commas(int n) {
    //  <----  hajime!
    // return a heap-allocated string:
  char buffer[32];
  char *answer;
  int bufferIndex;
  int digitGroupCount;
  int currentNumber;
  int digit;
  int allocatedSize;
  int i;
  
  if (n == 0){
    answer = (char *)malloc(2);
    if (answer == NULL) return NULL;
    answer[0] = '0';
    answer[1] = '\0';
    return answer;
  }
  
  bufferIndex = 0;
  digitGroupCount = 0;
  currentNumber = n;
  
  while (currentNumber > 0){
    digit = currentNumber % 10;
    buffer[bufferIndex++] = (char)('0' + digit);
    currentNumber /= 10;
    digitGroupCount++;
    
    if (digitGroupCount == 3 && currentNumber > 0){
      buffer[bufferIndex++] = ',';
      digitGroupCount = 0;
    }
  }
  
  buffer[bufferIndex] = '\0';
  reverse_string(buffer);
  
  allocatedSize = bufferIndex + 1;
  answer = (char *)malloc(allocatedSize);
  if (answer == NULL) return NULL;
  for (i = 0; i < allocatedSize; i++) answer[i] = buffer[i];
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