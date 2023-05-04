// -----------------------------------------------------------
// Create a function which answers the question "Are you playing banjo?".
// If your name starts with the letter "R" or lower case "r", you are playing banjo!
// 
// The function takes a name as its only argument, and returns one of the following strings:
// 
// name + " plays banjo" 
// name + " does not play banjo"
// 
// Names given are always valid strings.
// -----------------------------------------------------------

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name)
{
	char* answer;
	const char* playsBanjo = " plays banjo";
	const char* doesNotPlayBanjo = " does not play banjo";
	if (tolower(name[0]) == 'r')
	{
		answer = calloc(strlen(name) + strlen(playsBanjo), 1);
		strcat(answer, name);
		strcat(answer, playsBanjo);
	}
	else
	{
		answer = calloc(strlen(name) + strlen(doesNotPlayBanjo), 1);
		strcat(answer, name);
		strcat(answer, doesNotPlayBanjo);
	}
	return answer;
}

// or

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name)
{
	char* answer = malloc(100);
	strcpy(answer, name);
	const char* playsBanjo = " plays banjo";
	const char* doesNotPlayBanjo = " does not play banjo";
	if (tolower(name[0]) == 'r')
	{
		strcat(answer, playsBanjo);
	}
	else
	{
		strcat(answer, doesNotPlayBanjo);
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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