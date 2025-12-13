// -----------------------------------------------------------
// Given a string which is a word, return True if the word has adjacent double 
// double letters, like in 'balloon'.
// 
// For example,
// 
// 'balloon' -> True, 'lloo' are adjacent double double letters
// 
// 'baaloon' -> False, because even though there are two double letters, they 
// are not adjacent
// 
// 'baboonn' -> True, here 'oonn' are adjacent double double letters
// 
// 'matte'   -> False, because there is only one pair of double letters
// 
// 'aaaaaaah'  -> True, any substring 'aaaa' makes it a word with adjacent 
// double double letters
// 
// Note: all the words will be lowercase, without any symbols or spaces
// -----------------------------------------------------------

#include <stdbool.h>    // bool, true, false
#include <stddef.h>     // size_t
#include <string.h>     // strlen

bool adjacent_double_double_letters(const char *word){
  size_t word_length = strlen(word);
  size_t position;
  
  if (word_length < 4) return false;
  
  for (position = 0; position + 3 < word_length; position++){
    char first_a = word[position];
    char first_b = word[position + 1];
    char second_a = word[position + 2];
    char second_b = word[position + 3];
    if (first_a == first_b && second_a == second_b) return true;
  }
  return false;
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