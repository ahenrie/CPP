# Order of Evaluation

## Precedence Rules in C++

Precedence rules dictate the order in which operators are evaluated within an expression. In C++, these rules ensure that operations are performed in a specific order. Here's a breakdown of the precedence rules for arithmetic, logical, and relational operators:

| Operator/Convention | Description                                  | Explanation                                       |
|---------------------|----------------------------------------------|---------------------------------------------------|
| ( )                 | Items within parentheses are evaluated first | In `(a * (b + c)) - d`, `+` is evaluated first, then `*`, then `-`. |
| !                   | Logical NOT (!) is next                      | `!x || y` is evaluated as `(!x) || y`.           |
| * / % + -           | Arithmetic operators (using their precedence rules) | `z - 45 * y < 53` evaluates `*` first, then `-`, then `<`. |
| < <= > >=           | Relational operators                         | `x < 2 || x >= 10` is evaluated as `(x < 2) || (x >= 10)` because `<` and `>=` have precedence over `||`. |
| == !=               | Equality and inequality operators            | `x == 0 && x >= 10` is evaluated as `(x == 0) && (x >= 10)` because `<` and `>=` have precedence over `&&`. `==` and `!=` have the same precedence and are evaluated left to right. |
| &&                  | Logical AND                                  | `x == 5 || y == 10 && z != 10` is evaluated as `(x == 5) || ((y == 10) && (z != 10))` because `&&` has precedence over `||`. |
| \|\|                | Logical OR                                   | `||` has the lowest precedence of the listed arithmetic, logical, and relational operators. |

### Precedence Rules in a Tree

![image](https://github.com/ahenrie/CPP/assets/103060170/60c08d3d-081f-4b2b-8832-662c1e09adb6)

```c++
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15, x = 8, y = 12, z = 18;

    // Parentheses ()
    int result1 = (a * (b + c)) - x;

    // Logical NOT (!)
    bool isTrue = true;
    bool isFalse = false;
    bool result2 = !isTrue || isFalse;

    // Arithmetic Operators (* / % + -)
    int result3 = z - 45 * y + 53;

    // Relational Operators (< <= > >=)
    bool isLess = x < 2 || x >= 10;

    // Equality and Inequality Operators (== !=)
    bool isEqual = x == 5 && x != 10;

    // Logical AND (&&)
    bool result4 = (x == 5) && (y == 12) && (z != 10);

    // Logical OR (||)
    bool result5 = (a > 2) || (b < 5);

    // Output the results
    cout << "Result 1 (Parentheses): " << result1 << endl;
    cout << "Result 2 (Logical NOT): " << result2 << endl;
    cout << "Result 3 (Arithmetic Operators): " << result3 << endl;
    cout << "Result 4 (Relational Operators): " << isLess << endl;
    cout << "Result 5 (Equality and Inequality): " << isEqual << endl;
    cout << "Result 6 (Logical AND): " << result4 << endl;
    cout << "Result 7 (Logical OR): " << result5 << endl;

    return 0;
}
```
