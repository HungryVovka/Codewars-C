// -----------------------------------------------------------
// Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.
// 
// invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
// invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
// invert([]) == []
// 
// Notes:
// All values are greater than INT_MIN
// The input should be modified, not returned.
// -----------------------------------------------------------

#include <stddef.h>

void invert(int *values, size_t values_size)
{
    for (int i = 0; i < values_size; i++)
    {
        values[i] *= - 1;
    }
}