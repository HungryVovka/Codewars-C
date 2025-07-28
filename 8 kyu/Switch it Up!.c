// -----------------------------------------------------------
// When provided with a number between 0-9, return it in words. Note that the input is guaranteed to be within the range of 0-9.
// 
// Input: 1
// 
// Output: "One".
// 
// If your language supports it, try using a switch statement (https://en.wikipedia.org/wiki/Switch_statement).
// -----------------------------------------------------------

const char *switchItUp(int digit){
// memory will not be freed, return a string literal or a static string:
  static const char *words[] = {
    "Zero", "One", "Two", 
    "Three", "Four", "Five", 
    "Six", "Seven", "Eight", "Nine"
  };
  if (digit >= 0 && digit <= 9){
    return words[digit];
  } else {
    return "Unknown";
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