// -----------------------------------------------------------
// Description:
// Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.
// 
// When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.
// 
// Your task is correct the errors in the digitised text. You only have to handle the following mistakes:
// 
// S is misinterpreted as 5
// O is misinterpreted as 0
// I is misinterpreted as 1
// The test cases contain numbers only by mistake.
// -----------------------------------------------------------

char *correct(char *string){
/* Please modify the string in-place and return it.
 */
  int i;
  for (i = 0; string[i] != '\0'; i++){
    switch (string[i]){
        case '5':
          string[i] = 'S';
          break;
        case '0':
          string[i] = 'O';
          break;
        case '1':
          string[i] = 'I';
          break;
        default:
          break;
    }
  }
  return string;
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