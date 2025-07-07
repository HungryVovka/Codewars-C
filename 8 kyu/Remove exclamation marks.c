// -----------------------------------------------------------
// Description:
// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
// -----------------------------------------------------------

// Write resulting string into buffer pointed by `str_out`
// It has enough room for `strlen(str_in) + 1` bytes
void remove_exclamation_marks(const char *str_in, char *str_out) {
  while (*str_in != '\0'){
    if (*str_in != '!'){
      *str_out = *str_in;
      str_out++;
    }
    str_in++;
  }  
  *str_out = '\0';
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