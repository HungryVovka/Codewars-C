// -----------------------------------------------------------
// Introduction
// In this kata we are going to take a look at how IPv4 packet filtering 
// works using Access Control Lists (ACL), specifically using a technique 
// called wildcard masks to match based on an IP address or a range of addresses.
// 
// A wildcard mask is the inverse of the subnet mask:
// 
// 255.255.255.0  = 11111111.11111111.11111111.00000000 (subnet mask)
// 0.0.0.255      = 00000000.00000000.00000000.11111111 (wildcard mask)
// 
// Using the wildcard mask we can decide which bits to look at in 
// the IPv4 address when filtering packets. If a bit in the mask is:
// 
// A zero (0), that same bit must match exactly between the IPv4 address 
// and the network address.
// A one (1), that bit can be either a one or a zero in the IPv4 address 
// compared to the network address.
// 
// Example
// Let's look at an example:
// 
// permit 192.168.0.0 0.0.0.255
// This is an entry in an Access Control List (ACL) telling us to permit 
// packets from 192.168.0.0-255.
// 
// 192.168.0.0    = 11000000.10101000.00000000.00000000 (network address)
// 0.0.0.255      = 00000000.00000000.00000000.11111111 (wildcard mask)
// 
// Again, the zeros (0) must match exactly and the ones (1) can be anything, so:
// 
// 192.168.0.0    = 11000000.10101000.00000000.00000000 (match)
// 192.168.0.1    = 11000000.10101000.00000000.00000001 (match)
// 192.168.0.254  = 11000000.10101000.00000000.11111110 (match)
// 192.168.0.255  = 11000000.10101000.00000000.11111111 (match)
// 192.168.1.1    = 11000000.10101000.00000001.00000001 (mismatch)
// 192.168.1.254  = 11000000.10101000.00000001.11111110 (mismatch)
// 128.168.0.1    = 10000000.10101000.00000000.00000001 (mismatch)
// 193.168.0.1    = 11000001.10101000.00000000.00000001 (mismatch)
// 
// Hint: Using bitwise operators might be helpful here.
// 
// The Assignment
// Your task is to implement a function 
// bool match(const char *net_addr, const char *wc_mask, const char *ipv4_addr) 
// which takes in a network address net_addr, a wildcard mask wc_mask, 
// an IPv4 address ipv4_addr and determines if the IPv4 address is a match or mismatch. 
// The function returns true if it's a match and false if it's a mismatch.
// 
// Testing
// The tests will challenge your function with addresses and masks in 
// the full 32-bit range (0.0.0.0 - 255.255.255.255) and nothing else.
// 
// Links
// Check out these links for more information:
// 
// https://en.wikipedia.org/wiki/IPv4#Addressing
// https://en.wikipedia.org/wiki/Binary_number
// https://community.cisco.com/t5/networking-documents/access-control-lists-acl-explained/ta-p/4182349
// -----------------------------------------------------------

#include <stdbool.h>    // bool, true, false
#include <stdio.h>     // sscanf

bool match(const char *net_addr, const char *wc_mask, const char *ipv4_addr){
	unsigned int net[4], mask[4], ip[4];
  int i;
  
  sscanf(net_addr, "%u.%u.%u.%u", &net[0], &net[1], &net[2], &net[3]);
  sscanf(wc_mask, "%u.%u.%u.%u", &mask[0], &mask[1], &mask[2], &mask[3]);
  sscanf(ipv4_addr, "%u.%u.%u.%u", &ip[0], &ip[1], &ip[2], &ip[3]);
  
  for (i = 0; i < 4; i++){
    if (((net[i] ^ ip[i]) & ~mask[i]) != 0) return false;
  }
  return true;
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