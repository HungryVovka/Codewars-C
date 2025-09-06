// -----------------------------------------------------------
// Suzuki is a monk who climbs a large staircase to the monastery as part of a ritual. Some days he climbs more stairs than others depending on the 
// number of students he must train in the morning. He is curious how many stairs might be climbed over the next 20 years and has spent a year 
// marking down his daily progress.
// 
// The sum of all the stairs logged in a year will be used for estimating the number he might climb in 20.
// 
// 20_year_estimate = one_year_total * 20
// 
// You will receive the following data structure representing the stairs Suzuki logged in a year. You will have all data for the entire year so regardless of 
// how it is logged the problem should be simple to solve.
// 
// stairs = [sunday,monday,tuesday,wednesday,thursday,friday,saturday]
// Make sure your solution takes into account all of the nesting within the stairs array.
// 
// Each weekday in the stairs array is an array.
// 
// sunday = [6737, 7244, 5776, 9826, 7057, 9247, 5842, 5484, 6543, 5153, 6832, 8274, 7148, 6152, 5940, 8040, 9174, 7555, 7682, 5252, 8793, 8837, 
// 7320, 8478, 6063, 5751, 9716, 5085, 7315, 7859, 6628, 5425, 6331, 7097, 6249, 8381, 5936, 8496, 6934, 8347, 7036, 6421, 6510, 5821, 8602, 
// 5312, 7836, 8032, 9871, 5990, 6309, 7825]
// 
// Your function should return the 20 year estimate of the stairs climbed using the formula above.
// 
// Please also try the other Kata in this series..
// 
// Help Suzuki count his vegetables...
// Help Suzuki purchase his Tofu!
// Help Suzuki pack his coal basket!
// Help Suzuki rake his garden!
// Suzuki needs help lining up his students!
// -----------------------------------------------------------

#include <stddef.h> // size_t

int stairs_in_20(const int stairs[7][52]){
  // WARNING: do not mutate unput
  int somma = 0;
  size_t i, j;
  for (i = 0; i < 7; i++){
    for (j = 0; j < 52; j++){
      somma += stairs[i][j];
    }
  }
  return 20 * somma;
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