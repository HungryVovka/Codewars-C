// -----------------------------------------------------------
// The male gametes or sperm cells in humans and other mammals are heterogametic and contain one of two 
// types of sex chromosomes. They are either X or Y. The female gametes or eggs however, contain only the X sex 
// chromosome and are homogametic.
// 
// The sperm cell determines the sex of an individual in this case. If a sperm cell containing an X chromosome 
// fertilizes an egg, the resulting zygote will be XX or female. If the sperm cell contains a Y chromosome, then 
// the resulting zygote will be XY or male.
// 
// Determine if the sex of the offspring will be male or female based on the X or Y chromosome present in the 
// male's sperm.
// 
// If the sperm contains the X chromosome, return "Congratulations! You're going to have a daughter."; If the 
// sperm contains the Y chromosome, return "Congratulations! You're going to have a son.";
// -----------------------------------------------------------

const char *chromosomeCheck(const char chromosomes[2 + 1]){
// return a string literal
	return chromosomes[0] != chromosomes[1] ?
    "Congratulations! You're going to have a son." :
    "Congratulations! You're going to have a daughter.";
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