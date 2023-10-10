# Understanding the `this` Implicit Parameter

In C++, `this` is a keyword used to refer to the current instance of the class. It acts as an implicit parameter to all non-static member functions. Understanding how `this` works is crucial for writing clear and efficient object-oriented code.

## **Purpose of `this` Keyword**

- **Differentiating Local and Instance Variables:**
  - `this` helps differentiate between local variables (within a method) and instance variables (belonging to the class). When a local variable has the same name as an instance variable, using `this` resolves the ambiguity.

- **Accessing Instance Members:**
  - `this` allows accessing instance variables and methods within the class, even if they have the same names as local variables or method parameters. It explicitly refers to the object on which the method was invoked.

## **Usage Examples**

### **1. Differentiating Local and Instance Variables**

```cpp
class Example {
    int number; // instance variable
    
public:
    void setNumber(int number) {
        this->number = number; // using 'this' to refer to the instance variable
    }
};
