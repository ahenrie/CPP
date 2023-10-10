# Classes and Objects Cont

## Constructors

The whole point of a constructor is to contruct an object. There we can do initialization.
If we do not do it ourselves, the compiler will generate a default constructor that basically does nothing.
If I have class that is made from other classes for datamembers such as string, the defualt contructor will be constructed for that datamember. In the case of a string, it is empty.

```cpp
#include <iostream>
#include <string>

using namespace std;

class Human{
public:
  // Constructor has no return type and the name of the constructor must be the name of class. THE COMPILER WILL NOT USE DEFAULT CONSTTRUCT 
  Human(){
    ageInYears = 0;
    heightInMeters = 0;
    
}
// alternate constructor that contructs if and only if the argument theName is passed.
  Human(string theName){
    //Human(); the constuctor can be called to inherit so ageInYears and heightInMeters is not needed as it inherits from the Human() constructor (constructor calling a constructor)
    ageInYears = 0;
    heightInMeters = 0;
    name = theName;
}
  int Age(){
    return ageInyears;
}
void Age(int newAgeInYears);

private:
  string name;
double heightInMeters;
int ageInYears;



};

void Human::Age(int newAgeInYears){
  ageInYears = newAgeInYears;
}

int main(){
Human aHuman;
cout << aHuman.Age() << endl;
return 0;
}

```

## Constructor Initializer List

Is a list of things we want to happen before the constructor executes. The statment or list of statements is placed after the parameters of the constructor and a ":".

## Private Constuctors

Useful when the constructor is used inside a class. 
