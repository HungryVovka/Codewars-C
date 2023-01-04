// -----------------------------------------------------------
// Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to 
// n ( inclusive ).
// 
// Examples
// n = 0  ==> [1]        # [2^0]
// n = 1  ==> [1, 2]     # [2^0, 2^1]
// n = 2  ==> [1, 2, 4]  # [2^0, 2^1, 2^2]
// -----------------------------------------------------------

#include <inttypes.h>
#include <stddef.h>

void powers_of_two (size_t n, uint64_t powers[n + 1]){
  // fill the powers[] array
  for (int i = 0; i < n + 1; i++){
    powers[i] = pow(2, i);
  }
}