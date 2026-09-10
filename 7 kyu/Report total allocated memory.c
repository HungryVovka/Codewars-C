// -----------------------------------------------------------
// Preface: In order to successfully complete this kata, you might 
// want to be familiar with the basics of the nature of the static 
// memory and standard library.
// 
// Challenge: Implement mem_alloc and its companion function report_
// total_allocated so that mem_alloc allocates as much memory 
// as requested by the caller or returns a NULL if allocation failed, 
// and report_total_allocated reports the total amount of memory 
// successfully allocated by mem_alloc since the beginning of the program execution.
// 
// Example:
// 
// void *buffer = mem_alloc(sizeof(char));
// if (buffer) {
//   unsigned long long total_alloc = report_total_allocated();
//   (void)printf("%llu\n", total_alloc);
//   // outputs a value equal to: sizeof(char)
//   
//   free(buffer);
// }
// ,
// 
// // report_total_allocated should ignore de-allocations
// // and instead accummulate all successful memory allocations
// // to report them when requested.
// 
// void *buffer = mem_alloc(sizeof(char));
// free(buffer);
// 
// void *another_buffer = mem_alloc(sizeof(int));
// free(another_buffer);
// 
// unsigned long long total_alloc = report_total_allocated();
// (void)printf("%llu\n", total_alloc);
// // outputs a value equal to: sizeof(char) + sizeof(int)
// -----------------------------------------------------------

#include <stdlib.h>   // malloc

// total of all successful allocations
static unsigned long long total_allocated = 0;

void *mem_alloc(size_t size){
  void *ptr;
  ptr = malloc(size);
  if (ptr != NULL){
    total_allocated += (unsigned long long)size;
  }
  return ptr;
}

unsigned long long report_total_allocated(void){
  return total_allocated;
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