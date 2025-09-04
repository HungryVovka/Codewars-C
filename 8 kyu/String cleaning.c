// -----------------------------------------------------------
// Your boss decided to save money by purchasing some cut-rate optical character recognition software for scanning 
// in the text of old novels to your database. At first it seems to capture words okay, but you quickly notice that it 
// throws in a lot of numbers at random places in the text.
// 
// Examples (input -> output)
// '! !'                 -> '! !'
// '123456789'           -> ''
// 'This looks5 grea8t!' -> 'This looks great!'
// 
// Your harried co-workers are looking to you for a solution to take this garbled text and remove all of the numbers. 
// Your program will take in a string and clean out all numeric characters, and return a string with spacing and special 
// characters ~#$%^&!@*():;"'.,? all intact.
// -----------------------------------------------------------

#include <stdio.h>
#include <ctype.h>

char *clean_string (char *string){
// mutate the string in-place and return it
  char *puntatore_lettura = string; // sorgente
  char *puntatore_scrittura = string; // destinazione
  
  while (*puntatore_lettura){
    if (!isdigit((unsigned char)*puntatore_lettura)){
      *puntatore_scrittura = *puntatore_lettura;
      puntatore_scrittura++;
    }
    puntatore_lettura++;
  }
  *puntatore_scrittura = '\0';
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