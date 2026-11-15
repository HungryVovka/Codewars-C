// -----------------------------------------------------------
// We have a broken message machine that introduces noise to our incoming messages. 
// We know that our messages can't be written using %$&/#·@|º\ª. Unfortunately our 
// machine introduces noise, which means that our message arrives with characters 
// like: %$&/#·@|º\ª within our original message.
// 
// Your mission is to write a function which removes this noise from the message.
// 
// Notice that noise can only be %$&/#·@|º\ª characters, other characters are 
// not considered to be noise
// 
// Examples (input --> output)
// "h%e&·%$·llo w&%or&$l·$%d" --> "hello world"
// "" --> ""
// "%$" --> ""
// "abcd" --> "abcd"
// "º¤£ª" --> "¤£"
// -----------------------------------------------------------

#include <stddef.h>     // size_t, NULL
#include <string.h>     // strchr

// The input is nul-terminated, UTF-8 encoded
// It must remain so after remove_noise() returns
// Mutate it in-place

static size_t noise_len(const char *s){
  unsigned char first = (unsigned char)s[0];
  unsigned char second;
  
  if (strchr("%$&/#@|\\", first) != NULL) return 1;
  
  if (first == 0xC2){
    second = (unsigned char)s[1];
    if (second == 0xB7 || second == 0xBA || second == 0xAA) return 2;
  }
  return 0;
}

void remove_noise(char *input){
  size_t read_idx = 0;
  size_t write_idx = 0;
  size_t skip;
  
  if (input == NULL) return;
  
  while (input[read_idx] != '\0'){
    skip = noise_len(&input[read_idx]);
    if (skip > 0){
      read_idx += skip;
    } else {
      input[write_idx++] = input[read_idx++];
    }
  }
  input[write_idx] = '\0';
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