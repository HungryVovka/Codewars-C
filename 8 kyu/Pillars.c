// -----------------------------------------------------------
// There are pillars near the road. The distance between the pillars is the same and the width of the pillars 
// is the same. Your function accepts three arguments:
// 
// 1. number of pillars (≥ 1);
// 2. distance between pillars (10 - 30 meters);
// 3. width of the pillar (10 - 50 centimeters).
// 
// Calculate the distance between the first and the last pillar in centimeters (without the width of the first 
// and last pillar).
// -----------------------------------------------------------

long pillars(int num_of_pillars, int distance, int width){
  if (num_of_pillars == 1){
    return 0;
  } else {
    return (num_of_pillars - 1) * (distance * 100) + 
      (num_of_pillars - 2) * width;
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