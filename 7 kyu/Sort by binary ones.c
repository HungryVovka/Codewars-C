// -----------------------------------------------------------
// In this example, you need to implement a function that sorts 
// a list of integers based on their binary representation.
// 
// The rules are simple:
// 
// sort the list based on the amount of 1s in the binary 
// representation of each number.
// if two numbers have the same amount of 1s, the shorter 
// string goes first. (ex: "11" goes before "101" when 
// sorting 3 and 5 respectively)
// if the strings have the same length, lower decimal number goes first. 
// (ex: 21 = "10101" and 25 = "11001", then 21 goes first as it's lower)
// Examples:
// 
// Input: [1,15,5,7,3]
// 
// ( in binary strings is: ["1", "1111", "101", "111", "11"])
// Output: [15, 7, 3, 5, 1]
// 
// (and after sortByBinaryOnes is: ["1111", "111", "11", "101", "1"])
// -----------------------------------------------------------

#include <stddef.h>   // size_t

static int count_ones(unsigned x){
  int count = 0;
  while (x){
    count += x & 1;
    x >>= 1;
  }
  return count;
}

static int bit_length(unsigned x){
  int length = 0;
  do {
    length++;
    x >>= 1;
  } while (x);
  return length;
}

static int should_swap(unsigned a, unsigned b){
  int ones_a = count_ones(a);
  int ones_b = count_ones(b);
  if (ones_a != ones_b) return ones_a < ones_b;
  int len_a = bit_length(a);
  int len_b = bit_length(b);
  if (len_a != len_b) return len_a > len_b;
  return a > b;
}

void sort_by_popcount (size_t length, unsigned array[length]){
    // sort the array in place
  size_t i, j;
  for (i = 0; i < length; i++){
    for (j = i + 1; j < length; j++){
      if (should_swap(array[i], array[j])){
        unsigned temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
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