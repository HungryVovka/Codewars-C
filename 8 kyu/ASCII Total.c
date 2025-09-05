// -----------------------------------------------------------
// You'll be given a string, and have to return the sum of all characters as an int. The function should be 
// able to handle all printable ASCII characters.
// 
// Examples:
// 
// uniTotal("a") == 97
// uniTotal("aaa") == 291
// -----------------------------------------------------------

int uni_total(const char *s){
  int totale = 0;
  while (*s != '\0'){
    totale += (unsigned char)(*s);
    s++;
  }
  return totale;
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