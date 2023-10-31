# Destructors

1. Understand when a destructor is called
2. Copy instructor
3. Copy assignment operator

dynamically allocated memory uses the heap and `New` keyword to ensure the heap is being used. 

## Example - Strings

Deep Copy - A copy is made of what a pointer points at. 
Shallow Copy - A copy of an object is made, pointer and all. (Can lead to memory leaks and multiple pointers pointing to the same address). It performs a member-wise copy. 

## What is a Destructor

1. It is the undoing of of the constructor when an object goes out of scope (when we do not want to use it)
  -  Static objects are automatically deconstructed when the scope is left.
  -  `delete []` calls the destructor on an object

### Example

```cpp

```
