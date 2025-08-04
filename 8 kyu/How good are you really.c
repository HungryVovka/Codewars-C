// -----------------------------------------------------------
// There was a test in your class and you passed it. Congratulations!
// 
// But you're an ambitious person. You want to know if you're better than the average student in your class.
// 
// You receive an array with your peers' test scores. Now calculate the average and compare your score!
// 
// Return true if you're better, else false!
// 
// Note:
// Your points are not included in the array of your class's points. Do not forget them when calculating the average score!
// -----------------------------------------------------------

#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points){
  // Your code here :)
  // Note: class_size is the length of class_points.
  if (!class_points || class_size <= 0) return false;
  long long sum = 0;
  int i;
  for (i = 0; i < class_size; i++){
    sum += class_points[i];
  }
  double average = (double)sum / class_size;
  return your_points > average;
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