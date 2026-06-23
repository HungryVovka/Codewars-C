// -----------------------------------------------------------
// Write a function that takes a string input, and returns the first character 
// that is not repeated anywhere in the string.
// 
// For example, if given the input "stress", the function should return 't', 
// since the letter t only occurs once in the string, and occurs first in 
// the string.
// 
// As an added challenge, upper- and lowercase characters are considered 
// the same character, but the function should return the correct case for 
// the initial character. For example, the input "sTreSS" should return "T".
// 
// If a string contains only repeating characters, return an empty string ("");
// 
// Note: despite its name in some languages, your function should handle 
// any Unicode codepoint:
// 
// "@#@@*"    --> "#"
// "かか何"   --> "何"
// "🐐🦊🐐" --> "🦊"
// -----------------------------------------------------------

#include <string.h>  // memcpy()
#include <stdint.h>  // uint32_t


// The input is UTF-8-encoded
// Your output shall be as well
// Be ready for non-ASCII codepoints
// Write your answer to `output`, and nul-terminate `output`
// If there are no non-repeating codepoints in the input,
// make `output` an empty string.
// Because the C standard library's Unicode support is limited,
// you are not required to handle differing lower/upper forms
// outside of the ASCII range; in other words, treat two
// non-ASCII codepoints as different if they are not numerically identical.


#define MAX_CODEPOINTS 1024

static uint32_t normalize_codepoint(uint32_t codepoint)
{
    if (codepoint >= 'A' && codepoint <= 'Z')
        return codepoint + ('a' - 'A');

    return codepoint;
}

static int decode_utf8_codepoint(const char *ptr, uint32_t *codepoint)
{
    unsigned char c = (unsigned char)ptr[0];

    if ((c & 0x80) == 0) {
        *codepoint = c;
        return 1;
    }

    if ((c & 0xE0) == 0xC0) {
        if (ptr[1] == '\0')
            return 0;

        *codepoint =
            ((uint32_t)(c & 0x1F) << 6) |
            ((uint32_t)ptr[1] & 0x3F);

        return 2;
    }

    if ((c & 0xF0) == 0xE0) {
        if (ptr[1] == '\0' || ptr[2] == '\0')
            return 0;

        *codepoint =
            ((uint32_t)(c & 0x0F) << 12) |
            (((uint32_t)ptr[1] & 0x3F) << 6) |
            ((uint32_t)ptr[2] & 0x3F);

        return 3;
    }

    if ((c & 0xF8) == 0xF0) {
        if (ptr[1] == '\0' || ptr[2] == '\0' || ptr[3] == '\0')
            return 0;

        *codepoint =
            ((uint32_t)(c & 0x07) << 18) |
            (((uint32_t)ptr[1] & 0x3F) << 12) |
            (((uint32_t)ptr[2] & 0x3F) << 6) |
            ((uint32_t)ptr[3] & 0x3F);

        return 4;
    }

    return -1;
}

static int find_codepoint(
    const uint32_t codepoints[],
    int count,
    uint32_t codepoint)
{
    int i;

    for (i = 0; i < count; i++) {
        if (codepoints[i] == codepoint)
            return i;
    }

    return -1;
}

void first_non_repeating_codepoint(char output[5], const char *utf8)
{
    uint32_t codepoints[MAX_CODEPOINTS];
    int counts[MAX_CODEPOINTS];
    int codepoint_count = 0;

    const char *ptr;
    uint32_t codepoint;
    uint32_t normalized;
    int bytes;
    int index;

    output[0] = '\0';

    if (utf8 == NULL || *utf8 == '\0')
        return;

    ptr = utf8;

    while (*ptr != '\0') {
        bytes = decode_utf8_codepoint(ptr, &codepoint);

        if (bytes == 0)
            break;

        if (bytes < 0) {
            ptr++;
            continue;
        }

        normalized = normalize_codepoint(codepoint);

        index = find_codepoint(
            codepoints,
            codepoint_count,
            normalized
        );

        if (index >= 0) {
            counts[index]++;
        } else if (codepoint_count < MAX_CODEPOINTS) {
            codepoints[codepoint_count] = normalized;
            counts[codepoint_count] = 1;
            codepoint_count++;
        }

        ptr += bytes;
    }

    ptr = utf8;

    while (*ptr != '\0') {
        bytes = decode_utf8_codepoint(ptr, &codepoint);

        if (bytes == 0)
            break;

        if (bytes < 0) {
            ptr++;
            continue;
        }

        normalized = normalize_codepoint(codepoint);

        index = find_codepoint(
            codepoints,
            codepoint_count,
            normalized
        );

        if (index >= 0 && counts[index] == 1) {
            memcpy(output, ptr, bytes);
            output[bytes] = '\0';
            return;
        }

        ptr += bytes;
    }

    output[0] = '\0';
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