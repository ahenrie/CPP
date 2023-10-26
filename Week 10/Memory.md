# Learning Objectives

1. Explain the difference between statically and dynamically allocated memory,
2. Identify the differences between the heap and the stack
3. Demonstrate how to use new and delete to manage dynamically allocated memory.
4. Explain the role pointers in dynamic dynamic memory management. 

## Stack vs Heap

1. Stack memory saves data in a first in first out manner. 
  - Fast access
  - Limited size
  - Memory is managed automatically
  - Used for temporary variables, local to functions

2. Dynamic memory is like a hotel. Functions can requests memory space when it needs it and releases it when it is done.
     - Slower access
     - Can grow or shrink as needed
     - Manual memory mangement
     - Variables can persist beyond the scope of functions

## Memory Allocation (MALLOC)


```cpp
#include <iostream>

void exampleFunction(int size) {
    // Declare a pointer to int (or any data type you need)
    int *dynamicArray;
    
    // Allocate memory using new
    dynamicArray = new int[size];
    
    // Use the allocated memory as needed
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 2;
        std::cout << dynamicArray[i] << " ";
    }
    
    // Don't forget to delete the allocated memory when you're done
    delete[] dynamicArray;
}

int main() {
    int size = 5; // Number of elements in the dynamically allocated array
    exampleFunction(size);
    return 0;
}

```
