// -----------------------------------------------------------
// It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat 
// you to calculate their average for them. Easy ! You just need to write a script.
// 
// Return the average of the given array rounded down to its nearest integer.
// 
// The array will never be empty.
// -----------------------------------------------------------

#include <stddef.h>

int get_average(const int *marks, size_t count){
  if (count == 0) return 0;
  long long somma = 0;
  size_t i;
  for (i = 0; i < count; i++) somma += marks[i];
  return (int)(somma / count);
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