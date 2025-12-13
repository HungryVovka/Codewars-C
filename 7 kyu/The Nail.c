// -----------------------------------------------------------
// You're in a competition with another guy. You take turns hammering the nail. 
// Whoever hits the last blow wins. The last blow means that the nail will be 
// completely hammered.
// 
// Your input is the length of the nail (0 < l < 100). You can hit with different 
// strengths: 1, 2 or 3 units of nail length at a time. Your opponent is stronger 
// than you, and his hitting strength can be 2, 3 or 4 units, but you have a friend 
// in judging who has excluded all hopeless initial l values for you. You make the 
// first strike.
// 
// Return the strength of your current strike (1, 2 or 3), depending on the 
// remaining length of the nail.
// 
// The tests will invoke your and your opponent's solutions with the remaining 
// length of the nail, as long as l > 0. Then, if l <= 0 after your hit, you win the 
// contest and pass the kata.
// -----------------------------------------------------------

int hit(int nail){
  if (nail - 3 == 0) return 3;
  if (nail - 2 == 0) return 2;
  if (nail - 1 == 0) return 1;
  
  if ((nail - 3) % 5 == 0) return 3;
  if ((nail - 2) % 5 == 0) return 2;
  if ((nail - 1) % 5 == 0) return 1;
  return 1;
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