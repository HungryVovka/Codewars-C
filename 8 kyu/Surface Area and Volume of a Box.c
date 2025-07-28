// -----------------------------------------------------------
// Write a function that returns the total surface area and volume of a box.
// 
// The given input will be three positive non-zero integers: width, height, and depth.
// 
// The output will be language dependant, so please check sample tests for the corresponding data type, (list, tuple, struct, 
// query, etcetera).
// -----------------------------------------------------------

typedef struct AV_PAIR {
  unsigned area;
  unsigned volume;
} area_volume_pair;

area_volume_pair get_size(unsigned w, unsigned h, unsigned d){
  area_volume_pair answer;
  answer.area = (w * h + w * d + h * d) * 2;
  answer.volume = w * h * d;
  return answer;
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