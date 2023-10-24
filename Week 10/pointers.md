# Learning Objectives

1. Define a pointer.
2. Explain why pointers are useful.
3. Demonstrate how pointers can be used to do things that would be impossible otherwise.
4. Explain the relationships between pass by reference and pointers.

## What are Pointers

Global variables make sense at times, but not always the right solution. Using global variables in C++ is discouraged because they make code harder to understand, maintain, and debug. They can lead to issues such as namespace pollution, lack of encapsulation, and difficulties in testing. 

The `&` is used to pass the address of a variable. 
The `*` is a pointer or a data type that stores the location of a variable.
  - All pointers are the same size as they represent the first address or the beginning of the memory locations that store whatever is being referenced.
  - Allows as many aliases as we want

### Dereferencing 

Using the `*` on the pointer variable we can get the data inside the memory is points to. 

Dereference needs to happen first when working with the data in the data structure. 

#### EX
```cpp
void doSomehting(int* aParameter){
    (*aParameter)++;                 // Dereference before performing operation to access the data. 
    return;
}
```

### Setting Up a Pointer
```cpp
#include <iostream>

using namespace std;

int main() {
  int aVariable = 42;
  int* anIntPntr = &Variable;

  cout << amIntPntr << " " << &aVariable << endl;
}
```

## Pointer Use Cases

1. Pointer can point to many different things
2. Many things, one at a time, can point to pointers in a sense. A lit of pointers can be used to be used as a index for a list for sorting. 
