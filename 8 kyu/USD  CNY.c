// -----------------------------------------------------------
// Create a function that converts US dollars (USD) to Chinese Yuan (CNY) . The input is the amount of USD as an 
// integer, and the output should be a string that states the amount of Yuan followed by 'Chinese Yuan'
// 
// Examples (Input -> Output)
// 15  -> '101.25 Chinese Yuan'
// 465 -> '3138.75 Chinese Yuan'
// 
// The conversion rate you should use is 6.75 CNY for every 1 USD. All numbers should be represented as a string 
// with 2 decimal places. (e.g. "21.00" NOT "21.0" or "21")
// -----------------------------------------------------------

#include <stdio.h>

char *USD_to_CNY (long dollari, char *yuans){
  const long double tasso = 6.75;
  long double importo = (long double)dollari * tasso;
	sprintf(yuans, "%.2Lf Chinese Yuan", importo); // write to yuans
	return yuans; // return it
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
// Copyright (C) 2025 Vladimir Rukavishnikov
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