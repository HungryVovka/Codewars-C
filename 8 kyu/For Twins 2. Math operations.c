// -----------------------------------------------------------
// Task:
// A magician in the subway showed you a trick, he put an ice brick in a bottle to impress you. The brick's length and width are equal, 
// forming a square; its height may be different. Just for fun and also to impress the magician and people around, you decided to 
// calculate the brick's volume. Write a function iceBrickVolume that will accept these parameters:
// 
// radius - bottle's radius (always > 0);
// bottleLength - total bottle length (always > 0);
// rimLength - length from bottle top to brick (always < bottleLength);
// And return volume of ice brick that magician managed to put into a bottle.
// 
// Note:
// All inputs are integers. Assume no irregularities to the cuboid brick. You may assume the bottle is shaped like a cylinder. The 
// brick cannot fit inside the rim. The ice brick placed into the bottle is the largest possible cuboid that could actually fit inside the 
// inner volume.
// 
// Example 1:
// radius = 1
// bottle_length = 10
// rim_length = 2
// 
// volume = 16
// 
// Example 2:
// radius = 5
// bottle_length = 30
// rim_length = 7
// 
// volume = 1150
// -----------------------------------------------------------

int ice_brick_volume(int radius, int bottle_length, int rim_length){
  return 2 * (radius * radius) * (bottle_length - rim_length);
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