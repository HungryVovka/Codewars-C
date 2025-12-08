// -----------------------------------------------------------
// Lets imagine a yoga classroom as a Square 2D Array of Integers classroom, with 
// each integer representing a person, and the value representing their skill level.
// 
// classroom = [
//             [3,2,1,3],
//             [1,3,2,1],
//             [1,1,1,2],
//             ]
//             
// poses = [1,7,5,9,10,21,4,3]
// 
// During a yoga class the instructor gives a list of integers poses representing 
// a yoga pose that each person in the class will attempt to complete.
// 
// A person can complete a yoga pose if the sum of their row and their skill level 
// is greater than or equal to the value of the pose.
// 
// Task
// Your task is to return the total amount poses completed for the entire classroom.
// 
// Example
// classroom = [
//             [1,1,0,1], #sum = 3
//             [2,0,6,0], #sum = 8
//             [0,2,2,0], #sum = 4
//             ]
//                     
// poses = [4, 0, 20, 10]
// 
// 3 people in row 1 can complete the first pose
// Everybody in row 1 can complete the second pose
// Nobody in row 1 can complete the third pose
// Nobody in row 1 can complete the fourth pose
// 
// The total poses completed for row 1 is 7
// 
// You'll need to return the total for all rows and all poses.
// 
// Translations are welcomed!
// -----------------------------------------------------------

#include <stddef.h>   // size_t

int yoga(size_t n, const int class[n][n], size_t p, const int poses[p]) {
  size_t row, col, pose_index;
  int answer = 0;
  for (row = 0; row < n; row++){
    int row_sum = 0;
    for (col = 0; col < n; col++){
      row_sum += class[row][col];
    }
    for (pose_index = 0; pose_index < p; pose_index++){
      int pose_value = poses[pose_index];
      for (col = 0; col < n; col++){
        if (row_sum + class[row][col] >= pose_value) answer++;
      }
    }
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