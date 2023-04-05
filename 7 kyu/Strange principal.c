// -----------------------------------------------------------
// A high school has a strange principal. On the first day, he has his students perform an odd opening day ceremony:
// 
// There are number of lockers "n" and number of students "n" in the school. The principal asks the first student to go to every locker and open it. Then 
// he has the second student go to every second locker and close it. The third goes to every third locker and, if it is closed, he opens it, and if it is open, 
// he closes it. The fourth student does this to every fourth locker, and so on. After the process is completed with the "n"th student, how many lockers 
// are open?
// 
// The task is to write a function which gets any number as an input and returns the number of open lockers after last sudent complets his activity. So 
// input of the function is just one number which shows number of lockers and number of students. For example if there are 1000 lockers and 1000 
// students in school then input is 1000 and function returns number of open lockers after 1000th student completes his action.
// 
// The given input is always an integer greater than or equal to zero that is why there is no need for validation.
// -----------------------------------------------------------

#include <math.h>

unsigned num_of_open_lockers(unsigned long long n)
{
    return floor(sqrt(n));
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
// Copyright (C) 2022 Vladimir Rukavishnikov
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