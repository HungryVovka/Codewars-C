// -----------------------------------------------------------
// 100th Kata
// You are given a message (text) that you choose to read in a mirror (weirdo). 
// Return what you would see, complete with the mirror frame. Example:
// 
// 'Hello World'
// 
// would give:
// 
// ************
// *  olleH   *
// *  dlroW   *
// ************
// 
// Words in your solution should be left-aligned.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, calloc, free
#include <string.h>   // strlen, strcpy, memcpy

static size_t count_lines(const char *text){
  size_t count = 1;
  size_t i = 0;
  while (text[i] != '\0'){
    if (text[i] == ' ') count++;
    i++;
  }
  return count;
}

static void split_lines(char *buffer, char **lines, size_t line_count){
  size_t i = 0;
  size_t index = 0;
  lines[index] = buffer;
  
  while (buffer[i] != '\0'){
    if (buffer[i] == ' '){
      buffer[i] = '\0';
      index++;
      if (index < line_count) lines[index] = buffer + i + 1;
    }
    i++;
  }
}

static void reverse_copy(char *dst, const char *src, size_t len){
  size_t i;
  for (i = 0; i < len; i++){
    dst[i] = src[len - 1 - i];
  }
  dst[len] = '\0';
}

static char *build_mirror(char **lines, size_t line_count){
  size_t maxlen = 0;
  size_t i, j;
  size_t total_len;
  char *output;
  char *p;
  
  for (i = 0; i < line_count; i++){
    size_t len = strlen(lines[i]);
    if (len > maxlen) maxlen = len;
  }
  
  total_len = (maxlen + 5) * (line_count + 2);
  output = (char *)malloc(total_len);
  if (output == NULL) return NULL;
  
  p = output;
  for (j = 0; j < maxlen + 4; j++) *p++ = '*';
  *p++ = '\n';
  
  for (i = 0; i < line_count; i++){
    size_t len = strlen(lines[i]);
    char *rev = (char *)malloc(len + 1);
    reverse_copy(rev, lines[i], len);
    *p++ = '*';
    *p++ = ' ';
    memcpy(p, rev, len);
    p += len;
    for (j = len; j < maxlen; j++) *p++ = ' ';
    *p++ = ' ';
    *p++ = '*';
    *p++ = '\n';
    free(rev);
  }
  for (j = 0; j < maxlen + 4; j++) *p++ = '*';
  *p = '\0';
  return output;
}

char* mirror(const char* text){
    // return a heap-allocated string:
  size_t len;
  char *buffer;
  size_t line_count;
  char **lines;
  char *answer;
  
  if (text == NULL) return calloc(1, 1);
  
  len = strlen(text);
  buffer = (char *)malloc(len + 1);
  if (buffer == NULL) return NULL;
  strcpy(buffer, text);
  
  line_count = count_lines(text);
  lines = (char **)malloc(sizeof(char *) * line_count);
  if (lines == NULL){
    free(buffer);
    return NULL;
  }
  
  split_lines(buffer, lines, line_count);
  answer = build_mirror(lines, line_count);
  
  free(lines);
  free(buffer);
  
  if (answer == NULL) return calloc(1, 1);
  return answer;
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