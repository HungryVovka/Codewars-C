// -----------------------------------------------------------
// Given a string, turn each character into its ASCII character code and join them together to create a number - 
// let's call this number total1:
// 
// 'ABC' --> 'A' = 65, 'B' = 66, 'C' = 67 --> 656667
// Then replace any incidence of the number 7 with the number 1, and call this number 'total2':
// 
// total1 = 656667
//               ^
// total2 = 656661
//               ^
// Then return the difference between the sum of the digits in total1 and total2:
// 
//   (6 + 5 + 6 + 6 + 6 + 7)
// - (6 + 5 + 6 + 6 + 6 + 1)
// -------------------------
//                        6
// -----------------------------------------------------------

#include <string.h> // strlen
#include <stdio.h>  // sprintf

int calc(const char *source){
  int total1, total2;
  int i, codice_ASCII, cifra;
  char buffer[32];
  
  total1 = 0, total2 = 0;
  
  for (i = 0; source[i] != '\0'; i++){
    codice_ASCII = (unsigned char)source[i];
    sprintf(buffer, "%d", codice_ASCII);
    int j;
    for (j = 0; buffer[j] != '\0'; j++){
      cifra = buffer[j] - '0';
      total1 += cifra;
      if (cifra == 7){
        total2 += 1;
      } else {
        total2 += cifra;
      }
    }
  }
  return total1 - total2;
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