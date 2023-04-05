// -----------------------------------------------------------
// You ask a small girl,"How old are you?" She always says, "x years old", where x is a random number between 0 and 9.
// 
// Write a program that returns the girl's age (0-9) as an integer.
// 
// Assume the test input string is always a valid string. For example, the test input may be "1 year old" or "5 years old". The first character in the string is 
// always a number.
// -----------------------------------------------------------

int getAge(const char *age)
{
    return (int)(age[0] - '0');
}

// or

#include <stdlib.h>

int getAge(const char *age)
{
    return atoi(age);
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