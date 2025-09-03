// -----------------------------------------------------------
// Who remembers back to their time in the schoolyard, when girls would take a flower and tear its petals, saying each of the following phrases 
// each time a petal was torn:
// 
// "I love you"
// "a little"
// "a lot"
// "passionately"
// "madly"
// "not at all"
// 
// If there are more than 6 petals, you start over with "I love you" for 7 petals, "a little" for 8 petals and so on.
// 
// When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.
// 
// Your goal in this kata is to determine which phrase the girls would say at the last petal for a flower of a given number of petals. The number of 
// petals is always greater than 0.
// -----------------------------------------------------------

const char* how_much_i_love_you(int nb_petals){
  switch (nb_petals % 6){
    case 1:
      return "I love you";
    case 2:
      return "a little";
    case 3:
      return "a lot";
    case 4:
      return "passionately";
    case 5:
      return "madly";
    default:
      return "not at all";
  }
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