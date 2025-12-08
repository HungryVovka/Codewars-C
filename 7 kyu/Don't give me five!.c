// -----------------------------------------------------------
// Don't give me five!
// In this kata you get the start number and the end number of a region and 
// should return the count of all numbers except numbers with a 5 in it. 
// The start and the end number are both inclusive!
// 
// Examples:
// 
// 1,9 -> 1,2,3,4,6,7,8,9 -> Result 8
// 4,17 -> 4,6,7,8,9,10,11,12,13,14,16,17 -> Result 12
// 
// The result may contain fives. ;-)
// The start number will always be smaller than the end number. Both numbers 
// can be also negative!
// 
// I'm very curious for your solutions and the way you solve it. Maybe someone 
// of you will find an easy pure mathematics solution.
// 
// Have fun coding it and please don't forget to vote and rank this kata! :-)
// -----------------------------------------------------------

static int has_five(int x){
  if (x < 0) x = -x;
  while (x > 0){
    if (x % 10 == 5) return 1;
    x /= 10;
  }
  return 0;
}

int dontGiveMeFive(int start, int end){
  int count = 0;
  int i;
  for (i = start; i <= end; i++){
    if (!has_five(i)) count++;
  }
  return count;
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