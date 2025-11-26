// -----------------------------------------------------------
// This series of katas will introduce you to basics of doing geometry with computers.
// 
// Vector objects (struct in C) have x, y, and z attributes. x, y and z are floating-point numbers.
// 
// Write a function calculating the cross product of Vector a and Vector b, the result should be a Vector object.
// 
// You can read more about cross product on Wikipedia. (https://en.wikipedia.org/wiki/Cross_product)
// -----------------------------------------------------------

typedef struct Vector {
    double x;
    double y;
    double z;
} vect;

vect crossProduct(vect a, vect b){
  vect answer;
  answer.x = a.y * b.z - a.z * b.y;
  answer.y = a.z * b.x - a.x * b.z;
  answer.z = a.x * b.y - a.y * b.x;
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