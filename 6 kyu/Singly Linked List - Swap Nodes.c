// -----------------------------------------------------------
// The LinkedList elements you'll be using are simply a pointer 
// to a Node element defined below or NULL if empty 
// (you shouldn't need any list overhead in this kata)
// 
// typedef struct Node {
//     int          value;
//     struct Node  *next;
// } Node, *LinkedList;
// 
// Task
// In this kata, you'll need to write a function
// 
// int swapNodes(LinkedList *listPointer1, unsigned int index1, LinkedList *listPointer2, unsigned int index2)
// 
// that swaps the index1th Node of list1 and the index2th Node of list2 (0 based).
// With list1 the LinkedList pointed to by listPointer1 and list2 pointed to by listPointer2.
// 
// The function evaluates to true (1) when the swap was made and false (0) when an index is out of range.
// 
// Notes
// listPointer1 and listPointer2 are pointers to LinkedList, so 
// a pointer to a pointer to a Node (that's necessary so you can 
// swap the first node).
// 
// As mentionned above, you can swap the first node of a list because 
// they're passed by reference, but you can't swap the terminating 
// NULL node as it would cause unexpected behaviour and a potential 
// memory leak.
// 
// **/!\** This is a kata about handling pointers! Therefore you can 
// only modify the next property of the nodes! (Do not modify their value) **/!\** 
// 
// Pseudo-code Examples
// list1 = linked_list(1 -> 2 -> 3 -> 4)
// list2 = linked_list(5 -> 6 -> 7 -> 8)
// 
// swap_node(&list1, 2, &list2, 0)
// >> true
// 
// print(list1)
// >> linked_list(1 -> 2 -> 5 -> 4)
// print(list2)
// >> linked_list(3 -> 6 -> 7 -> 8)
// 
// list1 = linked_list(1 -> 2 -> 3)
// list2 = linked_list(4 -> 5 -> 6)
// 
// swap_node(&list1, 1, &list2, 3)
// >> false  // (index 3 of list2 does not exist)
// 
// print(list1)
// >> linked_list(1 -> 2 -> 3)
// print(list2)
// >> linked_list(4 -> 5 -> 6)
// If that may help, you have a preloaded function 
// char* listToString(LinkedList list), to help you visualise 
// the linked lists.
// -----------------------------------------------------------

#include <stdlib.h>   // malloc, free
#include <stdbool.h>  // bool, true, false
#include <stdio.h>    // For sample visualisation code, you may remove that ^^

typedef struct Node {
    int value;
    struct Node *next;
} Node, *LinkedList;

char* listToString(LinkedList list);  // Preloaded visualisation tool

int swapNodes(LinkedList *listPointer1, 
              unsigned int index1, 
              LinkedList *listPointer2, 
              unsigned int index2)
{
  /* Sample lists visualisation code */
  char *list1str = listToString(*listPointer1), *list2str = listToString(*listPointer2);
  printf("List 1:\t%s\nList 2:\t%s\n", list1str, list2str);
  free(list1str); free(list2str);
  
  LinkedList prev1 = NULL, prev2 = NULL;
  LinkedList curr1 = *listPointer1, curr2 = *listPointer2;
  unsigned int i;
  
  for (i = 0; i < index1 && curr1 != NULL; i++){
    prev1 = curr1;
    curr1 = curr1->next;
  }
  
  for (i = 0; i < index2 && curr2 != NULL; i++){
    prev2 = curr2;
    curr2 = curr2->next;
  }
  
  if (curr1 == NULL || curr2 == NULL) return 0;
  
  if (prev1 == NULL){
    *listPointer1 = curr2;
  } else {
    prev1->next = curr2;
  }
  
  if (prev2 == NULL){
    *listPointer2 = curr1;
  } else {
    prev2->next = curr1;
  }
  
  Node *temp = curr1->next;
  curr1->next = curr2->next;
  curr2->next = temp;
  
  return 1;
   
    /*********************************************************
      ____                 _    ____          _ _             
     / ___| ___   ___   __| |  / ___|___   __| (_)_ __   __ _ 
    | |  _ / _ \ / _ \ / _` | | |   / _ \ / _` | | '_ \ / _` |
    | |_| | (_) | (_) | (_| | | |___ (_) | (_| | | | | | (_| |
     \____|\___/ \___/ \__,_|  \____\___/ \__,_|_|_| |_|\__, |
                                                        |___/ 
    *********************************************************/
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