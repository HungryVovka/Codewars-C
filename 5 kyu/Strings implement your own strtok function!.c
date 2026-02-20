// -----------------------------------------------------------
// Challenge: Most of us had to come across the "strtok" function of the C standard 
// library at one point or another: http://www.cplusplus.com/reference/cstring/strtok/
// 
// For this kata, we have to implement it ourselves!
// 
// The purpose of this function is, given a (writeable) source string and a string of 
// delimiters, to "tokenize" the source string. The best analogy could be the "strip" 
// function in other high-level languages.
// 
// Please, pay attention to the peculiarity of use of this function. The first 
// call to "strtok" "tokenizes" the function, i.e. splits it into tokens by placing 
// the null-terminating character where any of the delimiters is found. At the 
// end of the call, the first token of the string is returned. Each subsequent call 
// to "strtok" should have NULL in place where the source string was, in order 
// for the function to return a subsequent token. Once we run out of tokens, 
// "strtok" returns a NULL. (For a more visual example, please consult 
// the Example section below)
// 
// Before submitting the solution, please make sure that your function follows 
// the exact same behavior as the original "strtok" function from the C standard library.
// 
// Example:
// 
// char buffer[] = "I did it MY way!";
// const char *DELIMITERS = " ";
// char *token = my_strtok(buffer, DELIMITERS);
// while (token) {
//   (void)printf("%s, "token);
//   token = my_strtok(NULL, DELIMITERS);
// }
// /*
//  outputs: I, did, it, MY, way!
// */
// 
// Addendum: In order to successfully complete this kata, please make sure you are 
// familiar with static variables in C. The basic idea is as follows:
// 
// int foo(void) {
//   static int x;
//   return x++;
// }
// 
// int main(void) {
//   for (int i = 0; i < 5; ++i) {
//     int value = foo();
//     (void)printf("%d\n", value);
//   }
//   // outputs: 0 1 2 3 4
//   
//   return 0;
// }
// 
// PLEASE NOTICE! The number of tests for one string will be equal to n + 1, 
// where n is the number of tokens created by strtok and + 1 is the extra check 
// to test whether both functions have indeed completed their tokenization at the 
// same point in the source string. Thus char src[] = "hello there universe" with 
// the delimiters set to const char *delims = " "; will produce 4 tests.
// -----------------------------------------------------------

#include <stddef.h>   // NULL
#include <string.h>   // strchr

char* my_strtok(char *src, const char *delims){
  static char *saved_position = NULL;
  char *token_start;
  char *current;
  if (src != NULL) saved_position = src;
  if (saved_position == NULL) return NULL;
  while (*saved_position != '\0' && 
        strchr(delims, *saved_position) != NULL){
    saved_position++;
  }
  if (*saved_position == '\0'){
    saved_position = NULL;
    return NULL;
  }
  token_start = saved_position;
  current = saved_position;
  while (*current != '\0' && strchr(delims, *current) == NULL){
    current++;
  }
  if (*current != '\0'){
    *current = '\0';
    saved_position = current + 1;
  } else {
    saved_position = NULL;
  }
  return token_start;
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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