// -----------------------------------------------------------
// Some new animals have arrived at the zoo. The zoo keeper is concerned that perhaps the animals do not have the right tails. To 
// help her, you must correct the broken function to make sure that the second argument (tail), is the same as the last letter of the 
// first argument (body) - otherwise the tail wouldn't fit!
// 
// If the tail is right return true, else return false.
// 
// The arguments will always be non empty strings, and normal letters.
// -----------------------------------------------------------

#include <string.h> // strlen

int correct_tail(const char *body, const char *tail) {
  size_t len = strlen(body);
  return len == 0 ? 0 : body[len - 1] == tail[0];
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