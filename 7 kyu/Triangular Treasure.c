// -----------------------------------------------------------
// Triangular numbers are so called because of the equilateral triangular shape that they occupy when laid out as dots. i.e.
// 
// 1st (1)   2nd (3)    3rd (6)
// *          **        ***
//            *         **
//                      *
// 
// You need to return the nth triangular number. You should return 0 for out of range values:
// 
// For example: (Input --> Output)
// 
// 0 --> 0
// 2 --> 3
// 3 --> 6
// -10 --> 0
// -----------------------------------------------------------

int triangular(int x)
{
    return x > 0 ? ceil((x + 1) * x / 2) : 0;
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