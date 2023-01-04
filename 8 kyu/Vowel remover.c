// -----------------------------------------------------------
// Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u ) in a given string.
// 
// Examples
// "hello"     -->  "hll"
// "codewars"  -->  "cdwrs"
// "goodbye"   -->  "gdby"
// "HELLO"     -->  "HELLO"
// 
// don't worry about uppercase vowels
// y is not considered a vowel for this kata
// -----------------------------------------------------------

#include <stdio.h>
#include <string.h>

char *shortcut (char *str_out, const char *str_in){
  int a = 0, b = 0;
  char c;
  int str_len = strlen(str_in);
  while (a <= str_len){
    c = str_in[a];
    if(!(c == 'a' ||
         c == 'e' ||
         c == 'i' ||
         c == 'o' ||
         c == 'u')){
      str_out[b] = c;
      b++;
    }
    a++;
  }
  return str_out;
}
