// -----------------------------------------------------------
// Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems. It is composed of 
// four nucleic acid bases Guanine ('G'), Cytosine ('C'), Adenine ('A'), and Thymine ('T').
// 
// Ribonucleic acid, RNA, is the primary messenger molecule in cells. RNA differs slightly from DNA its chemical 
// structure and contains no Thymine. In RNA Thymine is replaced by another nucleic acid Uracil ('U').
// 
// Create a function which translates a given DNA string into RNA.
// 
// For example:
// "GCAT"  =>  "GCAU"
// 
// The input string can be of arbitrary length - in particular, it may be empty. All input is guaranteed to be valid, i.e. 
// each input string will only ever consist of 'G', 'C', 'A' and/or 'T'.
// -----------------------------------------------------------

#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
  // returned pointer must point to a freeable buffer
  size_t dna_length = strlen(dna);
  char *rna = malloc(dna_length + 1);
  if (!rna) return NULL;
  size_t i;
  for (i = 0; i < dna_length; i++){
    if (dna[i] == 'T'){
      rna[i] = 'U';
    } else {
      rna[i] = dna[i];
    }
  }
  rna[dna_length] = '\0';
  return rna;
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