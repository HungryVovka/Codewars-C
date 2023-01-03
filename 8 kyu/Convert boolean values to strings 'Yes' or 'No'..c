// -----------------------------------------------------------
// Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.
// -----------------------------------------------------------

#include <stdbool.h>

const char *bool_to_word (bool value)
{
// you can return a static/global string or a string literal
  return value == false ? "No" : "Yes";
}