// -----------------------------------------------------------
// Find the number with the most digits.
// 
// If two numbers in the argument array have the same number of digits, return the first one in the array.
// -----------------------------------------------------------

#include <stddef.h> // size_t

static int conta_cifre(int n){
  int conteggio;
  if (n == 0) return 1;
  conteggio = 0;
  if (n < 0) n = - n;
  while (n > 0){
    conteggio++;
    n /= 10;
  }
  return conteggio;
}

int find_longest(int *numbers, size_t numbers_size){
  size_t i;
  int massimo_numero, max_cifre, cifre_correnti;
  
  massimo_numero = numbers[0];
  max_cifre = conta_cifre(numbers[0]);
  
  for (i = 1; i < numbers_size; i++){
    cifre_correnti = conta_cifre(numbers[i]);
    if (cifre_correnti > max_cifre){
      max_cifre = cifre_correnti;
      massimo_numero = numbers[i];
    }
  }
  return massimo_numero;
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