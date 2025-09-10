// -----------------------------------------------------------
// Given the molecular mass of two molecules M1 and M2, their masses present m1 and m2 in a vessel of volume V at a specific temperature T, find 
// the total pressure P_total exerted by the molecules. Formula to calculate the pressure is:
// 
// P_total = (m1 / M1 + m2 / M2) * R * T / V
// 
// Input
// Six values :
// 
// M1, M2: molar masses of both gases, in grams(g)
// m1 and m2: present mass of both gases, in g * mol^-1
// V: volume of the vessel, in dm^3
// T: temperature, in Celsius
// 
// Output
// One value: P_total, in units of atm
// 
// Notes
// Remember: Temperature is given in Celsius while SI unit is Kelvin(K). 0 C = 273.15 K
// 
// The gas constant R = 0.082dm^3 * atm * K^-1 * mol^-1
// -----------------------------------------------------------

#define R 0.082 // costante dei gas

double total_pressure(double molar_mass1, double molar_mass2, 
                      double given_mass1, double given_mass2, 
                      double v, double t){
  double n1 = given_mass1 / molar_mass1;
  double n2 = given_mass2 / molar_mass2;
  double temp_kelvin = t + 273.15;
  double P1 = (n1 * R * temp_kelvin) / v;
  double P2 = (n2 * R * temp_kelvin) / v;
  double P = P1 + P2;
  return P;
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