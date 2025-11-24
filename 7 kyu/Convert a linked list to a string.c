// -----------------------------------------------------------
// Convert a linked list to a string
// Related Kata
// Although this Kata is not part of an official Series, you may also want to try out 
// "Parse a linked list from a string" if you enjoyed this Kata.
// 
// Preloaded
// Preloaded for you is a class, struct or derived data type Node ( depending on the 
// language ) used to construct linked lists in this Kata:
// 
// typedef struct node {
//   int data;
//   struct node *next;
// } Node;
// 
// NOTE: In C, the Node struct is placed on top of your main solution (and the 
// [Sample] Test Cases) because the compiler complains about not recognizing the
// Node datatype even after adding it to the Preloaded section. Attempts to 
// modify it (e.g. to cheat the tests in some way) will likely result in a test crash so it 
// is not recommended for you to modify that section ;)
// 
// Prerequisites
// This Kata assumes that you are already familiar with the idea of a linked list. If 
// you do not know what that is, you may want to read this article on Wikipedia. 
// Specifically, the linked lists this Kata is referring to are singly linked lists, where 
// the value of a specific node is stored in its data / $data / Data property, 
// the reference to the next node is stored in its next / $next / Next / next_node 
// property and the terminator for a list is null / NULL / None / nil / nullptr / null().
// 
// Task
// Create a function stringify which accepts an argument list / $list and 
// returns a string representation of the list. The string representation of the list 
// starts with the value of the current Node, specified by its data / $data / Data 
// property, followed by a whitespace character, an arrow and another whitespace 
// character (" -> "), followed by the rest of the list. The end of the string 
// representation of a list must always end with null / NULL / None / nil / nullptr / null() 
// ( all caps or all lowercase depending on the language you are undertaking this Kata in ). 
// For example, given the following list:
// 
// &((Node){
//   .data = 1,
//   .next = &((Node){
//     .data = 2,
//     .next = &((Node){
//       .data = 3,
//       .next = NULL
//     })
//   })
// })
// 
// ... its string representation would be:
// 
// "1 -> 2 -> 3 -> NULL"
// 
// And given the following linked list:
// 
// &((Node){
//   .data = 0,
//   .next = &((Node){
//     .data = 1,
//     .next = &((Node){
//       .data = 4,
//       .next = &((Node){
//         .data = 9,
//         .next = &((Node){
//           .data = 16,
//           .next = NULL
//         })
//       })
//     })
//   })
// })
// 
// ... its string representation would be:
// 
// "0 -> 1 -> 4 -> 9 -> 16 -> NULL"
// 
// Note that null / NULL / None / nil / nullptr / null() itself is also 
// considered a valid linked list. In that case, its string representation would simply 
// be "null" / "NULL" / "None" / "nil" / "nullptr" / @"NULL" / "null()" 
// ( again, depending on the language ).
// 
// For the simplicity of this Kata, you may assume that any Node in this Kata may 
// only contain non-negative integer values. For example, you will not encounter a 
// Node whose data / $data / Data property is "Hello World".
// 
// Enjoy, and don't forget to check out my other Kata Series :D
// -----------------------------------------------------------

#include <stdlib.h>     // malloc, realloc
#include <string.h>     // strcpy, strcat, strlen
#include <stdio.h>      // sprintf

// "Preloaded Code" (do NOT modify!)
typedef struct node {
    int data;
    struct node *next;
} Node;

// Main Solution
char *stringify(const Node *list) {
    // TODO: Return a string representation of the linked list provided
    // allocate the string on the heap:
  char *answer;
  char buffer[32];
  size_t length;
  
  if (list == NULL){
    answer = malloc(5);   // "NULL\0"
    if (answer == NULL) return NULL;
    strcpy(answer, "NULL");
    return answer;
  }
  
  answer = malloc(1);
  if (answer == NULL) return NULL;
  answer[0] = '\0';
  
  while (list != NULL){
    sprintf(buffer, "%d -> ", list->data);
    length = strlen(answer) + strlen(buffer) + 1;
    answer = realloc(answer, length);
    if (answer == NULL) return NULL;
    strcat(answer, buffer);
    list = list->next;
  }
  
  length = strlen(answer) + 4 + 1;    // "NULL\0"
  answer = realloc(answer, length);
  if (answer == NULL) return NULL;
  strcat(answer, "NULL");
  return answer;
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