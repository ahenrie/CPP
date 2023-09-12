# Iterating Through Vectors

## Common Struct of For Loop for Iteration

```c++
for (i = 0; i < Vector.size(); ++i) {
  // Loop body for vector access
}
```

## Determing a Quantity About a Vector's Elements

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_ELEMENTS); // User values
   unsigned int i;                     // Loop index
   int sumVal;                         // For computing sum
   
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
      cout << endl;
   }
   
   // Determine sum
   sumVal = 0;
   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
   }
   cout << "Sum: " << sumVal << endl;
   
   return 0;
}
```

## Finding the Max Element in a Vector

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   unsigned int i;                 // Loop index
   int maxVal;                     // Computed max
   
   cout << "Enter " << NUM_VALS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }
   
   // Determine largest (max) number
   maxVal = userVals.at(0);        // Largest so far
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
   }
   cout << "Max: " << maxVal << endl;
   
   return 0;
}
```
