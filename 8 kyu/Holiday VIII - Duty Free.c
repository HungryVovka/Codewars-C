// -----------------------------------------------------------
// The purpose of this kata is to work out just how many bottles of duty free whiskey you would have to buy such that the savings 
// over the normal high street price would effectively cover the cost of your holiday.
// 
// You will be given the high street price (normPrice, in £ (Pounds)), the duty free discount (discount, in percent) and the cost of the 
// holiday (in £).
// 
// For example, if a bottle costs £10 normally and the duty free discount is 10%, you would save £1 per bottle. If your holiday will 
// cost £500, you would have to purchase 500 bottles to save £500, so the answer you return should be 500.
// 
// Another example: if a bottle costs £12 normally and the duty free discount is 50%, you would save £6 per bottle. If your holiday 
// will cost £1000, you would have to purchase 166.66 bottles to save £1000, so your answer should be 166 bottles.
// 
// All inputs will be integers. Please return an integer. Round down.
// -----------------------------------------------------------

int duty_free(int price, int discount, int holiday_cost){
  return (holiday_cost * 100) / (price * discount);
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