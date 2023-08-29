# Arithmetic Expressions

## Sample Arithmetic Program - Leasing Cost
```c++
#include <iostream>
using namespace std;

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months
*/

int main() {
   int downPayment;
   int paymentPerMonth;
   int numMonths;
   int totalCost;  // Computed total cost to be output

   cout << "Enter down payment: ";
   cin  >> downPayment;

   cout << "Enter monthly payment: ";
   cin  >> paymentPerMonth;

   cout << "Enter number of months: ";
   cin  >> numMonths;

   totalCost = downPayment + (paymentPerMonth * numMonths);

   cout << "Total cost: " << totalCost << endl;

   return 0;
}
```

## C++ Arithmetic Style

It's a good idea to add a single space around operators to enhance readability. For example, write `numItems + 2` instead of `numItems+2`. However, there's an exception for the minus sign when used to indicate negativity, like in `xCoord = -yCoord`. This use of minus (`-`) as a negative is called *unary minus*.

## Compound Operators

Compound operators are special shorthand notations used to efficiently update variables. For instance, `userAge += 1` is a shorter way of writing `userAge = userAge + 1`. Similarly, other compound operators include `-=`, `*=`, `/=`, and `%=`.
