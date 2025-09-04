// -----------------------------------------------------------
// Complete the function which returns the weekday according to the input number:
// 
// 1 returns "Sunday"
// 2 returns "Monday"
// 3 returns "Tuesday"
// 4 returns "Wednesday"
// 5 returns "Thursday"
// 6 returns "Friday"
// 7 returns "Saturday"
// Otherwise returns "Wrong, please enter a number between 1 and 7"
// -----------------------------------------------------------

char* whatday(int num){
  switch (num){
    case 1 : return "Sunday";
    case 2 : return "Monday";
    case 3 : return "Tuesday";
    case 4 : return "Wednesday";
    case 5 : return "Thursday";
    case 6 : return  "Friday";
    case 7 : return "Saturday";
    default: return "Wrong, please enter a number between 1 and 7";
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