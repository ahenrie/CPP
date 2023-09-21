# ADT Vectors

## Learning Objectives
1. Describe what a std::vector is.
2. Discuss the advantages and disadvantages that vectors have relative to arrays.
3. Demonstrate the syntax for performing basic operations on a std::vector such as accessing and modifying elements.
4. Identify the basicsparts of a c++ function defention.

## Declaring a Vector
`vector<datatype> vector_name(#)`
- Keyword to declare a vector is vector
- The type of stored data is declared in angle brackets <>
- The name of the vector follows
- The size of the vector is declared following the name inside paranthesis ()

## Vector Methods

# Vector Methods and Operations

| Method/Operation                  | Description                                                |
|-----------------------------------|------------------------------------------------------------|
| `push_back(value)`                | Add an element to the end of the vector.                  |
| `pop_back()`                      | Remove the last element from the vector.                  |
| `size()`                          | Return the number of elements in the vector.              |
| `empty()`                         | Check if the vector is empty (returns a boolean).         |
| `clear()`                         | Remove all elements from the vector.                      |
| `at(index)`                       | Access the element at the specified index with bounds checking. |
| `operator[]`                      | Access the element at the specified index without bounds checking. |
| `front()`                         | Access the first element of the vector.                   |
| `back()`                          | Access the last element of the vector.                    |
| `begin()`                         | Return an iterator pointing to the first element.         |
| `end()`                           | Return an iterator pointing one past the last element.    |
| `insert(position, value)`         | Insert an element at the specified position.              |
| `erase(position)`                 | Erase an element at the specified position.               |
| `resize(new_size)`                | Change the size of the vector.                            |
| `reserve(capacity)`               | Set the capacity of the vector without changing its size. |
| `swap(other_vector)`              | Swap the contents of two vectors.                         |
| `assign(count, value)`            | Replace the vector's contents with `count` copies of `value`. |
| `emplace(position, args...)`      | Construct and insert an element at the specified position. |
| `emplace_back(args...)`           | Construct and append an element to the end of the vector. |
