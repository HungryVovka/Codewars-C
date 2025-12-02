// -----------------------------------------------------------
// Once upon a time, on a way through the old wild mountainous west,…
// … a man was given directions to go from one point to another. The directions 
// were "NORTH", "SOUTH", "WEST", "EAST". Clearly "NORTH" and "SOUTH" are 
// opposite, "WEST" and "EAST" too.
// 
// Going to one direction and coming back the opposite direction right away is a 
// needless effort. Since this is the wild west, with dreadful weather and not much 
// water, it's important to save yourself some energy, otherwise you might die of 
// thirst!
// 
// How I crossed a mountainous desert the smart way.
// The directions given to the man are, for example, the following (depending on 
// the language):
// 
// ["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"].
// or
// { "NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST" };
// or
// [North, South, South, East, West, North, West]
// 
// You can immediately see that going "NORTH" and immediately "SOUTH" is not 
// reasonable, better stay to the same place! So the task is to give to the man a 
// simplified version of the plan. A better plan in this case is simply:
// 
// ["WEST"]
// or
// { "WEST" }
// or
// [West]
// 
// Other examples:
// In ["NORTH", "SOUTH", "EAST", "WEST"], the direction "NORTH" + "SOUTH" is 
// going north and coming back right away.
// 
// The path becomes ["EAST", "WEST"], now "EAST" and "WEST" annihilate each 
// other, therefore, the final result is [] (nil in Clojure).
// 
// In ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"], "NORTH" and 
// "SOUTH" are not directly opposite but they become directly opposite after the 
// reduction of "EAST" and "WEST" so the whole path is reducible to ["WEST", 
// "WEST"].
// 
// Task
// Write a function dirReduc which will take an array of strings and returns an 
// array of strings with the needless directions removed (W<->E or S<->N side by 
// side).
// 
// The Haskell version takes a list of directions with 
// data Direction = North | East | West | South.
// 
// The Clojure version returns nil when the path is reduced to nothing.
// 
// The Rust version takes a slice of enum Direction {North, East, West, South}.
// 
// The OCaml version takes a list of 
// type direction = | North | South | East | West.
// 
// See more examples in "Sample Tests:"
// Notes
// Not all paths can be made simpler. The path ["NORTH", "WEST", "SOUTH", 
// 	"EAST"] is not reducible. "NORTH" and "WEST", "WEST" and "SOUTH", 
// "SOUTH" and "EAST" are not directly opposite of each other and can't 
// become such. Hence the result path is itself : ["NORTH", "WEST", "SOUTH", 
// "EAST"].
// if you want to translate, please ask before translating.
// -----------------------------------------------------------

#include <stdlib.h>     // malloc, free
#include <string.h>     // strcmp

static int is_opposite(const char *a, const char *b){
  if ((strcmp(a, "NORTH") == 0 && strcmp(b, "SOUTH") == 0) ||
      (strcmp(a, "SOUTH") == 0 && strcmp(b, "NORTH") == 0) ||
      (strcmp(a, "EAST") == 0 && strcmp(b, "WEST") == 0) ||
      (strcmp(a, "WEST") == 0 && strcmp(b, "EAST") == 0))
      return 1;
  return 0;
}

const char **dirReduc(const char *const array[/*length_in*/], int length_in, int *length_out){
/*
    Return a heap-allocated array of constant strings.
    Your array will be freed, but the strings will not be.
    Report the length of your array through the 'length_out' pointer.
*/
  const char **stack;
  const char **reduced;
  int top;
  int i;
  
  if (length_in <= 0){
    *length_out = 0;
    return malloc(0);
  }
  
  stack = (const char **)malloc(sizeof(*stack) * (size_t)length_in);
  if (stack == NULL){
    *length_out = 0;
    return NULL;
  }
  
  top = 0;
  
  for (i = 0; i < length_in; i++){
    const char *current = array[i];
    if (top > 0 && is_opposite(stack[top - 1], current)){
      top--;
    } else {
      stack[top] = current;
      top++;
    }
  }
  
  *length_out = top;
  reduced = (const char **)malloc(sizeof(*reduced) * (size_t)top);
  if (reduced == NULL){
    free(stack);
    *length_out = 0;
    return NULL;
  }
  for (i = 0; i < top; i++) reduced[i] = stack[i];
  free(stack);
  return reduced;
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