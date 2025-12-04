// -----------------------------------------------------------
// Story
// You are a geometricist, a humble member of an ancient, secret order dedicated 
// to creating geometric shapes for use in people's daily lives around the world. 
// One day, you arrive at work to find that a wild Ouroboros has eaten into your 
// circle supply, corrupting many of them! Without these circles, trigonometric 
// functions will cease to exist. People will be unable to study AC power systems. 
// And worst of all, the world will no longer be able to produce LOLLIPOPS! 🍭
// 
// You must fix the corrupted circles as soon as possible - before the world turns 
// square!
// 
// Task
// Write a function circle_mender that takes as an input a string representing a 
// circle with some holes and returns the same string with the holes filled.
// 
// The input has the following characteristics:
// 
// It is a null-terminated string representing an ASCII-art circle;
// It consists of exactly 20 lines, each with 40 characters followed by a newline 
// character;
// The circle is drawn using the pound sign (#), and any holes within it are 
// represented by spaces ( );
// The edges of the circle are never missing.
// Below are some examples to better represent what it is that is expected:
// 
// Example 1:
// -------
// Input:
//                                         
//                                         
//                                         
//                          #####          
//                    #################    
//                  #####           #####  
//                 ####               #### 
//                ######            #######
//                 #######     ########### 
//                  #####################  
//                    #################    
//                          #####          
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
// -------
// Output:
//                                         
//                                         
//                                         
//                          #####          
//                    #################    
//                  #####################  
//                 ####################### 
//                #########################
//                 ####################### 
//                  #####################  
//                    #################    
//                          #####          
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
// Example 2:
// -------
// Input:
//                                         
//                                         
//           #####                         
//     #################                   
//   #######     #########                 
//  ######         ########                
// #######           #######               
//  ####               ####                
//   #####           #####                 
//     #################                   
//           #####                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
// -------
// Output:
//                                         
//                                         
//           #####                         
//     #################                   
//   #####################                 
//  #######################                
// #########################               
//  #######################                
//   #####################                 
//     #################                   
//           #####                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
// Example 3:
// -------
// Input:
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                  #####                  
//          #####################          
//       ###########################       
//     ########     ##################     
//   ########         ##################   
//   ##########     ####     ###########   
//  ##############             ##########  
//   ###########             ###########   
//   #############             #########   
//     #################     #########     
//       ###########################       
//          #####################          
//                  #####                  
// -------
// Output:
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                                         
//                  #####                  
//          #####################          
//       ###########################       
//     ###############################     
//   ###################################   
//   ###################################   
//  #####################################  
//   ###################################   
//   ###################################   
//     ###############################     
//       ###########################       
//          #####################          
//                  #####                  
// 
// -----------------------------------------------------------

static void fill_row(char *row_start){
  char *p;
  int col;
  int first_hash, last_hash;
  
  p = row_start;
  col = 0;
  first_hash = -1;
  last_hash = -1;
  
  while (*p != '\n' && *p != '\0' && col < 40){
    if (*p == '#'){
      if (first_hash == -1) first_hash = col;
      last_hash = col;
    }
    p++;
    col++;
  }
  
  if (first_hash == -1 || last_hash == -1) return;
  for (col = first_hash; col <= last_hash; col++) row_start[col] = '#';
}

void circle_mender (char *content){
  int row;
  char *p;
  if (content == 0) return;
  p = content;
  
  for (row = 0; row < 20; row++){
    fill_row(p);
    while (*p != '\n' && *p != '\0') p++;
    if (*p == '\n'){
      p++;
    } else {
      break;
    }
  }
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