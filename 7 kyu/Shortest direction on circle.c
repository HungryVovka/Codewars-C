// -----------------------------------------------------------
// Given coordinates of two points A and B on a circle determine what 
// is the shortest direction from A to B.
// 
// To be clear with context, let's make some definitions:
// 
// Direction on a circle is number of degrees to advance along 
// the circle from a point counterclockwise (positive sign) or clockwise (negative sign).
// Length of a direction is its absolute value.
// A point coordinate is value of a direction to the point from the 
// rightmost circle point.
// As any number of full turns doesn't change actual point position, 
// with this definition multiple coordinates may correspond to a same point.
// 
// Conditions:
// 
// coordinates are integer
// coordinates are NOT limited to 0..360 and may be negative
// 
// Examples:
// 
// With A at 0 (right) and B at 90 (top) the shortest direction is counterclockwise +90.
// If points are swapped in the previous example, the shortest direction is flipped to -90.
// With A at 180 (left) and B at -450 (bottom) the shortest direction is counterclockwise +90.
// With A at 90 (top) and B at 270 (bottom) both 180 and -180 are correct.
// -----------------------------------------------------------

int shortest_direction(long long a, long long b){
  int a_mod, b_mod, da;
  a_mod = (int)(((a % 360LL) + 360LL) % 360LL);
  b_mod = (int)(((b % 360LL) + 360LL) % 360LL);
  da = b_mod - a_mod;
  if (da > 180){
    da -= 360;
  } else if (da < -180){
    da += 360;
  }
  return da;
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