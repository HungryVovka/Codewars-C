// -----------------------------------------------------------
// Your goal is to return multiplication table for number that is always an integer from 1 to 10.
// 
// For example, a multiplication table (string) for number == 5 looks like below:
// 
// 1 * 5 = 5
// 2 * 5 = 10
// 3 * 5 = 15
// 4 * 5 = 20
// 5 * 5 = 25
// 6 * 5 = 30
// 7 * 5 = 35
// 8 * 5 = 40
// 9 * 5 = 45
// 10 * 5 = 50
// 
// P. S. You can use \n in string to jump to the next line.
// 
// Note: newlines should be added between rows, but there should be no trailing newline at the end. If 
// you're unsure about the format, look at the sample tests.
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *multi_table(int num){
  size_t max_len = 11 * 20;
  char *tabella = malloc(max_len);
  if (!tabella) return NULL;
  
  size_t posizione = 0;
  int i;
  for (i = 1; i <= 10; i++){
    int scritto = sprintf(tabella + posizione, "%d * %d = %d\n", 
                          i, num, i * num);
    posizione += scritto;
  }
  
  if (posizione > 0 && tabella[posizione - 1] == '\n'){
    tabella[posizione - 1] = '\0';
  } else {
    tabella[posizione] = '\0';
  }
  return tabella;
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