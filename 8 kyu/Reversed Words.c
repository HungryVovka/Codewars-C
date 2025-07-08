// -----------------------------------------------------------
// Description:
// Complete the solution so that it reverses all of the words within the string passed in.
// 
// Words are separated by exactly one space and there are no leading or trailing spaces.
// 
// Example(Input --> Output):
// 
// "The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"
// -----------------------------------------------------------

#include <stddef.h>
#include <string.h>
#include <ctype.h>

char *reverse_words (const char *words, size_t length, char *reversed){
/*
'words' is nul-terminated, but its length is given for convenience.
Write to 'reversed' and return it.
*/
  int read_pos = (int)length - 1;
  int write_pos = 0;
  while (read_pos >= 0){
    while (read_pos >= 0 && words[read_pos] == ' ') read_pos--;
    if (read_pos < 0) break;
    int word_end = read_pos;
    while (word_end >= 0 && words[word_end] != ' ') word_end--;
    for (int i = word_end + 1; i <= read_pos; i++){
      reversed[write_pos++] = words[i];
    }
    reversed[write_pos++] = ' ';
    read_pos = word_end - 1;
  }
  if (write_pos > 0 && reversed[write_pos - 1] == ' ') write_pos--;
	reversed[write_pos] = '\0';
	return reversed;
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