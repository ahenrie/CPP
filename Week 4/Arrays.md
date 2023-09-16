# Arrays and Some Vectors

## Learning Objectives

1. Explain how C++ arrays are represented and stored in memory.
2. Demonstrate the syntax for creating and referencing an array.
3. Explain the "starting address and offset" method used by C++ to index data in an array.
     - Explain why this approach can be dangerous.
4. Explain why an array name/identifier is not a pointer.

---

## What is an Array?

An array in C++ is a collection of elements of the same data type, stored in contiguous memory locations, and accessed using a common identifier. Each element in an array is called an array element, and they are arranged in a specific order. Arrays provide a convenient way to store and manipulate multiple values of the same type under a single name.

In C++, arrays are zero-indexed, which means the first element is at index 0, the second element is at index 1, and so on. You can access elements of an array using their index, allowing you to read or modify the individual values stored in the array.

---

## How Memory Works with Arrays

When you create an array in C++, the compiler allocates a block of contiguous memory to hold all the elements of the array. The size of this memory block is determined by the number of elements in the array and the size of each element's data type. Here's a basic representation of how memory works for an array:

- Each element of the array is stored in a consecutive memory location.
- The elements are adjacent to each other in memory, allowing for efficient indexing.

To access a specific element, C++ calculates its memory address based on its index and the size of each element, and you can think of this calculation as follows:
- `base_address` is the memory address of the first element.
- `element_size` is the size (in bytes) of each element.
- `index` is the position of the element you want to access.

This memory layout allows for fast random access to elements within the array, as you can directly compute the memory location of any element based on its index.

## Using & For Referencing Memory Locations
```cpp
#include <iostream>

int main() {
    int myVariable = 42; // Declare an integer variable

    // Print the address of the variable
    std::cout << "Address of myVariable: " << &myVariable << std::endl;

    return 0;
}
```

## Dereferencing
In C++, dereferencing refers to the process of accessing the value that a pointer is pointing to.
Pointers are variables that store memory addresses, and when you dereference a pointer, you retrieve the data stored at that memory address.

## Dereferencing With *
```cpp
#include <iostream>

int main() {
    int myVariable = 42; // Declare an integer variable
    int *ptr = &myVariable; // Declare a pointer and assign the address of myVariable

    // Dereferencing the pointer to access the value
    int value = *ptr;

    // Printing the value and the pointer's address
    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer Address: " << ptr << std::endl;

    return 0;
}
```


## Data Structures Review

| Data Structure          | Size (Typical) | Description                                   |
|-------------------------|----------------|-----------------------------------------------|
| `bool`                  | 1 byte         | Boolean data type, can be `true` or `false`.  |
| `char`                  | 1 byte         | Character data type (ASCII or UTF-8).         |
| `short`                 | 2 bytes        | Short integer data type.                      |
| `int`                   | 4 bytes        | Integer data type.                            |
| `long`                  | 4 or 8 bytes   | Long integer data type (platform-dependent).  |
| `long long`             | 8 bytes        | Long long integer data type.                  |
| `float`                 | 4 bytes        | Single-precision floating-point number.       |
| `double`                | 8 bytes        | Double-precision floating-point number.       |
| `long double`           | 8, 12, or 16 bytes | Extended-precision floating-point number. |
| `std::string` (STL)     | Varies         | String data type from the C++ Standard Library. |
| `std::vector` (STL)     | Varies         | Dynamic array from the C++ Standard Library.   |
| `std::deque` (STL)      | Varies         | Double-ended queue from the C++ Standard Library. |
| `std::list` (STL)       | Varies         | Doubly-linked list from the C++ Standard Library. |
| `std::map` (STL)        | Varies         | Associative container from the C++ Standard Library. |
| `std::set` (STL)        | Varies         | Associative container from the C++ Standard Library. |
| `std::unordered_map` (STL) | Varies      | Unordered associative container from the C++ Standard Library. |
| `std::unordered_set` (STL) | Varies      | Unordered associative container from the C++ Standard Library. |
| `std::array` (STL)      | Varies         | Fixed-size array from the C++ Standard Library. |
| `std::tuple` (STL)      | Varies         | Heterogeneous container from the C++ Standard Library. |
| `std::queue` (STL)      | Varies         | Queue from the C++ Standard Library. |
| `std::stack` (STL)      | Varies         | Stack from the C++ Standard Library. |
| `std::priority_queue` (STL) | Varies   | Priority queue from the C++ Standard Library. |
| `std::bitset` (STL)     | Varies         | Bitset container from the C++ Standard Library. |
| `struct`                | Varies         | User-defined data structure.                  |
| `class`                 | Varies         | User-defined data structure with encapsulation. |
