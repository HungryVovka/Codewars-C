// -----------------------------------------------------------
// Define a method hello that returns "Hello, Name!" to a given name, or says Hello, World! if name is not 
// given (or passed as an empty String).
// 
// Assuming that name is a String and it checks for user typos to return a name with a first capital letter 
// (Xxxx).
// 
// Examples:
// 
// * With `name` = "john"  => return "Hello, John!"
// * With `name` = "aliCE" => return "Hello, Alice!"
// * With `name` not given 
//   or `name` = ""        => return "Hello, World!"
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// allocate memory for and then return a NULL-terminated C-string

char *hello(const char *name){
  const char *default_greeting = "Hello, World!";
  char *default_copy;
  
  if (name == NULL || *name == '\0'){
    default_copy = malloc(strlen(default_greeting) + 1);
    if (default_copy != NULL) strcpy(default_copy, default_greeting);
    return default_copy;
  }
  
  size_t name_length = strlen(name);
  char *formatted_name = malloc(name_length + 1);
  if (formatted_name == NULL) return NULL;
  
  formatted_name[0] = toupper(name[0]);
  size_t i;
  for (i = 1; i < name_length; i++){
    formatted_name[i] = tolower(name[i]);
  }
  formatted_name[name_length] = '\0';
  
  const char *prefix = "Hello, ", *suffix = "!";
  size_t total_length = strlen(prefix) + name_length + strlen(suffix);
  
  char *final_greeting = malloc(total_length + 1);
  if (final_greeting != NULL) sprintf(final_greeting, 
                                      "%s%s%s", prefix, formatted_name, suffix);
  free(formatted_name);
  return final_greeting;
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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