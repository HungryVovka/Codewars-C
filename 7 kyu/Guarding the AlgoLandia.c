// -----------------------------------------------------------
// In a far away country called AlgoLandia, there are N islands numbered 1 to N. 
// Each island is denoted by k[i]. King Algolas, king of AlgoLandia, built 
// N - 1 bridges in the country. A bridge is built between islands k[i] and k[i+1]. 
// Bridges are two-ways and are expensive to build.
// 
// The problem is that there are gangs who wants to destroy the bridges. In order 
// to protect the bridges, the king wants to assign elite guards to the bridges. 
// A bridge between islands k[i] and k[i+1] is safe when there is an elite guard 
// in island k[i] or k[i+1]. There are already elite guards assigned in some islands.
// 
// Your task now is to determine the minimum number of additional elite guards that 
// needs to be hired to guard all the bridges.
// 
// Note:
// You are given a sequence k with N length. k[i] = true, means that there is an elite 
// guard in that island; k[i] = false means no elite guard. It is guaranteed 
// that AlgoLandia have at least 2 islands.
// 
// Sample Input 1
// k = [true, true, false, true, false]
// 
// Sample Output 1
// 0
// 
// Sample Input 2
// k = [false, false, true, false, false]
// 
// Sample Output 2
// 2
// -----------------------------------------------------------

#include <stdbool.h>    // bool

int findNeededGuards(int n, const bool k[n]){
  int i, answer;
  bool prev_guarded;
  
  /*
    Island 1 has no bridge to the left,
    start fro bridge between 1 and 2
  */
  
  answer = 0;
  prev_guarded = k[0];
  
  // Walk left to right, checl each bridge between i and i+1
  for (i = 0; i < n - 1; i++){
    if (!prev_guarded && !k[i + 1]){
      // Neither side has a guard -> hire one on the right island
      answer++;
      prev_guarded = true;
    } else {
      prev_guarded = k[i + 1];
    }
  }
  return answer;
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
// Copyright (C) 2026 Vladimir Rukavishnikov
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