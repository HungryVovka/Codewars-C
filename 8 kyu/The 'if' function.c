// -----------------------------------------------------------
// Create a function called _if which takes 3 arguments: a value bool and 2 functions (which do not take any parameters): func1 and func2
// 
// When bool is truthy, func1 should be called, otherwise call the func2.
// 
// Example:
// void the_true() { printf("true"); }
// void the_false() { printf("false"); }
// _if(true, the_true, the_false);
// /* Logs "true" to the console */
// -----------------------------------------------------------

#include <stdbool.h>

void _if(bool value, void (*func1)(), void (*func2)())
{
    if (value == true)
    {
        return func1();
    }
    else
    {
        return func2();
    }
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