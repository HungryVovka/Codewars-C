// -----------------------------------------------------------
// Introduction
// An IPv4 address is made up of 32 bits. The bits are divided into four sections 
// called octets (groups of eight). Each octet can have a number 
// in the range 0 to 255 (unsigned 8-bit integers).
// 
// All IPv4 addresses belong to an Address Class. There are five different address 
// classes (A, B, C, D and E). It's the first (left most) octet that tells us which 
// class the address belongs to.
// 
// Class:  Identifier:  Ranges:
// ---------------------------------------
//  A      0-------     00000000-01111111
//  B      10------     10000000-10111111
//  C      110-----     11000000-11011111
//  D      1110----     11100000-11101111
//  E      1111----     11110000-11111111
// 
// The bits in the Identifiers column above is used to determine the class of an address. 
// So, if an address starts with the bits that are visible in the identifier column, 
// it belongs to the class in the Class column on the same row.
// 
// If we look at the address 192.168.0.1 as an example:
// 
// The first octet is 192, which in binary is 11000000.
// The first 3 bits of this octet is set to 110 which means that it is 
// a Class C address.
// 
// The Assignment
// Your task is to implement a function char ipv4_address_class(const char *ipv4_addr) 
// which takes in an IPv4 address ipv4_addr and returns a character 
// char (A, B, C, D, or E) representing the address class.
// 
// Testing
// The tests will challenge your function with addresses in the full 32-bit 
// range (0.0.0.0 - 255.255.255.255) and nothing else.
// 
// Links
// Check out these links for more information:
// 
// https://en.wikipedia.org/wiki/Classful_network
// https://en.wikipedia.org/wiki/Binary_number
// -----------------------------------------------------------

#include <stdlib.h>     // atoi

char ipv4_address_class(const char *ipv4_addr){
  int first_octet;
  char answer;
  
  first_octet = atoi(ipv4_addr);
  
  if (first_octet <= 127){
    answer = 'A';
  } else if (first_octet <= 191){
    answer = 'B';
  } else if (first_octet <= 223){
    answer = 'C';
  } else if (first_octet <= 239){
    answer = 'D';
  } else {
    answer = 'E';
  }
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