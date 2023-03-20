// -----------------------------------------------------------
// Task:
// Your task is to write a function which returns the sum of following series upto nth term(parameter).
// 
// Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
// 
// Rules:
// You need to round the answer to 2 decimal places and return it as String.
// 
// If the given value is 0 then it should return 0.00
// 
// You will only be given Natural Numbers as arguments.
// 
// Examples:(Input --> Output)
// 1 --> 1 --> "1.00"
// 2 --> 1 + 1/4 --> "1.25"
// 5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"
// -----------------------------------------------------------

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

char *series_sum(const size_t n)
{
// return a nul-terminated, heap-allocated string:
    double a = 0;
    for (size_t i = 0; i < n; i++)
    {
        a += 1.0 / (i * 3 + 1);
    }
    char *answer = "";
    asprintf(&answer, "%.02f", a);
    return answer;
}