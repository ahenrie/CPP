# Unit Testing With Functions

- **Definition**: Testing is the process of checking whether a program behaves correctly.
- Challenges:
  - Large programs are harder to test due to potential bugs scattered throughout.
  - Multiple bugs can interact, making debugging complex.
- Good Practice: 
  - Test small parts of the program individually before testing the entire program.
  - This approach helps in finding and fixing bugs more efficiently.

## Unit Testing

- **Definition**: Unit testing is the process of individually testing a small part or unit of a program, typically a function.
- **Testbench** (Test Harness):
  - A separate program whose sole purpose is to check if a function returns correct output values for various input values.
- Each unique set of input values is known as a **test vector**.

## Example: Function HrMinToMin()

- Converts time specified in hours and minutes to total minutes.
- Below is a test harness for the function.

```cpp
#include <iostream>
using namespace std;

// Function converts hrs/min to min
int HrMinToMin(int origHours, int origMinutes) {
   int totMinutes; // Resulting minutes
   
   totMinutes = (origHours * 60) + origMinutes;
   
   return origMinutes;
}

int main() {
   
   cout << "Testing started" << endl;
   
   // Test Vectors
   cout << "0:0, expecting 0, got: "    << HrMinToMin(0, 0)  << endl;
   cout << "0:1, expecting 1, got: "    << HrMinToMin(0, 1)  << endl;
   cout << "0:99, expecting 99, got: "  << HrMinToMin(0, 99) << endl;
   cout << "1:0, expecting 60, got: "   << HrMinToMin(1, 0)  << endl;
   cout << "5:0, expecting 300, got: "  << HrMinToMin(5, 0)  << endl;
   cout << "2:30, expecting 150, got: " << HrMinToMin(2, 30) << endl;
   // Add more test vectors as needed...
   
   cout << "Testing completed" << endl;
   
   return 0;
}
