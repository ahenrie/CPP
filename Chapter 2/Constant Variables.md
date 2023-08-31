## 2.9 Constant Variables in C++

When working with C++ code, it's beneficial to reduce the usage of literal numbers. This promotes better code readability and consistency. For instance, it's clearer to write `newPrice = origPrice - priceDiscount` compared to `newPrice = origPrice - 5`.

To enhance code clarity and prevent inadvertent changes, constant variables are a valuable tool. A constant variable is initialized with a value that remains unaltered throughout the program's execution. By designating a variable as constant using the `const` keyword, any attempts to modify its value later will trigger a compilation error.

Adopting a naming convention for constant variables is a common practice. Using uppercase letters with underscores to separate words can make these variables distinct in the code. This naming convention serves as a visual cue that the values of these variables should remain unchanged after being set.

```c++
#include <iostream>
using namespace std;

/*
 * Estimates distance of lightning based on seconds
 * between lightning and thunder
 */

int main() {
   const double SPEED_OF_SOUND   = 761.207; // Miles/hour (sea level)
   const double SECONDS_PER_HOUR = 3600.0;  // Secs/hour
   double secondsBetween;
   double timeInHours;
   double distInMiles;
   
   cout << "Enter seconds between lightning and thunder: ";
   cin  >> secondsBetween;
   
   timeInHours = secondsBetween / SECONDS_PER_HOUR;
   distInMiles = SPEED_OF_SOUND * timeInHours;
   
   cout << "Lightning strike was approximately" << endl;
   cout << distInMiles << " miles away." << endl;
   
   return 0;
}
```
