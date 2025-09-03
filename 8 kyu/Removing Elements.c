// -----------------------------------------------------------
// Take an array and remove every second element from the array. Always keep the first element and start removing with the next element.
// 
// Example:
// size_t length = 5;
// remove_every_other(&length, {1, 2, 3, 4, 5});
// // -->  {1, 3, 5}
// 
// None of the arrays will be empty, so you don't have to worry about that!
// -----------------------------------------------------------

#include <stddef.h>

void remove_every_other(size_t *length, int array[*length])
{
// `length` is an input/output parameter.
// it points to the length of the array, and you must update it
// to report the new length:
  if (*length == 0) return;
  size_t nuovo_i = 0;
  size_t i;
  for (i = 0; i < *length; i+= 2) array[nuovo_i++] = array[i];
  *length = nuovo_i;
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