// -----------------------------------------------------------
// John and his wife Ann have decided to go to Codewars. On the first day Ann 
// will do one kata and John - he wants to know how it is working - 0 kata.
// 
// Let us call a(n) - and j(n) - the number of katas done by Ann - and John - 
// at day n. We have a(0) = 1 and in the same manner j(0) = 0.
// 
// They have chosen the following rules:
// 
// On day n the number of katas done by Ann should be n minus the number of 
// katas done by John at day t, t being equal to the number of katas done by 
// Ann herself at day n - 1
// 
// On day n the number of katas done by John should be n minus the number of 
// katas done by Ann at day t, t being equal to the number of katas done by 
// John himself at day n - 1
// 
// Whoops! I think they need to lay out a little clearer exactly what there're 
// getting themselves into!
// 
// Could you write:
// functions ann(n) and john(n) that return the list of the number of katas 
// Ann/John does on the first n days;
// functions sum_ann(n) and sum_john(n) that return the total number of katas 
// done by Ann/John on the first n days
// 
// Examples:
// john(11)  -->  [0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 6]
// ann(6)    -->  [1, 1, 2, 2, 3, 3]
// 
// sum_john(75)  -->  1720
// sum_ann(150)  -->  6930
// 
// Note:
// Keep an eye on performance.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free

// for functions 'john' and 'ann', return a heap-allocated array of 'n' elements

static void build_sequences(long long n, long long *a, long long *j){
  long long i;

  a[0] = 1;
  j[0] = 0;

  for (i = 1; i < n; i++){
    j[i] = i - a[j[i - 1]];
    a[i] = i - j[a[i - 1]];
  }
}

long long *john(long long n){
  if (n <= 0) return NULL;

  long long *a = malloc(n * sizeof(long long));
  long long *j = malloc(n * sizeof(long long));

  if (!a || !j) return NULL;

  build_sequences(n, a, j);

  free(a);
  return j;
}

long long *ann(long long n){
  if (n <= 0) return NULL;

  long long *a = malloc(n * sizeof(long long));
  long long *j = malloc(n * sizeof(long long));

  if (!a || !j) return NULL;

  build_sequences(n, a, j);

  free(j);
  return a;
}

long long sumJohn(long long n){
  if (n <= 0) return 0;

  long long *a = malloc(n * sizeof(long long));
  long long *j = malloc(n * sizeof(long long));

  if (!a || !j) return 0;

  long long sum = 0;
  long long i;

  build_sequences(n, a, j);

  for (i = 0; i < n; i++) sum += j[i];

  free(a);
  free(j);

  return sum;
}

long long sumAnn(long long n){
  if (n <= 0) return 0;

  long long *a = malloc(n * sizeof(long long));
  long long *j = malloc(n * sizeof(long long));

  if (!a || !j) return 0;

  long long sum = 0;
  long long i;

  build_sequences(n, a, j);

  for (i = 0; i < n; i++) sum += a[i];

  free(a);
  free(j);

  return sum;
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