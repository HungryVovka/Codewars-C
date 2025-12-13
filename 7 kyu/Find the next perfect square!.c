// -----------------------------------------------------------
// You might know some pretty large perfect squares. But what about the NEXT one?
// 
// Complete the findNextSquare method that finds the next integral perfect square 
// after the one passed as a parameter. Recall that an integral perfect square is 
// an integer n such that sqrt(n) is also an integer.
// 
// If the argument is itself not a perfect square then return either -1 or an 
// empty value like None or null, depending on your language. You may assume 
// the argument is non-negative.
// 
// Examples ( Input --> Output )
// 121 --> 144
// 625 --> 676
// 114 --> -1  #  because 114 is not a perfect square
// -----------------------------------------------------------

#include <math.h>     // sqrt

long int findNextSquare(long int sq){
  if (sq < 0) return -1;
  long int root = (long int)sqrt((double)sq);
  if (root * root == sq){
    long int next = root + 1;
    return next * next;
  }
  return -1;
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