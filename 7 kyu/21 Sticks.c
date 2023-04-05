// -----------------------------------------------------------
// The game
// In this game, there are 21 sticks lying in a pile. Players take turns taking 1, 2, or 3 sticks. The last person to take a stick wins. For example:
// 
// 21 sticks in the pile
// 
// Bob takes 2  -->  19 sticks left
// Jim takes 3  -->  16 sticks
// Bob takes 3  -->  13 sticks
// Jim takes 1  -->  12 sticks
// Bob takes 2  -->  10 sticks
// Jim takes 2  -->   8 sticks
// Bob takes 3  -->   5 sticks
// Jim takes 3  -->   2 sticks
// Bob takes 2  -->  Bob wins!
// 
// Your task
// Create a robot that will always win the game. Your robot will always go first. The function should take an integer and returns 1, 2, or 3.
// 
// Note: The input will always be valid (a positive integer)
// -----------------------------------------------------------

int make_move(int n)
{
    int r = 4;
    return n % r;
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
// You should have received a copy of the GNU Lesser Public License
// along with this code. If not, see http://www.gnu.org/licenses/
// -----------------------------------------------------------