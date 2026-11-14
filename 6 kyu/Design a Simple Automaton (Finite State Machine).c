// -----------------------------------------------------------
// Create a finite automaton that has three states. Finite automatons are the same 
// as finite state machines for our purposes.
// 
// Our simple automaton, accepts the language of A, defined as {0, 1} and should 
// have three states: q1, q2, and q3. Here is the description of the states:
// 
// q1 is our start state, we begin reading commands from here
// q2 is our accept state, we return true if this is our last state
// 
// And the transitions:
// 
// q1 moves to q2 when given a 1, and stays at q1 when given a 0
// q2 moves to q3 when given a 0, and stays at q2 when given a 1
// q3 moves to q2 when given a 0 or 1
// 
// The automaton should return whether we end in our accepted state (q2), or not (true/false).
// 
// Your task
// You will have to design your state objects, and how your Automaton handles transitions. 
// Also make sure you set up the three states, q1, q2, and q3 for the myAutomaton instance. 
// The test fixtures will be calling against myAutomaton.
// 
// As an aside, the automaton accepts an array of strings, rather than just numbers, or 
// a number represented as a string, because the language an automaton can 
// accept isn't confined to just numbers. An automaton should be able to accept any 'symbol.'
// 
// Here are some resources on DFAs (the automaton this Kata asks you to create):
// 
// http://en.wikipedia.org/wiki/Deterministic_finite_automaton
// http://www.cs.odu.edu/~toida/nerzic/390teched/regular/fa/dfa-definitions.html
// http://www.cse.chalmers.se/~coquand/AUTOMATA/o2.pdf
// 
// Example
// read_commands("10010");  ==> false
// 
// We make these transitions:
// 
// input: ["1", "0", "0", "1", "0"]
// 
// 1: q1 -> q2
// 0: q2 -> q3
// 0: q3 -> q2
// 1: q2 -> q2
// 0: q2 -> q3
// 
// We end in q3 which is not our accept state, so we return false
// -----------------------------------------------------------

#include <stdbool.h>      // bool, true, false

enum State {
  Q1,
  Q2,
  Q3
};

bool read_commands(const char* commands){
  enum State current_state;
  int i;
  char cmd;
  
  if (!commands) return false;
  
  current_state = Q1;
  
  for (i = 0; commands[i] != '\0'; i++){
    cmd = commands[i];
    
    switch (current_state){
        case Q1:
          if (cmd == '1') current_state = Q2;
          break;
        case Q2:
          if (cmd == '0') current_state = Q3;
          break;
        case Q3:
          if (cmd == '0' || cmd == '1') current_state = Q2;
          break;
    }
  }
  return current_state == Q2;
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