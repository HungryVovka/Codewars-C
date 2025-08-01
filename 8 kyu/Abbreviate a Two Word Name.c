// -----------------------------------------------------------
// Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
// 
// The output should be two capital letters with a dot separating them.
// 
// It should look like this:
// 
// Sam Harris => S.H
// 
// patrick feeney => P.F
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



char *get_initials (const char *full_name, char initials[4]){
  size_t i = 0;
  while (full_name[i] == ' ') i++;
  initials[0] = (char)toupper((unsigned char)full_name[i]);
  while (full_name[i] != ' ' && full_name[i] != '\0') i++;
  while (full_name[i] == ' ') i++;
  initials[1] = '.';
  initials[2] = (char)toupper((unsigned char)full_name[i]);
  initials[3] = '\0';
  return initials;
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