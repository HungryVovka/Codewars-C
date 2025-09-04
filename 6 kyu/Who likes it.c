// -----------------------------------------------------------
// You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the 
// text that should be displayed next to such an item.
// 
// Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the 
// examples:
// 
// []                                -->  "no one likes this"
// ["Peter"]                         -->  "Peter likes this"
// ["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
// ["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
// ["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
// 
// return must be an allocated string
// do not mutate input
// Note: For 4 or more names, the number in "and 2 others" simply increases.
// -----------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

static int formatta_likes(char *out, size_t cap,
                         size_t numero_nomi,
                         const char *const nomi[numero_nomi]){
  switch (numero_nomi){
      case 0:
        return snprintf(out, cap, "no one likes this");
      case 1:
        return snprintf(out, cap, "%s likes this", nomi[0]);
      case 2:
        return snprintf(out, cap, "%s and %s like this", 
                        nomi[0], nomi[1]);
      case 3:
        return snprintf(out, cap, "%s, %s and %s like this", 
                        nomi[0], nomi[1], nomi[2]);
      default:
        return snprintf(out, cap, "%s, %s and %zu others like this", 
                        nomi[0], nomi[1], numero_nomi - 2);
  }
}


char *likes(size_t n, const char *const names[n]){
  int lunghezza = formatta_likes(NULL, 0, n, names);
  if (lunghezza < 0) return NULL;
  size_t dimensione = (size_t)lunghezza + 1;
  char *risultato = (char *)malloc(dimensione);
  if (!risultato) return NULL;
  
  formatta_likes(risultato, dimensione, n, names);
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