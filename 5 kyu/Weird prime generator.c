// -----------------------------------------------------------
// Consider the sequence a(1) = 7, a(n) = a(n-1) + gcd(n, a(n-1)) for n >= 2:
// 
// 7, 8, 9, 10, 15, 18, 19, 20, 21, 22, 33, 36, 37, 38, 39, 40, 41, 42, 43, 44, 
// 45, 46, 69, 72, 73....
// 
// Let us take the differences between successive elements of the sequence and 
// get a second sequence g: 1, 1, 1, 5, 3, 1, 1, 1, 1, 11, 3, 1, 1, 1, 1, 1, 1,
//  1, 1, 1, 1, 23, 3, 1....
// 
// For the sake of uniformity of the lengths of sequences we add a 1 at the head of g:
// 
// g: 1, 1, 1, 1, 5, 3, 1, 1, 1, 1, 11, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 23, 3, 1...
// 
// Removing the 1s gives a third sequence: p: 5, 3, 11, 3, 23, 3... where you can 
// see prime numbers.
// 
// Task:
// Write the following functions:
// 
// (not tested): an(n) with parameter n: returns the first n terms of 
// the series of a(n)
// (not tested): gn(n) with parameter n: returns the first n terms of 
// the series of g (not tested)
// (tested): countOnes(n) with parameter n: returns the number of 1s in 
// the series gn(n) (don't forget to add a 1 at the head)
// (not tested): pn(n) with parameter n: returns an array filled with 
// the first n distinct primes in the same order they are found in 
// the sequence gn(n) defined in (3). That is, pn(n) is p with only 
// the first instance of each prime kept.
// (tested): maxPn(n) with parameter n: returns the biggest prime number of 
// the n first terms of the sequence pn(n) defined in (4)
// (not tested but interesting result): anOver(n) with parameter n: 
// returns an array of n terms a(i) / i for every i such that gn(i) != 1
// (tested): anOverAverage(n) with parameter n: returns as an integer 
// the average of anOver(n) defined in (6) ```
// 
// Note:
// You can write directly functions 3:, 5: and 7:. There is no need to write 
// functions 1:, 2:, 4: 6: except out of pure curiosity.
// -----------------------------------------------------------

#include <stdio.h>

static long long gcd(long long a, long long b){
  while (b != 0){
    long long temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

long long countOnes(long long n){
  long long i;
  long long current_a = 7;
  long long count = 1;
  
  for (i = 2; i <= n; i++){
    long long g = gcd(i, current_a);
    if (g == 1) count++;
    current_a += g;
  }
  return count;
}

long long maxPn(long long n){
  long long i = 2;
  long long current_a = 7;
  long long max_prime = 0;
  long long count = 0;
  
  long long found[10000];
  long long found_count = 0;
  
  if (n == 0) return 0;
  
  while (count < n){
    long long g = gcd(i, current_a);
    
    if (g > 1){
      int already_seen = 0;
      long long j;
      
      for (j = 0; j < found_count; j++){
        if (found[j] == g){
          already_seen = 1;
          break;
        }
      }
      
      if (!already_seen){
        found[found_count] = g;
        found_count++;
        if (g > max_prime) max_prime = g;
        count++;
      }
    }
    current_a += g;
    i++;
  }
  return max_prime;
}

int anOverAverage(long long n){
  long long i;
  long long current_a = 7;
  long long sum = 0;
  long long count = 0;
  
  if (n < 2) return 3;
  
  for (i = 2; i <= n; i++){
    long long g = gcd(i, current_a);
    current_a += g;
    if (g != 1){
      sum += current_a / i;
      count++;
    }
  }
  if (count == 0) return 3;
  return (int)(sum / count);
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