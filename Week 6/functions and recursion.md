# Learning Objectives
1. Identify the parts of a function definition
2. Explain the difference between a function prototype and  function definition
3. Explain the form of functions of the call stack
4. Demonstrate the differene between the pass by value and by reference
5. Define recursion

**Call Stack**:  It is a region of memory that keeps track of the execution context or state of a program. 
  - The call stack operates on a last-in, first-out (LIFO) basis, which means that the most recently called function or procedure is the first one to be removed.

**Stack Frame**: Section of the stack that is allocated for a function to consume. Stack pointer keeps track of variable managment.
  - The most recently called function has a stack frame allocated on top of the stack.
  - As a function has a succesfful return and completes, the stack fram is popped off the stack.

**Pass by Value**: method of passing data to functions or methods in computer programming. In this parameter passing technique, a copy of the actual data (the value) is passed to the function, rather than a reference or pointer to the original data.
  - Parameters: Local variables that store the information from the argument
  - Function Body: The statement(s) that are executed when the function is called.

**Pass by Reference**: a parameter passing technique in computer programming where a reference to the original data, rather than a copy of the data, is passed to a function or method. This means that any modifications made to the parameter within the function directly affect the original data outside of the function. Pass by reference is often used to efficiently work with large data structures or to allow a function to modify the values of its arguments.

```c++
#include <iostream>

// Function that takes an integer parameter by value
void modifyValue(int x) {
    x = x + 1; // Changes made to 'x' do not affect the original value
}

int main() {
    int originalValue = 5;
    
    // Calling the function with 'originalValue' as an argument
    modifyValue(originalValue);
    
    // Printing the original value
    std::cout << "Original Value: " << originalValue << std::endl;
    
    return 0;
}
```
