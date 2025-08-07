// -----------------------------------------------------------
// After a hard quarter in the office you decide to get some rest on a vacation. So you will book a flight for you and your 
// girlfriend and try to leave all the mess behind you.
// 
// You will need a rental car in order for you to get around in your vacation. The manager of the car rental makes you some 
// good offers.
// 
// Every day you rent the car costs $40. If you rent the car for 7 or more days, you get $50 off your total. Alternatively, if you 
// rent the car for 3 or more days, you get $20 off your total.
// 
// Write a code that gives out the total amount for different days(d).
// -----------------------------------------------------------

/* d - the days to rent */
unsigned rental_car_cost(unsigned d){
  if (d < 3){
    return 40 * d;
  } else if (d >= 3 && d < 7){
    return 40 * d - 20;
  } else if (d >= 7){
    return 40 * d - 50;
  }
  return 0;
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