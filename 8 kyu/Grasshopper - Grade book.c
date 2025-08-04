// -----------------------------------------------------------
// Grade book
// Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.
// 
// Numerical Score	Letter Grade
// 90 <= score <= 100	'A'
// 80 <= score < 90	'B'
// 70 <= score < 80	'C'
// 60 <= score < 70	'D'
// 0  <= score  < 60	'F'
// 
// Tested values are all between 0 and 100. Theres is no need to check for negative values or values greater than 100.
// -----------------------------------------------------------

char get_grade(int a, int b, int c) {
  int grade = (a + b + c) / 3;
  if (grade >= 90 && grade <= 100){
    return 'A';
  } else if (grade >= 80 && grade < 90){
    return 'B';
  } else if (grade >= 70 && grade < 80){
    return 'C';
  } else if (grade >= 60 && grade < 70){
    return 'D';
  } else {
    return 'F';
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