// -----------------------------------------------------------
// For beginners!
// 
// You are given a float (single precision) which means, that 32 bit are used to hold a value.
// 
// Return the number an integer would hold with the same bit arrangement
// 
// 10.0 (float) == 01000001001000000000000000000000 (binary)
// convert_to_int(10.0) returns 1092616192
// 
// Use C's casting arithmetic to solve this simple problem
// 
// Visualization: https://www.h-schmidt.net/FloatConverter/IEEE754.html
// -----------------------------------------------------------

#include <stdio.h>
#include <string.h>

int convert_to_int(float f){
	int int_f;
	memcpy(&int_f, &f, sizeof(int));
	return int_f;
}

// or

int convert_to_int(float f){
	return *((int*)&f);
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