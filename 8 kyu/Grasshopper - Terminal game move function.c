// -----------------------------------------------------------
// Terminal game move function
// In this game, the hero moves from left to right. The player rolls the die and moves the number of spaces indicated by 
// the die two times.
// 
// Create a function for the terminal game that takes the current position of the hero and the roll (1-6) and return the 
// new position.
// 
// Example:
// move(3, 6) should equal 15
// -----------------------------------------------------------

unsigned char move(unsigned char pos, unsigned char roll){
    return pos + roll * 2;
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