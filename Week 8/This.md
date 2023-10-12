# This in Objects

When functions need to act on or with an object, it is passed as a parameter to the function. 

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int num;

    void setNum(int n) {
        num = n;
    }

    void printNum() {
        cout << "Value inside the object: " << this->num << endl;
    }
};

void modifyObject(MyClass* obj, int newValue) {
    obj->setNum(newValue);
}

int main() {
    MyClass myObj;
    myObj.setNum(42);

    cout << "Value before modification: " << myObj.num << endl;

    // Passing object to the function
    modifyObject(&myObj, 100);

    cout << "Value after modification: " << myObj.num << endl;

    // Using member function with 'this'
    myObj.printNum();

    return 0;
}
```
