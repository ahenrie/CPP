# Learning Objectives

1. Describe the relationship between file streams, string streams, and cin/cout
2. Demonstrate the use of file streams and string streams.

## iStream
A class called iStream is used for input streams. 
EX: `cin >> aString` is an object with an overloaded operator. 

## oStream
A class defined for managing unput strings. 

### EXAMPLE

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
  const int numbGrades = 10;
  vector <double> grades;

  for (int i = 0; i < numGrades; i++) {
    cin >> grades.at(i);
  }

  double average = 0;
  double sum = 0;
  

  return 0;
}
```
