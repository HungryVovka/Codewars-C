// -----------------------------------------------------------
// When it's spring Japanese cherries blossom, it's called "sakura" and it's admired 
// a lot. The petals start to fall in late April.
// 
// Suppose that the falling speed of a petal is 5 centimeters per second (5 cm/s), 
// and it takes 80 seconds for the petal to reach the ground from a certain branch.
// 
// Write a function that receives the speed (in cm/s) of a petal as input, and returns 
// the time it takes for that petal to reach the ground from the same branch.
// 
// Notes:
// 
// The movement of the petal is quite complicated, so in this case we can see 
// the velocity as a constant during its falling.
// Pay attention to the data types.
// If the initial velocity is non-positive, the return value should be 0
// -----------------------------------------------------------

double sakura_fall(double speed){
  if (speed <= 0.0) return 0.0;
  double height = 80.0 * 5;
  return height / speed;
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