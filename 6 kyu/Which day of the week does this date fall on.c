// -----------------------------------------------------------
// The goal of this kata is given a tuple[int, int, int] (or Array[int, int, int]) representing 
// a date in (year, month, day) format, to determine which day of the week that the date occured on.
// 
// The data-type that will be returned will be whatever type represents the "String" data-type in the 
// chosen programming language.
// 
// All inputs will be valid dates, and will be less than Python's date.max constant, that being December 
// 31, 9999.
// 
// Date restrictions
// The dates that will be tested will all fall after January 1st, 1583.
// 
// This is because before 1583, there were a lot of modifications to what we would know as the Roman 
// calendar by noble figures over the years, such as the Roman priests and the pope, and so it would be 
// too difficult to write a program to cover all of the edge cases without brute-force.
// 
// Restrictions
// In Python the forbidden modules are as follows (so a builtin module isn't used to do most of the 
// heavy lifting):
// 
// calendar
// date
// datetime
// dateutil
// os
// subprocess
// sqlite3
// sys
// 
// numpy
// pandas
// 
// Also, the following builtin methods are banned (as it isn't best practice to use these in actual code):
// 
// compile
// eval
// exec
// 
// In C the mktime() and the strptime() functions have been disabled.
// 
// Examples:
// Date              | Input          | Result
// ================================================
// January   01 2000 | (2000,  1,  1) | Saturday
// Februrary 02 1865 | (1865,  2,  2) | Thursday
// September 23 1775 | (1775,  9, 23) | Saturday
// Februrary 27 1604 | (1604,  2, 27) | Friday
// January   01 1583 | (1583,  1,  1) | Saturday
// December  31 2583 | (2583, 12, 31) | Wednsday
// October   16 2029 | (2029, 10, 16) | Tuesday
// 
// -----------------------------------------------------------

enum weekday {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

static int month_offset(int month){
  static const int daysInMonths[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
  };
  
  int totalDays;
  int i;
  
  totalDays = 0;
  
  for (i = 0; i < month - 1; i++) totalDays += daysInMonths[i];
  totalDays = totalDays % 7;
  if (month >= 3){
    totalDays -= 1;
    if (totalDays < 0) totalDays += 7;
  }
  return totalDays;
}

enum weekday find_date(const unsigned date[3]){
  int year, month, day;
  int calcYear;
  int weekdayIndex;
  
  year = (int)date[0];
  month = (int)date[1];
  day = (int)date[2];
  
  calcYear = year;
  if (month < 3) calcYear--;
  
  weekdayIndex = (calcYear + calcYear / 4
                  - calcYear / 100 + calcYear/400
                  + month_offset(month) + day) % 7;
  
  if (weekdayIndex < 0) weekdayIndex += 7;
  return (enum weekday)weekdayIndex;
}

// or

enum weekday {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

enum weekday find_date(const unsigned date[3]){
  static const int monthOffsets[12] = {
    0, 3, 2, 5, 0, 3,
    5, 1, 4, 6, 2, 4
  };
  
  int year, month, day;
  int calcYear;
  int weekdayIndex;
  
  year = (int)date[0];
  month = (int)date[1];
  day = (int)date[2];
  
  calcYear = year;
  if (month < 3) calcYear--;
  
  weekdayIndex = (calcYear + calcYear / 4
                  - calcYear / 100 + calcYear/400
                  + monthOffsets[month - 1] + day) % 7;
  
  if (weekdayIndex < 0) weekdayIndex += 7;
  return (enum weekday)weekdayIndex;
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