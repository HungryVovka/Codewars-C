// -----------------------------------------------------------
// Take the following IPv4 address: 128.32.10.1. This address has 4 octets where 
// each octet is a single byte (or 8 bits).
// 
// 1st octet 128 has the binary representation: 10000000
// 2nd octet 32 has the binary representation: 00100000
// 3rd octet 10 has the binary representation: 00001010
// 4th octet 1 has the binary representation: 00000001
// 
// So 128.32.10.1 == 10000000.00100000.00001010.00000001
// 
// Because the above IP address has 32 bits, we can represent it as 
// the 32 bit number: 2149583361.
// 
// Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes 
// an IPv4 address and returns a 32 bit number.
// 
// Example
// "128.32.10.1" => 2149583361
// -----------------------------------------------------------

#include <stdint.h>     // uint32_t
#include <stdio.h>      // sscanf

uint32_t ip_to_uint32(const char *ip){
  unsigned int a, b, c, d;
  uint32_t answer;
  
  sscanf(ip, "%u.%u.%u.%u", &a, &b, &c, &d);
  
  answer = ((uint32_t)a << 24) |
           ((uint32_t)b << 16) |
           ((uint32_t)c << 8)  |
           (uint32_t)d;
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