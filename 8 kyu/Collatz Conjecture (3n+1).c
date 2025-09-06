// -----------------------------------------------------------
// The Collatz conjecture (also known as 3n+1 conjecture) is a conjecture that applying the following algorithm to any number we 
// will always eventually reach one:
// 
// [This is writen in pseudocode]
// if(number is even) number = number / 2
// if(number is odd) number = 3*number + 1
// 
// #Task
// 
// Your task is to make a function hotpo that takes a positive n as input and returns the number of times you need to perform this 
// algorithm to get n = 1.
// 
// #Examples
// 
// hotpo(1) returns 0
// (1 is already 1)
// 
// hotpo(5) returns 5
// 5 -> 16 -> 8 -> 4 -> 2 -> 1
// 
// hotpo(6) returns 8
// 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
// 
// hotpo(23) returns 15
// 23 -> 70 -> 35 -> 106 -> 53 -> 160 -> 80 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
// 
// #References
// 
// Collatz conjecture wikipedia page: https://en.wikipedia.org/wiki/Collatz_conjecture
// -----------------------------------------------------------

unsigned hotpo(unsigned n){
  unsigned conteggio = 0;
  while (n != 1){
    if (n % 2 == 0){
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
    conteggio++;
  }
  return conteggio;
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