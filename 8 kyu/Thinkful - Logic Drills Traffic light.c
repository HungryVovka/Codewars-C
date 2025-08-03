// -----------------------------------------------------------
// You're writing code to control your town's traffic lights. You need a function to handle each change from green, 
// to yellow, to red, and then to green again.
// 
// Complete the function that takes a string as an argument representing the current state of the light and returns 
// a string representing the state the light should change to.
// 
// For example, when the input is green, output should be yellow.
// 
// In C the state of the light is represented by an enum, not a string.
// -----------------------------------------------------------

enum light {GREEN, YELLOW, RED};

enum light update_light (enum light light){
  switch (light){
      case GREEN: return YELLOW;
      case YELLOW: return RED;
      default: return GREEN;
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