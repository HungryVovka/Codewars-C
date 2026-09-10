// -----------------------------------------------------------
// Implement a function which takes a string, and returns its hash value.
// 
// Algorithm steps:
// 
// a := sum of the ascii values of the input characters
// b := sum of every difference between the consecutive characters of 
// the input (second char minus first char, third minus second, ...)
// c := (a OR b) AND ((NOT a) shift left by 2 bits)
// d := c XOR (32 * (total_number_of_spaces + 1))
// return d
// 
// Note: OR, AND, NOT, XOR are bitwise operations.
// 
// Examples
// input = "a"
// a = 97
// b = 0
// result = 64
// 
// input = "ca"
// a = 196
// b = -2
// result = -820
// 
// Give an example why this hashing algorithm is bad?
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // strlen

int hash(char* str){
  unsigned int a, b, c, answer;
  size_t i, spaces, len;
  
  a = 0;    // sum of ASCII valies of all characters
  for (i = 0; str[i] != '\0'; i++){
    a += (unsigned char)str[i];
  }
  
  b = 0;    // sum of differenced between consecutive chracters
  len = strlen(str);
  for (i = 0; i + 1 < len; i++){
    b += (unsigned int)(str[i + 1] - str[i]);
  }
  
  c = (a | b) & ((~a) << 2);
  
  spaces = 0;
  for (i = 0; str[i] != '\0'; i++){
    if (str[i] == ' ') spaces++;
  }
  
  answer = c ^ (32 * (spaces + 1));
  return (int)answer;
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