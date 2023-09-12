# Resizing Vectors

Using the resize(N) function, vectors can be resized. `someVector.resize(10)` will resize the vector to 10 elements (0 - 9).

![image](https://github.com/ahenrie/CPP/assets/103060170/ae15bbee-8a43-42c7-999c-21b22e2e5885)

## Resizing Based On Input

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals; // No elements yet
   int numVals;
   unsigned int i;
   
   cout << "Enter number of integer values: ";
   cin >> numVals;
   
   userVals.resize(numVals); // Allocate elements
   
   cout << "Enter " << numVals << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
```
