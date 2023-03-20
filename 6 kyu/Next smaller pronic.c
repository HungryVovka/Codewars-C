// -----------------------------------------------------------
// The challenge is to efficiently find the largest pronic number less than the method's input.
// 
// The initial solution passes the sample tests, but fails for larger numbers used in the acceptance tests.
// 
// Your algorithm should be fast as the acceptance tests will run 100,000 randomly selected numbers.
// 
// Are you up to the challenge?
// -----------------------------------------------------------

#include <math.h>

unsigned long long next_smaller_pronic(unsigned long long n)
{
    unsigned long long sq_n = sqrt(n);
    long answer;
    if ((sq_n + 1) * sq_n >= n)
    {
        answer = (sq_n - 1) * sq_n;
    }
    else
    {
        answer = (sq_n + 1) * sq_n;
    }
    return answer;
}