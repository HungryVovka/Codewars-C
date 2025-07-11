// -----------------------------------------------------------
// Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including 
// them.
// 
// For example:
// 
// a = 1
// b = 4
// --> [1, 2, 3, 4]
// -----------------------------------------------------------

//  assign function results to provided array

void between(int a, int b, int *integers){
  int i;
  for (i = 0; i <= b - a; i++){
    integers[i] = a + i;
  }
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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