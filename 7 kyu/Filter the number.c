// -----------------------------------------------------------
// Filter the number
// Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the 
// number back to its original state?
// 
// Task
// Your task is to return a number from a string.
// 
// Details
// You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they 
// occur.
// -----------------------------------------------------------

#include <ctype.h>    // isdigit
#include <string.h>   // strlen

long long filter_string(const char *valore){
  long long risultato = 0;
  int i, lunghezza = strlen(valore);
  for (i = 0; i < lunghezza; i++){
    if (isdigit((unsigned char)valore[i])){
      risultato = risultato * 10 + (valore[i] - '0');
    }
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