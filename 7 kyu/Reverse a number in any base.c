// -----------------------------------------------------------
// Task
// Write a function which when given a non-negative integer n and an arbitrary base b, returns the number reversed in that base.
// 
// Examples
// n=12 and b=2 return 3, because 12 in binary is "1100", which reverses to "0011", equivalent to 3 in decimal.
// n=10 and b=5 return 2, because 10 in base-5 is "20", which reverses to "02", equivalent to 2 in decimal.
// n=45 and b=30 return 451, because 45 in base-30 is "1F", which reverses to "F1", equivalent to 451 in decimal.
// n=3 and b=4 return 3, because 3 in base-4 is "3", which reverses to "3", equivalent to 3 in decimal.
// n=5 and b=1 return 5, because 5 in unary is "|||||", which reverses to "|||||", equivalent to 5 in decimal.
// 
// Note
// The function should return an integer.
// The base b will be greater or equal to 1.
// Edge case: Base-1 is also used in this kata to represent the unary numeral system. Think of it as a system of tally marks. For example:
// 3 (decimal) -> ||| (unary)
// 5 (decimal) -> ||||| (unary)
// -----------------------------------------------------------

unsigned int reverse_number(unsigned int n, unsigned int b)
{
	if (b == 1)
	{
		return n;
	}
	unsigned int revInt = 0;
	while (n > 0)
	{
		revInt = (revInt * b) + (n % b);
		n /= b;
	}
	return revInt;
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