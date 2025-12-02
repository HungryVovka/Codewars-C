// -----------------------------------------------------------
// Define a function that takes in two non-negative integers a and b and returns 
// the last decimal digit of a^b. Note that a and b may be very large!
// 
// For example, the last decimal digit of 9^7 is 9, since 9^7 = 4782969. The last 
// decimal digit of (2^200)^300, which has over 10^92 decimal digits, is 6. Also, please 
// take 0^0 to be 1.
// 
// You may assume that the input will always be valid.
// 
// Examples
// last_digit("4", "1")            /* returns 4 */
// last_digit("4", "2")            /* returns 6 */
// last_digit("9", "7")            /* returns 9 */ 
// last_digit("10","10000000000")  /* returns 0 */
// -----------------------------------------------------------

#include <string.h>   // strlen

int last_digit(const char *a, const char *b){
  size_t len_a, len_b;
  size_t i;
  int last_a;
  int mod4 = 0;
  int eff_exp;
  int answer = 1;
  
  len_b = strlen(b);
  if (len_b == 1 && b[0] == '0') return answer;
  
  len_a = strlen(a);
  last_a = (int)(a[len_a - 1] - '0');
  
  if (last_a == 0 || last_a == 1 || last_a == 5 || last_a == 6) return last_a;
  
  for (i = 0; i < len_b; i++) mod4 = (mod4 * 10 + (int)(b[i] - '0')) % 4;
  eff_exp = (mod4 == 0 ? 4 : mod4);
  
  for (i = 0; i < (size_t)eff_exp; i++) answer = (answer * last_a) % 10;
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