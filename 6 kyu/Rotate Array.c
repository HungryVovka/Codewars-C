// -----------------------------------------------------------
// Create a method named "rotate" that returns a given array with the elements 
// inside the array rotated n spaces.
// 
// If n is greater than 0 it should rotate the array to the right. If n is less than 0 it 
// should rotate the array to the left. If n is 0, then it should return the array 
// unchanged.
// 
// Example:
// 
// with array [1, 2, 3, 4, 5]
// 
// n = 1      =>    [5, 1, 2, 3, 4]
// n = 2      =>    [4, 5, 1, 2, 3]
// n = 3      =>    [3, 4, 5, 1, 2]
// n = 4      =>    [2, 3, 4, 5, 1]
// n = 5      =>    [1, 2, 3, 4, 5]
// n = 0      =>    [1, 2, 3, 4, 5]
// n = -1     =>    [2, 3, 4, 5, 1]
// n = -2     =>    [3, 4, 5, 1, 2]
// n = -3     =>    [4, 5, 1, 2, 3]
// n = -4     =>    [5, 1, 2, 3, 4]
// n = -5     =>    [1, 2, 3, 4, 5]
// 
// The rotation shouldn't be limited by the indices available in the array. Meaning 
// that if we exceed the indices of the array it keeps rotating.
// 
// Example:
// 
// with array [1, 2, 3, 4, 5]
// 
// n = 7        =>    [4, 5, 1, 2, 3]
// n = 11       =>    [5, 1, 2, 3, 4]
// n = 12478    =>    [3, 4, 5, 1, 2]
// -----------------------------------------------------------

void rotate_array (int len, int rotated[len], const int array[len], int n){
// fill the rotated[] array
  int i;
  int normalized_shift;
  if (len <= 0) return;
  
  normalized_shift = n % len;
  if (normalized_shift < 0) normalized_shift += len;
  
  if (normalized_shift == 0){
    for (i = 0; i < len; i++) rotated[i] = array[i];
    return;
  }
  
  for (i = 0; i < len; i++){
    int new_position;
    new_position = (i + normalized_shift) % len;
    rotated[new_position] = array[i];
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