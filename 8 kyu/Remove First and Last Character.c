// -----------------------------------------------------------
// It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the 
// original string. You don't have to worry with strings with less than two characters.
// -----------------------------------------------------------

char* remove_char(char* dst, const char* src){
  /* your solution should return the string even if you use dst */
  char *dst_pointer = dst;
  src += 1;
  while (*(src + 1) != '\0'){
    *dst_pointer++ = *src++;
  }
  *dst_pointer = '\0';
  return dst;
}

// or

char* remove_char(char* dst, const char* src){
  /* your solution should return the string even if you use dst */
  char *dst_pointer = dst;
  src += 1;
  while (*src){
    *dst++ = *src++;
  }
  dst[-1] = 0;
  return dst_pointer;
}

// or

# include <string.h>

char* remove_char(char* dst, const char* src){
  /* your solution should return the string even if you use dst */
  return strcpy(dst, src + 1)[strlen(src) - 2] = 0, dst;
}