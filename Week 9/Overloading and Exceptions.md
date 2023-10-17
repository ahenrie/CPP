# Overloading and Using Exceptions

1. Demonstrate operator overloading and disucss its pros and cons
2. Implement an overloaded operator as both a method and as a friend function
3. Identify and explain implicit type conversion
4. Describe exception handling and utlizie it in C++
5. Use a try block ot manage the potential occurence of an exception

## Static Data Members and Methods

Static only allows one instance of the variable at all times. 
- A way to share information between function calls.
- Allows functions to communicate.
- It is global in the sense that it persists after the function call ends, but the scope changes as it is passed to other functions.
- A static method is a method that will not change instance data members or objects. It allows for the creation of utility functions.

## Use of Assert

Assert is a preprocessor macro for debugginf purposes. If the condition is not true in the assert, the abort() funciton is called. 

## Operator Overloading

Allows the programmer to define the behavior of operators for user-defined data types, including classes and structs. There is still an implicit parameter.

### Example 

The "+" operator is overloaded when used with strings.

```cpp
"string1" + "string2"
cout << "a" << "b"
```

## Friend Functions

A function that has access to private data members that is not necessarily part of the class. 
It allows for coercion: conversion of one data type to another.
