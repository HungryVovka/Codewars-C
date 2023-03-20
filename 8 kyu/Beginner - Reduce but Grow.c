// -----------------------------------------------------------
// Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
// 
// [1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
// -----------------------------------------------------------

#include <stddef.h>

int grow(size_t size, const int arr[size])
{
    int answer = 1;
    for (size_t i = 0; i < size; i++)
    {
        answer *= arr[i];
    }
    return answer;
}