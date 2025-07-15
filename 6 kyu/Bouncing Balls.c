// -----------------------------------------------------------
// A child is playing with a ball on the nth floor of a tall building. The height of this floor above ground level, h, is known.
// 
// He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height (a bounce of 0.66).
// 
// His mother looks out of a window 1.5 meters from the ground.
// 
// How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing)?
// 
// Three conditions must be met for a valid experiment:
// Float parameter "h" in meters must be greater than 0
// Float parameter "bounce" must be greater than 0 and less than 1
// Float parameter "window" must be less than h.
// 
// If all three conditions above are fulfilled, return a positive integer, otherwise return -1.
// 
// Note:
// The ball can only be seen if the height of the rebounding ball is strictly greater than the window parameter.
// 
// Examples:
// - h = 3, bounce = 0.66, window = 1.5, result is 3
// 
// - h = 3, bounce = 1, window = 1.5, result is -1 
// 
// (Condition 2) not fulfilled).
// -----------------------------------------------------------

#include <stdio.h>

int bouncingBall(double h, double bounce, double window){
  if (h <= 0 || bounce >= 1 || bounce <= 0 || window >= h) return -1;
  int seen = 1;
  while (window < (h *= bounce)) seen += 2;
  return seen;
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