// -----------------------------------------------------------
// Given a time signature (as a string), you must find the amount of quarter 
// notes that can be fit into one measure, which will be returned as 
// an unsigned integer. If a non-integer number of quarter notes can 
// be fit into a measure, the value should be floored. DO NOT RETURN A NON INTEGER.
// 
// The Given Time Signature:
// 
// Will not be malformed
// Will have a top number below 4096
// Will have a bottom number below 256
// All valid time signatures must have a bottom number that is a power of 2. 
// If the given signature is invalid, return null in TypeScript, return -1 in C.
// 
// If less then one quarter note can be fit in a measure, return 0;
// 
// Examples:
// 
// "3/4" → 3
// 
// "7/8" → 3
// 
// "11/8" → 5
// 
// "10/7" → null or -1
// 
// "3/16" → 0
// -----------------------------------------------------------

#include <stdlib.h>   // strtol

// return quarter notes per measure
// the result may end up being zero
// for invalid denomiator return -1

int find_quarter_notes(const char *time_signature){
  char *end;
  long top = strtol(time_signature, &end, 10);
  if (*end != '/') return -1;
  
  long bottom = strtol(end + 1, NULL, 10);
  if (bottom <= 0 || (bottom & (bottom - 1)) != 0) return -1;
  
  long answer = (4 * top) / bottom;
  
  if (answer < 0) return 0;
  
  return (int)answer;
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