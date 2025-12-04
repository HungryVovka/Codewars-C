// -----------------------------------------------------------
// Given 8 byte variable (Uint64) extract length of bits starting from least significant bit* and skipping offset of bits.
// 
// All input values will be non-negative.
// 
// Examples
// 
// input			offset			length		result
// 0xAF				4				0			0x0
// 0xAF				0				4			0xF
// 0xAF				4				4			0xA
// 0xAB00EF			4				16			0xB00E
// 0xAA00BB00CC		0xF0000000		0x64		0x0
// 
// 
// *LSb - Least Significant bit - bit denoting smallest value in the number i.e. 0 or 1.
// -----------------------------------------------------------

#include <stdint.h>   // unit64_t

uint64_t extract_bits(uint64_t n, unsigned offset, unsigned length){
  if (length == 0) return 0;
  if (offset >= 64) return 0;
  if (length >= 64 - offset) return n >> offset;
  return (n >> offset) & ((1ULL << length) - 1);
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