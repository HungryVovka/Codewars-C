// -----------------------------------------------------------
// Write a simple function that takes as a parameter a date object and returns a boolean value representing whether the date is 
// today or not.
// 
// Make sure that your function does not return a false positive by only checking the day.
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <time.h> // time_t, time, localtime, struct tm

bool is_today (const struct tm *date){
  time_t now = time(NULL); // right now in seconds
  struct tm *oggi = localtime(&now); // local time
  return (date->tm_year == oggi->tm_year &&
          date->tm_mon == oggi->tm_mon &&
          date->tm_mday == oggi->tm_mday);
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