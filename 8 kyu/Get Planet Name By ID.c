// -----------------------------------------------------------
// The function is not returning the correct values. Can you figure out why?
// 
// Example (Input --> Output ):
// 
// 3 --> "Earth"
// -----------------------------------------------------------

const char *getPlanetName(int id){
  switch (id){
  case 1: return "Mercury";
  case 2: return "Venus";
  case 3: return "Earth";
  case 4: return "Mars";
  case 5: return "Jupiter";
  case 6: return "Saturn";
  case 7: return "Uranus";
  case 8: return "Neptune";
  default: return "Pluto";
  };
}

// or

const char *getPlanetName(int id){
  static const char *const nomi[] = {
    "Sun",
    "Mercury",
    "Venus",
    "Earth",
    "Mars",
    "Jupiter",
    "Saturn",
    "Uranus",
    "Neptune"
  };
  return (id >= 1 && id <= 8) ? nomi[id] : nomi[0];
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