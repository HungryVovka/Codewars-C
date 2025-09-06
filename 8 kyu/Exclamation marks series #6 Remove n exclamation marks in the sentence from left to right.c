// -----------------------------------------------------------
// Description:
// Remove n exclamation marks in the sentence from left to right. n is positive integer.
// 
// Examples
// remove("Hi!",1) === "Hi"
// remove("Hi!",100) === "Hi"
// remove("Hi!!!",1) === "Hi!!"
// remove("Hi!!!",100) === "Hi"
// remove("!Hi",1) === "Hi"
// remove("!Hi!",1) === "Hi!"
// remove("!Hi!",100) === "Hi"
// remove("!!!Hi !!hi!!! !hi",1) === "!!Hi !!hi!!! !hi"
// remove("!!!Hi !!hi!!! !hi",3) === "Hi !!hi!!! !hi"
// remove("!!!Hi !!hi!!! !hi",5) === "Hi hi!!! !hi"
// remove("!!!Hi !!hi!!! !hi",100) === "Hi hi hi"
// -----------------------------------------------------------

#include <stdlib.h> // malloc, free
#include <string.h> // strlen

char *remove(const char *str_in, int n){
  size_t len = strlen(str_in);
  char * risultato = malloc(len + 1);
  if (!risultato) return NULL;
  size_t i = 0, j = 0;
  int rimanenti = n;
  while (str_in[i] != '\0'){
    if (str_in[i] == '!' && rimanenti > 0){
      rimanenti--;
    } else {
      risultato[j++] = str_in[i];
    }
    i++;
  }
  risultato[j] = '\0';
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