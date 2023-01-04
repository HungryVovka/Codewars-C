// -----------------------------------------------------------
// Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
// 
// Examples (input -> output)
// 6, "I"     -> "IIIIII"
// 5, "Hello" -> "HelloHelloHelloHelloHello"
// -----------------------------------------------------------

#include <string.h>

char *repeat_str(size_t count, const char *src){
  char *answer = (char *) calloc(count * strlen(src), 1);
  for (int i = 0; i < count; i++){
    strncat(answer, src, strlen(src));
  }
  return answer;
}