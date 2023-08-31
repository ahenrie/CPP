# Type Conversions in C++

In various calculations, it's common to work with a mix of integer and floating-point numbers. Consider a scenario where approximately 50.4% of human births are males. If you want to calculate the number of expected males in `numBirths` births, you might use the expression `0.504 * numBirths`. Here, if `numBirths` is an `int` variable (since birth count is a whole number), the expression involves combining a floating-point value with an integer.

### Understanding Type Conversion

Type conversion involves transforming data from one data type to another. For instance, converting from an `int` to a `double`. The C++ compiler automatically handles several common conversions between `int` and `double` types, and these are known as **implicit conversions**.

- For arithmetic operators like `+` or `*`, if either operand is a `double`, the other operand is automatically converted to a `double`. The operation is then carried out as a floating-point operation.
- During assignments, the type of the right side is converted to match the type of the left side.

### Examples of Conversion

- **int-to-double Conversion**: Converting from `int` to `double` is straightforward. For instance, `25` becomes `25.0`.

- **double-to-int Conversion**: Converting from `double` to `int` involves dropping the fraction. For example, `4.9` becomes `4`.

![image](https://github.com/ahenrie/CPP/assets/103060170/2e30c6fa-cc57-490f-ab2f-451a76e4b9f9)

Type conversions enable you to work with mixed data types in calculations without manually casting values. However, it's important to be aware of how these conversions occur to ensure accurate and expected results.

## Type Casting in C++

In programming, there are situations where explicit type conversion is necessary. This occurs when you need to convert a value from one data type to another. For instance, you might require a floating-point result from the division of two integers. To achieve this, you'd convert at least one of the integers to a `double` to ensure floating-point division takes place, rather than integer division.

### Significance of Type Casting

Type casting is the process of intentionally converting a value from one data type to another. It's employed to ensure a specific type of operation or desired outcome.

### Using the `static_cast` Operator

The `static_cast` operator is used for type casting in C++. This operator follows the format `static_cast<type>(expression)`. Here, `type` represents the target data type, and `expression` is the value you wish to convert.

For example, if you have an integer variable `myIntVar` with a value of 7, using `static_cast<double>(myIntVar)` would transform the integer value `7` into the floating-point value `7.0`.

Type casting aids in achieving accurate calculations and desired behavior in your program. However, prudent usage is essential to avoid unexpected consequences or precision loss.

Remember, type casting can be a powerful tool when applied thoughtfully and appropriately.

```c++
#include <iostream>
using namespace std;

int main() {
   int kidsInFamily1;       // Should be int, not double
   int kidsInFamily2;       // (know anyone with 2.3 kids?)
   int numFamilies; 
   
   double avgKidsPerFamily; // Expect fraction, so double

   kidsInFamily1 = 3;
   kidsInFamily2 = 4;
   numFamilies = 2; 
   
   avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2)
                      / static_cast<double>(numFamilies);
   
   cout << "Average kids per family: " << avgKidsPerFamily << endl;
   
   return 0;
}
```

## Common Errors

![image](https://github.com/ahenrie/CPP/assets/103060170/9d673b05-e0c3-4c6e-91d4-952678431d06)

```c++
#include <iostream>
using namespace std;

int main() {
   int kidsInFamily1;       // Should be int, not double
   int kidsInFamily2;       // (know anyone with 2.3 kids?)
   int numFamilies; 

   double avgKidsPerFamily; // Expect fraction, so double

   kidsInFamily1 = 3;
   kidsInFamily2 = 4;
   numFamilies = 2; 

   avgKidsPerFamily = (kidsInFamily1 + kidsInFamily2) / numFamilies;

   // Should be 3.5, but is 3 instead
   cout << "Average kids per family: " << avgKidsPerFamily << endl;

   return 0;
}
```
