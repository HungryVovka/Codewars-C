// -----------------------------------------------------------
// We need a function that can transform a number (integer) into a string.
// 
// What ways of achieving this do you know?
// 
// In C, return a dynamically allocated string that will be freed by the test suite.
// 
// Examples (input --> output):
// 123  --> "123"
// 999  --> "999"
// -100 --> "-100"
// -----------------------------------------------------------

#include <stdlib.h>

char *number_to_string(int number)
{
    char *answer = malloc(50);
    sprintf(answer, "%d", number);
    return answer;
}

// or

#include <stdlib.h>

char *number_to_string(int number)
{
    char *answer;
    asprintf(&answer, "%d", number);
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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