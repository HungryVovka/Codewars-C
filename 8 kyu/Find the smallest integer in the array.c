// -----------------------------------------------------------
// Given an array of integers your solution should find the smallest integer.
// 
// For example:
// 
// Given [34, 15, 88, 2] your solution will return 2
// Given [34, -345, -1, 100] your solution will return -345
// You can assume, for the purpose of this kata, that the supplied array will not be empty.
// -----------------------------------------------------------

#include <stddef.h>

int find_smallest_int(const int array[/* len */], size_t len)
{
    int answer = array[0];
    for (size_t i = 1; i < len; i++)
    {
        if (array[i] < answer)
        {
            answer = array[i];
        }
    }
    return answer;
}