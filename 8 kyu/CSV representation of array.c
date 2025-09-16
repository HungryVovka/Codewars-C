// -----------------------------------------------------------
// Create a function that returns the CSV representation of a two-dimensional numeric array.
// 
// Example:
// 
// input:
//    [[ 0, 1, 2, 3, 4 ],
//     [ 10,11,12,13,14 ],
//     [ 20,21,22,23,24 ],
//     [ 30,31,32,33,34 ]] 
//     
// output:
//      '0,1,2,3,4\n'
//     +'10,11,12,13,14\n'
//     +'20,21,22,23,24\n'
//     +'30,31,32,33,34'
// 
// Array's length > 2.
// 
// More details here: https://en.wikipedia.org/wiki/Comma-separated_values
// 
// Note: you shouldn't escape the \n, it should work as a new line.
// -----------------------------------------------------------

#include <stdlib.h> // malloc
#include <stdio.h>  // sprintf, snprintf
#include <stddef.h> // size_t

static size_t calcola_dimensione(size_t righe, size_t colonne,
                                const int matrice[righe][colonne]){
  size_t i, j, dimensione = 0;
  char buffer[32];
  for (i = 0; i < righe; i++){
    for (j = 0; j < colonne; j++){
      dimensione += snprintf(buffer, sizeof(buffer), "%d", matrice[i][j]);
      if (j < colonne - 1) dimensione += 1; // virgola
    }
    if (i < righe - 1) dimensione += 1; // simbolo '\n'
  }
  dimensione += 1; // '\0'
  return dimensione;
}

static void scrivi_csv(char *destinazione, size_t righe, size_t colonne,
                      const int matrice[righe][colonne]){
  size_t i, j, pos = 0;
  for (i = 0; i < righe; i++){
    for (j = 0; j < colonne; j++){
      pos += sprintf(destinazione + pos, "%d", matrice[i][j]);
      if (j < colonne - 1) destinazione[pos++] = ',';
    }
    if (i < righe - 1) destinazione[pos++] = '\n';
  }
  destinazione[pos] = '\0';
}

char *to_csv_text(size_t righe, size_t colonne, 
                  const int matrice[righe][colonne]){
    // return dynamically allocated string
  size_t dimensione = calcola_dimensione(righe, colonne, matrice);
  char *risultato = malloc(dimensione);
  if (!risultato) return NULL;
  scrivi_csv(risultato, righe, colonne, matrice);
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