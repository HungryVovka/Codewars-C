// -----------------------------------------------------------
// You get any card as an argument. Your task is to return the suit of this card (in lowercase).
// 
// Our deck (is preloaded):
// 
// deck = ['2♣','3♣','4♣','5♣','6♣','7♣','8♣','9♣','10♣','J♣','Q♣','K♣','A♣',
//         '2♦','3♦','4♦','5♦','6♦','7♦','8♦','9♦','10♦','J♦','Q♦','K♦','A♦',
//         '2♥','3♥','4♥','5♥','6♥','7♥','8♥','9♥','10♥','J♥','Q♥','K♥','A♥',
//         '2♠','3♠','4♠','5♠','6♠','7♠','8♠','9♠','10♠','J♠','Q♠','K♠','A♠'];
// -----------------------------------------------------------

#include <string.h> // strlen, memcmp

extern const char *const deck[52];

enum CardSuit { CLUBS, DIAMONDS, HEARTS, SPADES };

// The input string 'card' is encoded in UTF-8
enum CardSuit get_suit (const char *card){
  size_t len = strlen(card);
  const char *suit = card + len - 3;
  if (memcmp(suit, "♣", 3) == 0) return CLUBS;
  if (memcmp(suit, "♦", 3) == 0) return DIAMONDS;
  if (memcmp(suit, "♥", 3) == 0) return HEARTS;
  if (memcmp(suit, "♠", 3) == 0) return SPADES;
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