// -----------------------------------------------------------
// There are 8 balls numbered from 0 to 7. Seven of them have the same weight. One is heavier. Your task is to find its number.
// 
// Your function findBall will receive single argument - scales object. The scales object contains an internally stored array of 8 elements 
// (indexes 0-7), each having the same value except one, which is greater. It also has a public method named getWeight(left, right) which 
// takes two arrays of indexes and returns -1, 0, or 1 based on the accumulation of the values found at the indexes passed are heavier, equal, or lighter.
// 
// getWeight returns:
// 
// -1 if left pan is heavier
// 
// 1 if right pan is heavier
// 
// 0 if both pans weight the same
// 
// Examples of scales.getWeight() usage:
// 
// scales.getWeight([3], [7]) returns -1 if ball 3 is heavier than ball 7, 1 if ball 7 is heavier, or 0 i these balls have the same weight.
// 
// scales.getWeight([3, 4], [5, 2]) returns -1 if weight of balls 3 and 4 is heavier than weight of balls 5 and 2 etc.
// 
// So where's the catch, you may ask. Well - the scales is very old. You can use it only 4 TIMES before the scale breaks.
// 
// Note - Use scales.get_weight() in the Python, Crystal, Ruby And C versions.
// 
// Note - in C you should also pass the length of the arrays to scales.get_weight().
// -----------------------------------------------------------

#include <stddef.h>   // size_t

struct Scales {
    int (*get_weight)(size_t len, size_t left[len], size_t right[len]);
};

size_t find_ball(struct Scales scales)
{
    // you can call the get_weight function like that:
    // scales.get_weight(<length_of_each_side>, <left_side_arr>, <right_side_arr>);
      
    int answer;
    size_t left3[3];
    size_t right3[3];
  
    // [0, 1, 2] vs [3, 4, 5]
  
    left3[0] = 0;
    left3[1] = 1;
    left3[2] = 2;
  
    right3[0] = 3;
    right3[1] = 4;
    right3[2] = 5;
    
    answer = scales.get_weight(3, left3, right3);
  
    if (answer == 0){             // heavy is 6 or 7
      size_t left1[1];
      size_t right1[1];
      
      left1[0] = 6;
      right1[0] = 7;
      
      answer = scales.get_weight(1, left1, right1);
      
      if (answer == -1){
        return 6;
      } else {
        return 7;
      }
    } else if (answer == -1){     // heavy from 0, 1, 2
      size_t left1[1];
      size_t right1[1];
      
      left1[0] = 0;
      right1[0] = 1;
      
      answer = scales.get_weight(1, left1, right1);
      
      if (answer == -1){
        return 0;
      } else if (answer == 1){
        return 1;
      } else {
        return 2;
      }
      
    } else {                      // heavy from 3, 4, 5
      size_t left1[1];
      size_t right1[1];
      
      left1[0] = 3;
      right1[0] = 4;
      
      answer = scales.get_weight(1, left1, right1);
      
      if (answer == -1){
        return 3;
      } else if (answer == 1){
        return 4;
      } else {
        return 5;
      }
    }
    return 0;
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