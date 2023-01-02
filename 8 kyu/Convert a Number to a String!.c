// -----------------------------------------------------------
// We need a function that can transform a number (integer) into a string.
// 
// What ways of achieving this do you know?
// 
// In C, return a dynamically allocated string that will be freed by the test suite.
// 
// Examples (input --> output):
// 123  --> "123"
// 999  --> "999"
// -100 --> "-100"
// -----------------------------------------------------------

#include <stdlib.h>

char *number_to_string(int number){
  char *answer = malloc(50);
  sprintf(answer, "%d", number);
  return answer;
}

// or

#include <stdlib.h>

char *number_to_string(int number){
  char *answer;
  asprintf(&answer, "%d", number);
  return answer;
}