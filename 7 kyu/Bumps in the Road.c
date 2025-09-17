// -----------------------------------------------------------
// Your car is old, it breaks easily. The shock absorbers are gone and you think it can handle about 15 more 
// bumps before it dies totally.
// 
// Unfortunately for you, your drive is very bumpy! Given a string showing either flat road (_) or bumps (n). If 
// you are able to reach home safely by encountering 15 bumps or less, return Woohoo!, otherwise return 
// Car Dead
// -----------------------------------------------------------

#include <stddef.h> // size_t

enum outcome { WOOHOO, CAR_DEAD };

enum outcome car_state (const char *road){
  int conteggio; // bumps
  size_t i;
  
  conteggio = 0;
  
  for (i = 0; road[i] != '\0'; i++){
    if (road[i] == 'n'){
      conteggio++;
      if (conteggio > 15) return CAR_DEAD;
    }
  }
  return WOOHOO;
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