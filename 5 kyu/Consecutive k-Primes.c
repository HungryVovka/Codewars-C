// -----------------------------------------------------------
// A natural number is called k-prime if it has exactly k prime factors, counted with multiplicity. A natural number is thus prime if and only if it is 
// 1-prime.
// 
// Examples:
// k = 2 -> 4, 6, 9, 10, 14, 15, 21, 22, …
// k = 3 -> 8, 12, 18, 20, 27, 28, 30, …
// k = 5 -> 32, 48, 72, 80, 108, 112, …
// 
// Task:
// Given an integer k and a list arr of positive integers the function consec_kprimes (or its variants in other languages) returns how many 
// times in the sequence arr numbers come up twice in a row with exactly k prime factors?
// 
// Examples:
// arr = [10005, 10030, 10026, 10008, 10016, 10028, 10004]
// consec_kprimes(4, arr) => 3 because 10005 and 10030 are consecutive 4-primes, 10030 and 10026 too as well as 10028 and 10004 but 10008 and 10016 are 6-primes.
// 
// consec_kprimes(4, [10175, 10185, 10180, 10197]) => 3 because 10175-10185 and 10185- 10180 and 10180-10197 are all consecutive 4-primes.
// 
// Note:
// It could be interesting to begin with: https://www.codewars.com/kata/k-primes
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// In the preloaded section are some functions that can help.
// They can be used as a small library.
// There is no file to include, only the templates below.

struct node {
    int data;
    struct node *next;
};
struct list {
    size_t sz;
    struct node *head;
};

struct list* createList();

// push data at the head of the list
void insertFirst(struct list* l, int data);

struct list* reverse(struct list* l);

void listFree(struct list* l);

// function to write
static int count_prime_factors(int64_t number){
  int count = 0;
  int64_t divisor = 2;
  while (number > 1 && number >= divisor * divisor){
    while (number % divisor == 0){
      count++;
      number /= divisor; 
    }
    divisor++;
  }
  if (number > 1) count++;
  return count;
}

int consecKprimes(int k, struct list* l){
  if (!l || l->sz < 2) return 0;
  int matches = 0;
  struct node *current = l->head;
  while (current && current->next){
    int a = count_prime_factors((int64_t)current->data);
    int b = count_prime_factors((int64_t)current->next->data);
    if (a == k && b == k) matches++;
    current = current->next;
  }
  return matches;
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