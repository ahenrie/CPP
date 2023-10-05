# Learning Objectives
1. Explain the difference between structs and classes in C++.
2. Demonstrate the use of the implicit "this" parameter and explain its role in OOP in C++.
3. Use constructors to initialize a class.

## Public vs Private Members in a Class

In object-oriented programming (OOP), classes are used to define objects and encapsulate their data and behavior. Access control modifiers like `public` and `private` help in defining the visibility and accessibility of class members (data members and member functions/methods) from outside the class.

### `public` Members

Members declared as `public` are accessible from any part of the program, including outside the class. This means that you can access `public` members directly using the object of the class. Public members are typically used to represent the interface of the class, which is how external code interacts with the class.

### `private` Members

Members declared as `private` are only accessible within the class. They cannot be accessed from outside the class, not even by objects of the class. Private members are hidden from external access and can only be accessed by member functions of the same class.

### Why it is Useful

- **Encapsulation**: By marking certain members as private, you encapsulate the internal state of the object. This means that the implementation details of the class are hidden from the outside world, providing a clear separation between the interface and the implementation.

- **Data Hiding**: Private members prevent external code from directly modifying the internal state of the object. This helps maintain data integrity and ensures that the internal representation of the object is consistent.

- **Controlled Access**: By using access control modifiers, you can control how objects interact with each other. Public members define the class interface, allowing safe and controlled access to the class functionality.

- **Security**: Private members enhance the security of the program by preventing unauthorized access and modification of sensitive data.

## Strcut VS Class

1. By default everything in a class in private.
2. By default everything in a struct is public.

## Inline Functions in C++

- **Inline Functions**: In C++, class methods are often declared as inline functions. Inline functions are expanded in place at the point of their call during compilation, eliminating the overhead of a regular function call.

- **Advantages**:
  - **Faster Execution**: Inline functions reduce function call overhead, leading to faster execution of code.
  
- **Considerations**:
  - **Code Size**: While inline functions improve speed, be mindful of code size. Each insertion of an inline function increases the machine code size.
