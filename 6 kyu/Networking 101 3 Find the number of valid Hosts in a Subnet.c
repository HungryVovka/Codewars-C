// -----------------------------------------------------------
// Introduction
// An IPv4 subnet mask consist of 32 bits, divided into four octets. As an example, 
// a subnet mask of 255.255.255.0 can be written as:
// 
//     11111111.11111111.11111111.00000000
//       255   .  255   .  255   .   0    
// 
// The ones (1) represent the network/subnet part of the mask and 
// the zeroes (0) represent the host part of the mask.
// 
// The zeroes tell us how many IP addresses there are in the network defined by the ones.
// 
// In the example subnet above there are 256 addresses available; more precisely 0-255.
// 
// The Assignment
// Your task is to implement a function uint32_t hosts_in_subnet(const char* netmask) 
// which takes in an IPv4 subnet mask netmask and returns a 32-bit unsigned 
// integer uint32_t with the number of valid host addresses. Using the subnet mask 
// netmask you can figure out how many usable host addresses there are in a network 
// defined by that netmask.
// 
// Notes
// The first and last address in a subnet are not valid host addresses; they are 
// reserved for the network and broadcast addresses.
// 
// There are two special cases:
// 
// If all 32 bits are ones there is only one valid host address.
// When the mask has 31 bits set to ones there are two valid host addresses 
// (according to RFC 3021).
// 
// Testing
// The tests will challenge you with valid netmasks 
// in the range (128.0.0.0 - 255.255.255.255) and nothing else.
// -----------------------------------------------------------

#include <inttypes.h>   // uint32_t
#include <stdio.h>      // sscanf

uint32_t hosts_in_subnet(const char* netmask){
  unsigned int a, b, c, d;
  uint32_t mask;
  int zero_bits;
  uint32_t answer;
  
  sscanf(netmask, "%u.%u.%u.%u", &a, &b, &c, &d);
  
  mask = ((uint32_t)a << 24) |
         ((uint32_t)b << 16) |
         ((uint32_t)c << 8)  |
         (uint32_t)d;
  
  zero_bits = 0;
  while (zero_bits < 32 && ((mask & (1U << zero_bits)) == 0)){
    zero_bits++;
  }
  
  if (zero_bits == 0){
    answer = 1;
  } else if (zero_bits == 1){
    answer = 2;    
  } else {
    answer = (1U << zero_bits) - 2;
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