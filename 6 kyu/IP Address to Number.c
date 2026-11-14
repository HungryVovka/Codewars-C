// -----------------------------------------------------------
// An IPv4 address is a 32-bit number that identifies a device on the internet.
// 
// While computers read and write IP addresses as a 32-bit number, we prefer 
// to read them in dotted-decimal notation, which is basically the number split 
// into 4 chunks of 8 bits, converted to decimal, and delmited by a dot.
// 
// In this kata, you will create the function ipToNum (or ip_to_num, depending 
// 	on the language) that takes an ip address and converts it to a number, 
// as well as the function numToIp (or num_to_ip) that takes a number 
// and converts it to an IP address string. Input will always be valid.
// 
// Conversion Example
// //original IP address
// 192.168.1.1
// 
// //breaks down into 4 binary octets
// 11000000 . 10101000 . 00000001 . 00000001
// 
// //which are merged together (unsigned 32-bit binary)
// 11000000101010000000000100000001
// 
// //and finally converted to base 10
// 3232235777
// 
// Note that the binary octets are unsigned (so we can't have negative numbers).
// 
// Examples
// ipToNum / ip_to_num
// '192.168.1.1' converts to 3232235777
// '10.0.0.0'    converts to  167772160
// '176.16.0.1'  converts to 2953838593
// 
// numToIp / num_to_ip
// 3232235777 converts to '192.168.1.1'
//  167772160 converts to    '10.0.0.0'
// 2953838593 converts to  '176.16.0.1'
// -----------------------------------------------------------

#include <inttypes.h>     // uint32_t
#include <stdio.h>        // sscanf, sprintf

uint32_t IP_to_num(const char *ip){
  unsigned int a, b, c, d;
  uint32_t answer;
  
  sscanf(ip, "%u.%u.%u.%u", &a, &b, &c, &d);
  
  answer = ((uint32_t)a << 24) |
           ((uint32_t)b << 16) |
           ((uint32_t)c << 8)  |
           (uint32_t)d;
  return answer;
}

char *num_to_IP(uint32_t n, char ip[sizeof "255.255.255.255"]){
// write to `ip` and return it
  unsigned int a, b, c, d;
  a = (n >> 24) & 0xFF;
  b = (n >> 16) & 0xFF;
  c = (n >> 8) & 0xFF;
  d = n & 0xFF;
  
  sprintf(ip, "%u.%u.%u.%u", a, b, c, d);
  return ip;
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