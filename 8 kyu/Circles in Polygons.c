// -----------------------------------------------------------
// You are the owner of a box making company.
// 
// Your company can produce any equal sided polygon box, but plenty of your customers want to transport circular objects in these boxes. Circles are a 
// very common shape in the consumer industry. Tin cans, glasses, tyres and CD's are a few examples of these.
// 
// As a result you decide to add this information on your boxes: The largest (diameter) circular object that can fit into a given box.
// -----------------------------------------------------------

#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double circle_diameter(unsigned sides, unsigned side_length){
  double angle = M_PI / sides;
  return side_length * cos(angle) / sin(angle);
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