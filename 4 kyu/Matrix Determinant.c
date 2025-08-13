// -----------------------------------------------------------
// Write a function that accepts a square matrix (N x N 2D array) and returns the determinant of the matrix.
// 
// How to take the determinant of a matrix -- it is simplest to start with the smallest cases:
// 
// A 1x1 matrix |a| has determinant a.
// 
// A 2x2 matrix [ [a, b], [c, d] ] or
// 
// |a  b|
// |c  d|
// 
// has determinant: a*d - b*c.
// 
// The determinant of an n x n sized matrix is calculated by reducing the problem to the calculation of the determinants of n matrices ofn-1 x n-1 
// size.
// 
// For the 3x3 case, [ [a, b, c], [d, e, f], [g, h, i] ] or
// 
// |a b c|  
// |d e f|  
// |g h i|  
// 
// the determinant is: a * det(a_minor) - b * det(b_minor) + c * det(c_minor) where det(a_minor) refers to taking the determinant of the 2x2 
// matrix created by crossing out the row and column in which the element a occurs:
// 
// |- - -|
// |- e f|
// |- h i|  
// 
// Note the alternation of signs.
// 
// The determinant of larger matrices are calculated analogously, e.g. if M is a 4x4 matrix with first row [a, b, c, d], then:
// 
// det(M) = a * det(a_minor) - b * det(b_minor) + c * det(c_minor) - d * det(d_minor)
// -----------------------------------------------------------

#include <stddef.h>

int determinant(size_t n, const int matrice[n][n]){
  if (n == 1) return matrice[0][0];
  if (n == 2) return matrice[0][0] * matrice[1][1] - matrice[0][1] * matrice[1][0];
  int det = 0;
  size_t colonna, riga, r_sub, c_sub, m, c;
  for (colonna = 0; colonna < n; colonna++){
    m = n - 1;
    int minore[m][m];
    r_sub = 0;
    for (riga = 1; riga < n; riga++){
      c_sub = 0;
      for (c = 0; c < n; c++){
        if (c == colonna) continue;
        minore[r_sub][c_sub++] = matrice[riga][c];
      }
      r_sub++;
    }
    int segno = (colonna % 2 == 0) ? 1 : -1;
    det += segno * matrice[0][colonna] * determinant(m, minore);
  }
  return det;
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