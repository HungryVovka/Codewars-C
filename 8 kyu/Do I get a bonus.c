// -----------------------------------------------------------
// It's bonus time in the big city! The fatcats are rubbing their paws in anticipation... but who is going to make the most money?
// 
// Build a function that takes in two arguments (salary, bonus). Salary will be an integer, and bonus a boolean.
// 
// If bonus is true, the salary should be multiplied by 10. If bonus is false, the fatcat did not make enough money and must receive only his stated 
// salary.
// 
// Return the total figure the individual will receive as a string prefixed with "£" (= "\u00A3", JS, Go, Java, Scala, and Julia), "$" (C#, C++, Dart, 
// Ruby, Clojure, Elixir, PHP, Python, Haskell, and Lua) or "¥" (Rust).
// -----------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
  //  return a heap allocated string (the tests will free it)
  ull total = bonus ? salary * 10 : salary;
  int len = snprintf(NULL, 0, "$%llu", total);
  char *result = malloc((len + 1) * sizeof(char));
  if (!result) return NULL;
  snprintf(result, len + 1, "$%llu", total);
  return result;
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