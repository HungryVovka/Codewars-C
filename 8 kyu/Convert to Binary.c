// -----------------------------------------------------------
// Task Overview
// Given a non-negative integer b, write a function which returns an integer d such that the binary representation of b is the 
// same as the decimal representation of d.
// 
// Examples:
// 
// n = 1 should return 1
// n = 5 should return 101
// n = 11 should return 1011
// -----------------------------------------------------------

unsigned long long to_binary(unsigned short num){
  if (num == 0) return 0;
  unsigned long long risultato = 0, potenza10 = 1;
  while (num > 0){
    unsigned short bit = num % 2;
    risultato += bit * potenza10;
    potenza10 *= 10;
    num /= 2;
  }
  return risultato;
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