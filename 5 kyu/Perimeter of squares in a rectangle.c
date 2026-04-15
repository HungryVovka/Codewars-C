// -----------------------------------------------------------
// The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. 
// It's easy to see that the sum of the perimeters of these 
// squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80 
// 
// Could you give the sum of the perimeters of all the squares in a rectangle 
// when there are n + 1 squares disposed in the same manner as in the drawing:
// 
// Hint:
// See Fibonacci sequence
// 
// Ref:
// http://oeis.org/A000045
// 
// The function perimeter has for parameter n where n + 1 is the number of squares (they are numbered from 0 to n) and returns the total perimeter of all the squares.
// 
// perimeter(5)  should return 80
// perimeter(7)  should return 216
// -----------------------------------------------------------

typedef unsigned long long ull;

ull perimeter(int n){
  ull f_prev = 1;
  ull f_curr = 1;
  ull f_next;
  int i;
  
  if (n == 0) return 4;
  
  for (i = 2; i <= n + 2; i++){
    f_next = f_prev + f_curr;
    f_prev = f_curr;
    f_curr = f_next;
  }
  return 4 * (f_curr - 1);
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