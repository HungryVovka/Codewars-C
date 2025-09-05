// -----------------------------------------------------------
// Trolls are attacking your comment section!
// 
// A common way to deal with this situation is to remove all of the vowels from the trolls' comments, 
// neutralizing the threat.
// 
// Your task is to write a function that takes a string and return a new string with all vowels removed.
// 
// For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
// 
// Note: for this kata y isn't considered a vowel.
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str){
  size_t lunghezza = strlen(str);
  char *risultato = malloc(lunghezza + 1);
  if (!risultato) return NULL;
  
  size_t i_lettura = 0, i_scrittura = 0;
  
  while (i_lettura < lunghezza){
    char carattere = str[i_lettura];
    char minuscolo = tolower((unsigned char)carattere);
    if (minuscolo != 'a' && minuscolo != 'e' && 
        minuscolo != 'i' && minuscolo != 'o' && 
        minuscolo != 'u'){
      risultato[i_scrittura] = carattere;
      i_scrittura++;
    }
    i_lettura++;
  }
  risultato[i_scrittura] = '\0';
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