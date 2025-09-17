// -----------------------------------------------------------
// Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice 
// versa). Leave any incidence of c untouched.
// 
// Example:
// 
// 'acb' --> 'bca'
// 'aabacbaa' --> 'bbabcabb'
// -----------------------------------------------------------

char *switcheroo (char *string){
	// mutate string, return it
	int i;
  for (i = 0; string[i] != '\0'; i++){
    if (string[i] == 'a'){
      string[i] = 'b';
    } else if (string[i] == 'b'){
      string[i] = 'a';
    }
  }
  return string;
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