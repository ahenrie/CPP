# Floating-Point Numbers

A **floating-point number** is a real number that includes a decimal point, which can be positioned anywhere (or "float") within the number. For example, 98.6, 0.0001, or -55.667 are floating-point numbers. 

## Double Variables

A **double variable** is used to store a floating-point number with higher precision. For instance, declaring a double variable is done like this:

```c++
#include <iostream>
using namespace std;

int main() {
   double milesTravel; // User input of miles to travel
   double hoursFly;    // Travel hours if flying those miles
   double hoursDrive;  // Travel hours if driving those miles
   
   cout << "Enter miles to travel: ";
   cin  >> milesTravel;
   
   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph
   
   cout << milesTravel << " miles would take:" << endl;
   cout << "   " << hoursFly << " hours to fly" << endl;
   cout << "   " << hoursDrive << " hours to drive" << endl;
   
   return 0;
}
```

## Selecting Variable Types

When choosing a variable's type, it's important for a programmer to consider the nature of the value that the variable will hold.

- **Integer Variables**: Integer variables are suitable for representing values that are counted, such as 42 cars, 10 pizzas, or -95 days. They are ideal for whole numbers without fractional components.

- **Floating-Point Variables**: Floating-point variables are used for handling measurements, which involve decimal fractions. For example, 98.6 degrees, 0.00001 meters, or -55.667 degrees are best represented using floating-point variables.

Floating-point variables are also useful when working with fractions of countable items. An example would be the average number of cars per household, which could be a decimal value.

By choosing the appropriate variable type, programmers ensure that their code accurately reflects the real-world values and operations they are dealing with.

## Division by Zero in Floating-Point Arithmetic

In regular arithmetic, dividing a nonzero floating-point number by zero is undefined. While many programming languages raise an error when attempting floating-point division by 0, C++ takes a different approach.

C++ does not throw an error for floating-point division by 0. Instead, it handles the operation by producing special values: **infinity** or **-infinity**. The outcome depends on the signs of the operands involved in the division. When you attempt to print a floating-point variable containing infinity or -infinity, you will see `inf` or `-inf` as the output, respectively.

### Special Case: Both Dividend and Divisor are 0

If both the dividend and divisor in a floating-point division are 0, the result will be a "not a number" value. This is indicated by the term **NaN** (not a number), which signifies an unrepresentable or undefined value in computing. When you print a floating-point variable containing NaN, the output will show `nan`.

C++'s handling of these situations can have significant implications when working with floating-point arithmetic, so it's important to be aware of these behaviors.

```c++
#include <iostream>
using namespace std;

int main() {
   double gasVolume;
   double oilVolume;
   double mixRatio;
   
   cout << "Enter gas volume: ";
   cin  >> gasVolume;

   cout << "Enter oil volume: ";
   cin  >> oilVolume;

   mixRatio = gasVolume / oilVolume;
   
   cout << "Gas to oil mix ratio is " << mixRatio << ":1" << endl;
   
   return 0;
}
```

## Manipulating Floating-Point Output

```c++
cout << fixed << setprecision(3) << 3.1244 << endl;
cout << 2.1 << endl;
```







