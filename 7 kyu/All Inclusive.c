// -----------------------------------------------------------
// Description:
// Input:
// 
// a string strng
// an array of strings arr
// Output of function contain_all_rots(strng, arr) (or containAllRots or contain-all-rots):
// 
// a boolean true if all rotations of strng are included in arr
// false otherwise
// Examples:
// contain_all_rots(
//   "bsjq", ["bsjq", "qbsj", "sjqb", "twZNsslC", "jqbs"]) -> true
// 
// contain_all_rots(
//   "Ajylvpy", ["Ajylvpy", "ylvpyAj", "jylvpyA", "lvpyAjy", "pyAjylv", "vpyAjyl", "ipywee"]) -> false)
// 
// Note:
// Though not correct in a mathematical sense
// 
// we will consider that there are no rotations of strng == ""
// and for any array arr: contain_all_rots("", arr) --> true
// Ref: https://en.wikipedia.org/wiki/String_(computer_science)#Rotations
// -----------------------------------------------------------

#include <stdbool.h> // bool, true, false
#include <string.h>  // strlen, strcmp
#include <stdlib.h>  // malloc, free

bool containAllRots (const char *strng, 
                     const char *const arr[/* arr_len */], int arr_len){
	int lunghezza;      // della stringa
  int i, j, trovato;
  char *rotazione;
  
  lunghezza = strlen(strng);
  
  if (lunghezza == 0) return true;
  
  rotazione = malloc(lunghezza + 1);
  if (!rotazione) return false;
  
  for (i = 0; i < lunghezza; i++){
    // rotazione: strng[i:] + strng[:i]
    strcpy(rotazione, strng + i);
    strncat(rotazione, strng, i);
    rotazione[lunghezza] = '\0';
    
    trovato = 0;
    for (j = 0; j < arr_len; j++){
      if (strcmp(rotazione, arr[j]) == 0){
        trovato = 1;
        break;
      }
    }
    if (!trovato){
      free(rotazione);
      return false;
    }
  }
  free(rotazione);
  return true;
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