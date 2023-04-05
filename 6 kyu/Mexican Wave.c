// -----------------------------------------------------------
// Introduction
// The wave (known as the Mexican wave in the English-speaking world outside North America) is an example of metachronal rhythm 
// achieved in a packed stadium when successive groups of spectators briefly stand, yell, and raise their arms. Immediately upon 
// stretching to full height, the spectator returns to the usual seated position.
// 
// The result is a wave of standing spectators that travels through the crowd, even though individual spectators never move away 
// from their seats. In many large arenas the crowd is seated in a contiguous circuit all the way around the sport field, and so 
// the wave is able to travel continuously around the arena; in discontiguous seating arrangements, the wave can instead reflect 
// back and forth through the crowd. When the gap in seating is narrow, the wave can sometimes pass through it. Usually only one 
// wave crest will be present at any given time in an arena, although simultaneous, counter-rotating waves have been produced. 
// (Source Wikipedia)
// 
// Task
// In this simple Kata your task is to create a function that turns a string into a Mexican Wave. You will be passed a string and 
// you must return that string in an array where an uppercase letter is a person standing up. 
// 
// Rules
//  1.  The input string will always be lower case but maybe empty.
// 
//  2.  If the character in the string is whitespace then pass over it as if it was an empty seat
// 
// Example
// wave("hello") => {"Hello", "hEllo", "heLlo", "helLo", "hellO"}
// 
// Good luck and enjoy!
// -----------------------------------------------------------

#include <string.h>

extern char* strdup(const char*);

void wave(const char *y, char **target)
{
/* you don't have to allocate memory, use target */
/* y string is always null terminated */
/* each string in target has length strlen(y) + 1 */
    for (size_t a = 0, b = 0; b < strlen(y); b++)
    {
        if (y[b] == ' ')
        {
            continue;
        }
        target[a] = strdup(y);
        target[a][b] = (target[a][b] - 'c') + 'C';
        a++;
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