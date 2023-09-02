# Switch Statements

While developing code, it is a good idea to include the statement assert(false); in the default case of a switch if it is not supposed to go there (meaning, the previous cases are intended to cover all possibilities). This is an effective early bug-catching strategy.

Switch statements are control structures in C++ that allow for the execution of different code blocks based on the value of a variable. They provide a clear and concise way to represent multi-branch behavior, where a variable is compared to constant values. 

## Switch Statement Syntax

The basic syntax of a switch statement in C++ is as follows:

```cpp
switch (expression) {
    case constant1:
        // Code to execute when 'expression' matches 'constant1'
        break;
    case constant2:
        // Code to execute when 'expression' matches 'constant2'
        break;
    // Add more cases as needed
    default:
        // Code to execute if 'expression' does not match any 'case'
}
```
## Multi-branch if-else Statement

A switch statement can be written using a multi-branch if-else statement, but the switch statement may make the programmer's intent clearer.

```cpp
if (dogYears == 0) {           // Like case 0
   // Print 0..14 years
}
else if (dogYears == 1) {      // Like case 1
   // Print 15 years
}
...
else if (dogYears == 5) {      // Like case 5
   // Print 37 years 
}
else {                         // Like default case
   // Print unknown
}
```

## Switch Statement General Form

A switch statement in C++ is a control structure used for multi-branch behavior based on the value of an expression. It has a specific form and set of rules:

### Expression Type

- The expression used in a switch statement should be of an integer or character type. It cannot be a string or a floating-point type.

### Case Expressions

- Each `case` in a switch statement must have a constant expression. This means that the cases should use values like integers (e.g., 2) or characters (e.g., 'q') as constant expressions. A case expression cannot be a variable or a more complex expression.

### Order of Cases

- The order in which you write the cases in a switch statement does not matter as long as you include `break` statements at the end of each case. The program will execute the first matching case and then jump to the end of the switch statement. However, it's considered good style to organize cases logically.

### Default Case

- It's a good practice to always include a `default` case in a switch statement. The `default` case is executed when none of the other cases match the value of the expression. Having a `default` case acts as a safety net to catch unexpected values. 

### Avoid Missing Cases

- Programmers should be cautious to ensure that all possible cases are covered in a switch statement. It's easy to assume that all cases are covered, only to later discover that some case was missing. To avoid this, always include a `default` case, even if it's empty.

Here's an example of a switch statement that follows these rules:

```cpp
switch (dayOfWeek) {
    case 0:
        // Code for Sunday
        break;
    case 1:
        // Code for Monday
        break;
    // Add more cases as needed
    default:
        // Code for other days or unexpected values
}
```

## Omitting the Break Statement

In a switch statement, omitting the `break` statement for a particular `case` will result in the execution of statements within the next `case`. This behavior is often referred to as "falling through." While it might seem like an error, it can be useful when multiple cases should execute the same statements.

### Use Cases for Omitting `break`

Consider a scenario where you want to execute the same code for multiple cases. For example, let's say you have cases 0, 1, and 2, and you want the same code to execute for all these cases. Omitting the `break` statement after each of these cases can help avoid duplicating the same code.

```cpp
#include <iostream>
using namespace std;

int main() {
   int dogAgeYears;
   int dogAgeMonths;

   cout << "Enter dog's age (in years): ";
   cin >> dogAgeYears;

   if (dogAgeYears == 0) {
      cout << "Enter dog's age in months: ";
      cin  >> dogAgeMonths;

      switch (dogAgeMonths) {
         case 0:
         case 1:
         case 2:
            cout << "That's 0..14 human months." << endl;
            break;

         case 3:
         case 4:
         case 5:
         case 6:
            cout << "That's 1..5 human years." << endl;
            break;

         case 7:
         case 8:
            cout << "That's 5..9 human years." << endl;
            break;

         case 9:
         case 10:
         case 11:
         case 12:
            cout << "That's 9..15 human years." << endl;
            break;

         default:
            cout << "Invalid input." << endl;
            break;
      }
   }
   else {
      cout << "FIXME: Do earlier dog year cases." << endl;
      switch (dogAgeYears) {
      }
   }

   return 0;
}
```
