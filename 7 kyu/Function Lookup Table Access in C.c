// -----------------------------------------------------------
// Task
// Write a function lookup_table_access that takes an array of functions, the index and the argument, so that an appropriate function is called with 
// the given argument.
// 
// The lookup table will contain the functions that accept one integer and return an integer. So an element might be:
// 
// int example_func(int x)
// {
//     return x - 1;
// }
// 
// If the function example_func is stored at table[2], the following function call
// 
// lookup_table_access(table, 2, 100)
// 
// should return the integer 99.
// 
// Notes
// The example test cases are not provided since it may spoil the purpose of this Kata.
// -----------------------------------------------------------

int lookup_table_access(/* fill in the type yourself */ 
  int (*table[])(int), int index, int arg){
  return table[index](arg);
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