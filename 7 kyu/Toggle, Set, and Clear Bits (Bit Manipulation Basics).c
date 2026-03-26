// -----------------------------------------------------------
// Toggle, Set, and Clear Bits
// Your task is to implement a collection of utility functions that perform 
// common bitwise operations on integers. All bit positions are zero-based, 
// meaning position 0 refers to the least significant bit.
// 
// Toggles (flips) the bit at the given position. If the bit is 0, 
// it becomes 1; if it is 1, it becomes 0.
// 
// toggleBit(5, 1) => 7
// 
// Sets the bit at the given position to 1, without modifying other bits.
// 
// setBit(5, 1) => 7
// 
// Clears (sets to 0) the bit at the given position, leaving all other 
// bits unchanged.
// 
// clearBit(7, 1) => 5
// 
// Checks whether the bit at the given position is set to 1. 
// Returns true if it is set, otherwise false.
// 
// isBitSet(5, 0) => true
// 
// Sets all bits to 1 wherever the mask has 1s.
// 
// setMultipleBits(5, 3) => 7
// 
// Clears all bits wherever the mask has 1s.
// 
// clearMultipleBits(7, 2) => 5
// 
// Toggles all bits wherever the mask has 1s.
// 
// toggleMultipleBits(5, 3) => 6
// 
// Notes
// All functions should return the resulting number (or a boolean for isBitSet).
// -----------------------------------------------------------

/*
    Note: In C/C++, for (n << shift) and (n >> shift) to be
    well-defined, 0 <= shift < bitwidth(n) must be true;
    otherwise the behavior is undefined.
    As a result, the C version will not pass `position`
    arguments greater than or equal to the number of bits in an unsigned int.
*/
#include <stdbool.h>    // bool ,true, false

// 1. Toggle a bit at a given position
unsigned toggleBit(unsigned n, unsigned position){
  return n ^ (1U << position);  // XOR with 1 on position
}

// 2. Set a bit at a given position
unsigned setBit(unsigned n, unsigned position){
  return n | (1U << position);  // OR with 1 on position
}

// 3. Clear a bit at a given position
unsigned clearBit(unsigned n, unsigned position){
  return n & ~(1U << position); // AND with inversion on 1st position
}

// 4. Check if a bit at a given position is set
bool isBitSet(unsigned n, unsigned position){
  return (n & (1U << position)) != 0;   // AND with 1 on position and check
}

// 5. Set multiple bits using a mask
unsigned setMultipleBits(unsigned n, unsigned mask){
  return n | mask;  // OR with mask
}

// 6. Clear multiple bits using a mask
unsigned clearMultipleBits(unsigned n, unsigned mask){
  return n & ~mask; // AND with inversion of mask
}

// 7. Toggle multiple bits using a mask
unsigned toggleMultipleBits(unsigned n, unsigned mask){
  return n ^ mask;  // XOR with mask
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