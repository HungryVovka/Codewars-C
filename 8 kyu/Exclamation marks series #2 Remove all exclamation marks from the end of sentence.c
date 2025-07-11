// -----------------------------------------------------------
// Description:
// Remove all exclamation marks from the end of sentence.
// 
// Examples
// "Hi!"     ---> "Hi"
// "Hi!!!"   ---> "Hi"
// "!Hi"     ---> "!Hi"
// "!Hi!"    ---> "!Hi"
// "Hi! Hi!" ---> "Hi! Hi"
// "Hi"      ---> "Hi"
// -----------------------------------------------------------

#include <string.h>

char *remove_marks (const char *str_in, char *str_out){
// str_out is as large as str_in
  size_t len = strlen(str_in);
  strcpy(str_out, str_in);
	while (len > 0 && str_out[len - 1] == '!') str_out[--len] = '\0';
	return str_out; // return it
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