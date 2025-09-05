// -----------------------------------------------------------
// Write a function that returns a string in which firstname is swapped with last name.
// 
// Example(Input --> Output)
// 
// "john McClane" --> "McClane john"
// -----------------------------------------------------------

#include <stdio.h>
#include <string.h>

char *name_shuffler (char *shuffled, const char *name){
// write to shuffled and return it
// it has room for strlen(name) + 1 bytes
  const char *spazio = strchr(name, ' ');
  if (!spazio){
    strcpy(shuffled, name);
    return shuffled;
  }
  
  size_t len1 = spazio - name;
  size_t len2 = strlen(spazio + 1);
  
  strncpy(shuffled, spazio + 1, len2);
  shuffled[len2] = ' ';
  
  strncpy(shuffled + len2 + 1, name, len1);
  shuffled[len2 + 1 + len1] = '\0';
  
  return shuffled;
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