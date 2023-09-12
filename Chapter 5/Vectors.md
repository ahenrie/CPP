# Vectors in C++

A vector is an ordered list of items of a given data type. Each item in the list is called an element. The line `#include <vector>` is needed to use vectors.

## Vector Formatting

```c++
vector<datatype> vectorName(numElements);
```

The statement above declares a vector with the specified number of elements, each elemet of the specific data type. 

## Accessing Vector Elements

### The Indexing Operator

You can also use the indexing operator (square brackets) to access or change a vector element. The following are (almost) equivalent:

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> oldestPeople(5);  
   int nthPerson;               // User input, Nth oldest person

   oldestPeople.at(0) = 122; // Died 1997 in France
   oldestPeople.at(1) = 119; // Died 1999 in U.S.
   oldestPeople.at(2) = 117; // Died 1993 in U.S. 
   oldestPeople.at(3) = 117; // Died 1998 in Canada
   oldestPeople.at(4) = 116; // Died 2006 in Ecuador

   cout << "Enter N (1..5): ";
   cin  >> nthPerson;

   if ((nthPerson >= 1) && (nthPerson <= 5)) {
      cout << "The #" << nthPerson << " oldest person lived ";
      cout << oldestPeople.at(nthPerson - 1) << " years." << endl;
   }

   return 0;
}
```

![image](https://github.com/ahenrie/CPP/assets/103060170/84f432ad-b35a-40b2-af42-1efb990b47c5)

## Loops and Vectors

A key advantage of vectors becomes evident when used in conjunction with loops. The program below uses a loop to allow a user to enter 8 integer values, storing those values in a vector, and then printing those 8 values.

A vector's size() function returns the number of vector elements. Ex: In the program below, userVals.size() is 8 because the vector was declared with 8 elements.

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   unsigned int i;                 // Loop index
   
   cout << "Enter " << NUM_VALS << " integer values..." << endl;
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

## Vector Initialization

Vectors elements are automatically initialized to 0 during declaration. All of a vector's elements may be initialized to another single value. 
Ex: `vector<int> myVector(3, -1);` creates a vector named myVector with three elements, each with value -1.
Vectors can also be decarled without a specific size, it is inferred.
Ex: `vector<int> carSales = {5, 7, 11};` creates a vector with 3 elements that are already initialized. 
