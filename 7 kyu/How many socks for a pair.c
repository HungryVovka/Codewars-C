// -----------------------------------------------------------
// I have a number of different colours of socks mixed up in a drawer and I require a number of matching pairs of socks. Fortunately, I don't mind 
// what colour the pairs are and I have an infinite number of each colour of sock.
// 
// Your task is to create a function with inputs colours and pairs that returns the minimum number of socks that I would have to take from my 
// drawer to guarantee pairs number of matching pairs.
// 
// Example:
// for colours = 2, pairs = 1, return 3, because it takes 3 socks to guarantee 1 pair of socks with 2 different possible colours to select from.
// 
// More examples:
// 
// for colours = 1, pairs = 2: return 4
// for colours = 2, pairs = 3: return 7
// for colours = 4, pairs = 2: return 7
// for colours = 4, pairs = 4: return 11
// 
// Note: colours and pairs are both positive integers.
// -----------------------------------------------------------

unsigned socks(unsigned colours, unsigned pairs){
  return pairs * 2 + colours - 1;
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