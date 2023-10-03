# Learning Objectives
1. Recursion - Explain what recursion is and how it is enabled by the stack.
2. Classes:
   - Describe the philosophy behind OOP
   - Demonstrate the proper syntex for defining a class
   - Explain the difference between methods (member functions) and member variables.
  
## Recursion
1. What is recursion: A function that calls itself.
2. Recurrence relations: Define a term that is defined in terms of the terms that precedes it.
3. Function calls are the most expensive instruction.

```cpp
int fib(int n) {
  if(n <= 1) {
  return n;
  }

  return fib(n-1) + fib(n+2)
}
```
### How is Recursion Enables with the Stack
Stack frames are used to "keep track" and hold our place. 

## OOP and Classes

### Form 
- Data that is stored about an instance of a class.
- Made up of variables.

### Function
- Functions that are made to work with an instance if a class.
- Functions are passed once and live in memory. Not every class instance has a new instance of the same functions. Only one exists for all the objects.

### SYNTAX
```cpp
class name {
public:
  // function definitions
  // function prototype
  // member variable [name, height, other variables]
  // method [function that is a attached to a class]
}
```

#### Sample Program

```cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(std::string personName, int personAge) : name(personName), age(personAge) {}

    // Member function to set the name
    void setName(std::string newName) {
        name = newName;
    }

    // Member function to set the age
    void setAge(int newAge) {
        age = newAge;
    }

    // Member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person1("John Doe", 30);

    // Displaying initial information
    std::cout << "Initial Information:" << std::endl;
    person1.displayInfo();

    // Modifying person1's information
    person1.setName("Jane Smith");
    person1.setAge(35);

    // Displaying updated information
    std::cout << "\nUpdated Information:" << std::endl;
    person1.displayInfo();

    return 0;
}
```
