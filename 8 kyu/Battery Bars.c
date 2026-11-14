// -----------------------------------------------------------
// Your phone shows its battery as a row of 5 bars. Each full bar represents 20% of charge. 
// A bar only lights up when its whole 20% is reached.
// 
// Write a function battery_bars(percent) that returns the battery as a string: 
// # for a lit bar, . for an empty one, all wrapped in square brackets.
// 
// Examples
// battery_bars(100)  # => "[#####]"
// battery_bars(70)   # => "[###..]"
// battery_bars(20)   # => "[#....]"
// battery_bars(19)   # => "[.....]"
// battery_bars(0)    # => "[.....]"
// 
// Notes
// percent is an integer from 0 to 100
// -----------------------------------------------------------

//  do not allocate memory for a return value
//  write result to your provided array *bars

void battery_bars(unsigned int percent, char *bars){
  unsigned int lit_bars;
  unsigned int i;
  
  lit_bars = percent / 20;
  if (lit_bars > 5) lit_bars = 5;
  
  bars[0] = '[';
  for (i = 0; i < 5; i++){
    if (i < lit_bars){
      bars[i + 1] = '#';
    } else {
      bars[i + 1] = '.';
    }
  }
  bars[6] = ']';
  bars[7] = '\0';
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