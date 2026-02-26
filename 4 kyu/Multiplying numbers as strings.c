// -----------------------------------------------------------
// This is the first part. You can solve the second part here when you 
// are done with this. Multiply two numbers! Simple!
// 
// The arguments are passed as strings.
// The numbers may be way very large
// Answer should be returned as a string
// The returned "number" should not start with zeros e.g. 0123 is invalid
// 
// Note: 100 randomly generated tests!
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, calloc, free
#include <string.h>   // strlen

static int skip_zeroes(const char *s){
  int i;
  i = 0;
  while (s[i] == '0' && s[i + 1] != '\0') i++;
  return i;
}

static int *multiply_digits(const char *a, const char *b,
                            int start_a, int start_b,
                            int len_a, int len_b){
  int i, j;
  int carry;
  int digit_a, digit_b;
  int pos1, pos2;
  int *temp;
  
  temp = calloc(len_a + len_b, sizeof(int));
  if (!temp) return NULL;
  
  for (i = len_a - 1; i >= 0; i--){
    digit_a = a[start_a + i] - '0';
    carry = 0;
    for (j = len_b - 1; j >= 0; j--){
      digit_b = b[start_b + j] - '0';
      pos1 = i + j;
      pos2 = i + j + 1;
      temp[pos2] += digit_a * digit_b + carry;
      carry = temp[pos2] / 10;
      temp[pos2] %= 10;
    }
    temp[pos1] += carry;
  }
  return temp;
}

static char *digits_to_string(int *temp, int size){
  int start;
  int i;
  char *answer;
  start = 0;
  while (start < size - 1 && temp[start] == 0) start++;
  answer = malloc(size - start + 1);
  if (!answer) return NULL;
  for (i = start; i < size; i++){
    answer[i - start] = temp[i] + '0';
  }
  answer[size - start] = '\0';
  return answer;
}

char *multiply(const char *a, const char *b){
  int len_a, len_b;
  int start_a, start_b;
  int *temp;
  char *answer;
  
  len_a = strlen(a);
  len_b = strlen(b);
  start_a = skip_zeroes(a);
  start_b = skip_zeroes(b);
  if ((a[start_a] == '0' && a[start_a + 1] == '\0') || 
      (b[start_b] == '0' && b[start_b + 1] == '\0')){
    answer = malloc(2);
    if (!answer) return NULL;
    answer[0] = '0';
    answer[1] = '\0';
    return answer;
  }
  len_a -= start_a;
  len_b -= start_b;
  temp = multiply_digits(a, b, start_a, start_b, len_a, len_b);
  if (!temp) return NULL;
  answer = digits_to_string(temp, len_a + len_b);
  free(temp);
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