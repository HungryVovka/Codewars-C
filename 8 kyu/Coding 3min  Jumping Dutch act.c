// -----------------------------------------------------------
// Coding 3min : Jumping Dutch act
// 
// This is the simple version of Shortest Code series. If you need some challenges, please try the challenge version
// 
// Task:
// Mr. despair wants to jump off Dutch act, So he came to the top of a building.
// 
// Scientific research shows that a man jumped from the top of the roof, when the floor more than 6, the person will often die in an 
// instant; When the floor is less than or equal to 6, the person will not immediately die, he would scream. (without proof)
// 
// Input: floor, The height of the building (floor)
// 
// Output: a string, The voice of despair(When jumping Dutch act)
// 
// Example:
// sc(2) should return "Aa~ Pa! Aa!"
// 
// It means:
// 
// Mr. despair jumped from the 2 floor, the voice is "Aa~"
// He fell on the ground, the voice is "Pa!"
// He did not die immediately, and the final voice was "Aa!"
// 
// sc(6) should return "Aa~ Aa~ Aa~ Aa~ Aa~ Pa! Aa!"
// 
// sc(7) should return "Aa~ Aa~ Aa~ Aa~ Aa~ Aa~ Pa!"
// 
// sc(10) should return "Aa~ Aa~ Aa~ Aa~ Aa~ Aa~ Aa~ Aa~ Aa~ Pa!"
// 
// if floor<=1, Mr. despair is safe, return ""
// 
// The final advice
// Just play in this kata, Don't experiment in real life ;-)
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <string.h> // strlen, strcpy, strcat

char *sc(int n){
    // return a heap-allocated string
  if (n <= 1){
    char *vuoto = malloc(1); // '/0'
    if (vuoto) vuoto[0] = '\0';
    return vuoto;
  }
  
  const char *aa = "Aa~ ";
  const char *pa = "Pa!";
  const char *aa_fine = " Aa!";
  
  size_t len = (n - 1) * strlen(aa) + strlen(pa);
  if (n <= 6) len += strlen(aa_fine);
  
  char *risultato = malloc(len + 1);
  if (!risultato) return NULL;
  
  risultato[0] = '\0';
  int i = 0;
  for (; i < n - 1; i++) strcat(risultato, aa);
  
  strcat(risultato, pa);
  
  if (n <= 6) strcat(risultato, aa_fine);
  
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