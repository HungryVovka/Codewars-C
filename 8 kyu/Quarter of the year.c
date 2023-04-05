// -----------------------------------------------------------
// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.
// 
// For example: month 2 (February), is part of the first quarter; month 6 (June), is part of the second quarter; and month 11 (November), is part of the 
// fourth quarter.
// 
// Constraint:
// 
// 1 <= month <= 12
// -----------------------------------------------------------

int quarter_of(int month)
{
    double q[] = {1, 2, 3, 4};
    if (month >= 1 && month <= 3)
    {
        return q[0];
    }
    else if (month >= 4 && month <= 6)
    {
        return q[1];
    }
    else if (month >= 7 && month <= 9)
    {
        return q[2];
    }
    else if (month >= 10 && month <= 12)
    {
        return q[3];
    }
    return month;
}

// or

int quarter_of(int month)
{
    return (month + 2) / 3;
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