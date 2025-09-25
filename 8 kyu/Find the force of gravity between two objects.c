// -----------------------------------------------------------
// Your job is to find the gravitational force between two spherical objects (obj1 , obj2).
// 
// input
// Two arrays are given :
// 
// arr_val (value array), consists of 3 elements
// 1st element : mass of obj 1
// 2nd element : mass of obj 2
// 3rd element : distance between their centers
// arr_unit (unit array), consists of 3 elements
// 1st element : unit for mass of obj 1
// 2nd element : unit for mass of obj 2
// 3rd element : unit for distance between their centers
// 
// mass units are :
// 
// kilogram (kg)
// gram (g)
// milligram (mg)
// microgram (μg)
// pound (lb)
// 
// distance units are :
// 
// meter (m)
// centimeter (cm)
// millimeter (mm)
// micrometer (μm)
// feet (ft)
// 
// Note
// value of G = 6.67 × 10^(−11) N⋅kg^(−2)⋅m2
// 
// 1 ft = 0.3048 m
// 
// 1 lb = 0.453592 kg
// 
// return value must be Newton for force (obviously)
// 
// μ copy this from here to use it in your solution
// -----------------------------------------------------------

#include <string.h>   // strcmp
#include <math.h>     // pow

const char *unit_names[] = {
  "m", "cm", "mm", "μm", "ft", "kg",
  "g", "mg", "μg", "lb", "G"
};

const double unit_values[] = {
  1.0, 1e-2, 1e-3, 1e-6, 0.3048, 1.0,
  1e-3, 1e-6, 1e-9, 0.453592, 6.67e-11
};

const size_t unit_count = sizeof(unit_names) / sizeof(unit_names[0]);

double get_factor(const char *unit){
  size_t i;
  for (i = 0; i < unit_count; i++){
    if (strcmp(unit_names[i], unit) == 0) return unit_values[i];
  }
  return 1.0;
}

double solution(const double* values, const char** units){
  double a1 = values[0];
  double b1 = values[1];
  double r1 = values[2];
  double fa2 = get_factor(units[0]);
  double fb2 = get_factor(units[1]);
  double fr2 = get_factor(units[2]);
  double G = get_factor("G");
  return G * a1 * fa2 * b1 * fb2 / pow(r1 * fr2, 2);
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