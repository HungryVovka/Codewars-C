// -----------------------------------------------------------
// The number n is Evil if it has an even number of 1's in its binary representation.
// The first few Evil numbers: 3, 5, 6, 9, 10, 12, 15, 17, 18, 20
// 
// The number n is Odious if it has an odd number of 1's in its binary representation.
// The first few Odious numbers: 1, 2, 4, 7, 8, 11, 13, 14, 16, 19
// 
// You have to write a function that determine if a number is Evil of Odious, function should return "It's 
// Evil!" in case of evil number and "It's Odious!" in case of odious number.
// 
// good luck :)
// -----------------------------------------------------------

const char *evil(int value){
  int conteggio = 0;
  int numero = value;
  
  while (numero > 0){
    conteggio += numero & 1;
    numero >>= 1;
  }
  
  return (conteggio % 2 == 0) ? "It's Evil!" : "It's Odious!";
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