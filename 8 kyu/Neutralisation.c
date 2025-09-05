// -----------------------------------------------------------
// Given two strings comprised of + and -, return a new string which shows how the two strings interact 
// in the following way:
// 
// When positives and positives interact, they remain positive.
// When negatives and negatives interact, they remain negative.
// But when negatives and positives interact, they become neutral, and are shown as the number 0.
// 
// Worked Example
// ("+-+", "+--") ➞ "+-0"
// # Compare the first characters of each string, then the next in turn.
// # "+" against a "+" returns another "+".
// # "-" against a "-" returns another "-".
// # "+" against a "-" returns "0".
// # Return the string of characters.
// 
// Examples
// ("--++--", "++--++") ➞ "000000"
// 
// ("-+-+-+", "-+-+-+") ➞ "-+-+-+"
// 
// ("-++-", "-+-+") ➞ "-+00"
// 
// Notes
// The two strings will be the same length.
// -----------------------------------------------------------

#include <stddef.h>

void neutralize (const char *s1, const char *s2, char *s3){
  // write to s3
  size_t i = 0;
  while (s1[i] != '\0' && s2[i] != '\0'){
    if (s1[i] == s2[i]){
      s3[i] = s1[i];
    } else {
      s3[i] = '0';
    }
    i++;
  }
  s3[i] = '\0';
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