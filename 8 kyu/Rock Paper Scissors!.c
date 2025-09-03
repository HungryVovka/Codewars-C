// -----------------------------------------------------------
// Rock Paper Scissors
// Let's play! You have to return which player won! In case of a draw return Draw!.
// 
// Examples(Input1, Input2 --> Output):
// 
// "scissors", "paper" --> "Player 1 won!"
// "scissors", "rock" --> "Player 2 won!"
// "paper", "paper" --> "Draw!"
// -----------------------------------------------------------

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2){
  if (p1 == p2) return DRAW;
	if (p1 == ROCK && p2 == SCISSORS) return P1_WON;
  if (p1 == SCISSORS && p2 == PAPER) return P1_WON;
  if (p1 == PAPER && p2 == ROCK) return P1_WON;
  return P2_WON;
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