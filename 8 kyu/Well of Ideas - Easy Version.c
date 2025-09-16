// -----------------------------------------------------------
// For every good kata idea there seem to be quite a few bad ones!
// 
// In this kata you need to check the provided array (x) for good ideas 'good' and bad ideas 'bad'. If there are one or two good 
// ideas, return 'Publish!', if there are more than 2 return 'I smell a series!'. If there are no good ideas, as is often the case, return 
// 'Fail!'.
// 
// For C: do not dynamically allocate memory, instead return a string literal
// -----------------------------------------------------------

#include <stddef.h> // size_t
#include <string.h> // strcmp

const char *well(size_t n, const char *idee[n]){
  size_t i;
  int contatore = 0;
  
  for (i = 0; i < n; i++){
    if (strcmp(idee[i], "good") == 0) contatore++;
  }
  
  if (contatore > 2){
    return "I smell a series!";
  } else if (contatore >= 1){
    return "Publish!";
  } else {
    return "Fail!";
  }
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