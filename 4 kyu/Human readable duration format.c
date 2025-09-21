// -----------------------------------------------------------
// Your task in order to complete this Kata is to write a function which formats a duration, given as 
// a number of seconds, in a human-friendly way.
// 
// The function must accept a non-negative integer. If it is zero, it just returns "now". Otherwise, 
// the duration is expressed as a combination of years, days, hours, minutes and seconds.
// 
// It is much easier to understand with an example:
// 
// * For seconds = 62, your function should return 
//     "1 minute and 2 seconds"
// * For seconds = 3662, your function should return
//     "1 hour, 1 minute and 2 seconds"
// 
// For the purpose of this Kata, a year is 365 days and a day is 24 hours.
// 
// Note that spaces are important.
// 
// Detailed rules
// The resulting expression is made of components like 4 seconds, 1 year, etc. In general, a positive 
// integer and one of the valid units of time, separated by a space. The unit of time is used in plural 
// if the integer is greater than 1.
// 
// The components are separated by a comma and a space (", "). Except the last component, which is 
// separated by " and ", just like it would be written in English.
// 
// A more significant units of time will occur before than a least significant one. Therefore, 
// 1 second and 1 year is not correct, but 1 year and 1 second is.
// 
// Different components have different unit of times. So there is not repeated units like in 
// 5 seconds and 1 second.
// 
// A component will not appear at all if its value happens to be zero. Hence, 1 minute and 0 seconds 
// is not valid, but it should be just 1 minute.
// 
// A unit of time must be used "as much as possible". It means that the function should not 
// return 61 seconds, but 1 minute and 1 second instead. Formally, the duration specified by of 
// a component must not be greater than any valid more significant unit of time.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free
#include <stdio.h>    // sprintf
#include <string.h>   // strlen, strcat, strcpy

struct Tempo {
  int anni;
  int giorni;
  int ore;
  int minuti;
  int secondi;
};

static struct Tempo converti(int n){
  struct Tempo t;
  t.anni = n / ( 365 * 24 * 3600);
  n %= (365 * 24 * 3600);
  t.giorni = n / (24 * 3600);
  n %= (24 * 3600);
  t.ore = n / 3600;
  n %= 3600;
  t.minuti = n / 60;
  t.secondi = n % 60;
  return t;
}

static void aggiunti(char *out, 
                     int valore,
                     const char *singolare,
                     const char *plurale){
  char buffer[64];
  if (valore > 0){
    sprintf(buffer, "%d %s", valore, (valore == 1 ? singolare : plurale));
    if (strlen(out) > 0) strcat(out, ", ");
    strcat(out, buffer);
  }
}

char *formatDuration (int n){
  struct Tempo t;
  char *risultato;
  char buffer[512];
  int i, count, idx;
  
  if (n == 0){
    risultato = malloc(4);
    if (risultato) strcpy(risultato, "now");
    return risultato;
  }
  
  t = converti(n);
  
  buffer[0] = '\0';
  
  aggiunti(buffer, t.anni, "year", "years");
  aggiunti(buffer, t.giorni, "day", "days");
  aggiunti(buffer, t.ore, "hour", "hours");
  aggiunti(buffer, t.minuti, "minute", "minutes");
  aggiunti(buffer, t.secondi, "second", "seconds");
  
  count = 0;
  for (i = 0; buffer[i]; i++){
    if (buffer[i] == ',') count++;
  }
  if (count > 0){
    idx = (int)strlen(buffer) - 1;
    while (idx >= 0 && buffer[idx] != ',') idx--;
    if (idx >= 0){
      char resto[512];
      strcpy(resto, buffer + idx + 1);
      buffer[idx] = '\0';
      strcat(buffer, " and");
      strcat(buffer, resto);
    }
  }
  
  risultato = malloc(strlen(buffer) + 1);
  if (risultato) strcpy(risultato, buffer);
  return risultato;
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