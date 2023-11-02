# OOP Cont

1. Friend Class --> A function that has access to the private data memebers of the class it belongs to.

``` cpp
class MyClass {
private:
    int privateMember;

public:
    MyClass(int value) : privateMember(value) {}

    // Declaration of the friend function
    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj) {
    std::cout << "Accessing private member from friend function: " << obj.privateMember << std::endl;
}

int main() {
    MyClass myObj(42);
    friendFunction(myObj); // Output: Accessing private member from friend function: 42
    return 0;
}

```

2. Coercion: automatic or implicit conversion of one data type to another.
