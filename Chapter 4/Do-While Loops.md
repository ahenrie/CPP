# Do-While Loops

A do-while loop is a loop construct that first executes the loop body's statements, then checks the loop condition.

```c++
do {
  // Loop body
} while (LoopExpression);
```

## Example 

```c++
#include <iostream>
using namespace std;

int main() {
  char fill;
 
  fill = '*';
 
  do {
     cout << fill << fill << fill << endl;
     cout << fill << fill << fill << endl;
     cout << fill << fill << fill << endl;
    
     cout << "Enter char (q to quit): ";
     cin >> fill;
     cout << endl;
  } while (fill != 'q');
 
  return 0;
}
```
