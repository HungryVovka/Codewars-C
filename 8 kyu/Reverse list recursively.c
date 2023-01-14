// -----------------------------------------------------------
// Write a function revR which reverses a given list. Try not to cheat and provide a recursive solution.
// -----------------------------------------------------------

#include <stdio.h>

int* revR (int* arr, int n){
  if (n <= 1){
    return arr;
  }
  int rev = arr[0];
  arr[0] = arr[n - 1];
  arr[n - 1] = rev;
  revR(arr + 1, n - 2);
  return arr;
}