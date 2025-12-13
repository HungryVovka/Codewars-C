// -----------------------------------------------------------
// Make a program that filters a list of strings and returns a list with only your
// friends name in it.
// 
// If a name has exactly 4 letters in it, you can be sure that it has to be a friend 
// of yours! Otherwise, you can be sure he's not...
// 
// Input = ["Ryan", "Kieran", "Jason", "Yous"]
// Output = ["Ryan", "Yous"]
// 
// Input = ["Peter", "Stephen", "Joe"]
// Output = []
// 
// Input strings will only contain letters.
// Note: keep the original order of the names in the output.
// -----------------------------------------------------------


#include <string.h>   // strlen

void filter_friends (const char *names[]){
  // names[] is NULL-terminated, mutate it
  // You must re-use the pointers in 'names', do not allocate memory
  // Do not forget to NULL-terminate 'names'
  
  size_t read_index = 0;
  size_t write_index = 0;
  while (names[read_index] != NULL){
    if (strlen(names[read_index]) == 4){
      names[write_index] = names[read_index];
      write_index++;
    }
    read_index++;
  }
  names[write_index] = NULL;
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