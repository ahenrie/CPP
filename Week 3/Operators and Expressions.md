# Learning Objectives for C++ Operators and Expressions

## Objective 1: Define the terms operator and operand
- **Operator**: An operator in C++ is a symbol or a token that represents a specific operation to be performed on one or more operands. Operators can perform various tasks like arithmetic, comparison, logical operations, etc.
- **Operand**: An operand is a value or variable that an operator acts upon. It can be a constant, variable, or expression.

## Objective 2: Identify unary, binary, and ternary operators
- **Unary Operator**: A unary operator operates on a single operand. Examples include the unary minus (`-x`), increment (`++x`) or decrement (`--x`) operators.
- **Binary Operator**: A binary operator works on two operands. Examples include addition (`+`), subtraction (`-`), multiplication (`*`), and logical AND (`&&`) operators.
- **Ternary Operator**: The ternary operator (`?:`) is a unique operator in C++ that takes three operands. It is a shorthand way of writing an if-else statement and allows you to conditionally choose between two values.

## Objective 3: Explain prefix, infix, and postfix notation
- **Prefix Notation**: In prefix notation, the operator precedes its operands. For example, in C++, the prefix increment operator would be written as `++x`.
- **Infix Notation**: In infix notation, operators are placed between their operands, which is the common way we write expressions in mathematics. For example, a simple addition would be written as `a + b`.
- **Postfix Notation**: In postfix notation, the operator follows its operands. For example, the postfix increment operator would be written as `x++`.

## Objective 4: Describe the ternary operator in C++
- The ternary operator in C++ is a conditional operator that allows you to perform a conditional test and return one of two values depending on whether the test is true or false. Its syntax is: `condition ? value_if_true : value_if_false`.
- It differs from a `switch` or `if/if-else` statement in that it is an expression, not a statement. This means it can be used in more compact ways when you need to assign a value based on a condition.

```cpp
#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 20;

    int result = (num1 > num2) ? num1 : num2;

    std::cout << "The maximum value is: " << result << std::endl;

    return 0;
}
```

## Objective 5: Explain the difference between bitwise and boolean operators
- **Bitwise Operators**: Bitwise operators perform operations at the binary level on individual bits of data. Examples include `&` (bitwise AND), `|` (bitwise OR), and `^` (bitwise XOR). They are often used for low-level bit manipulation and flag setting.
- **Boolean Operators**: Boolean operators perform logical operations on boolean values (true or false). Examples include `&&` (logical AND), `||` (logical OR), and `!` (logical NOT). They are used for controlling program flow and making decisions based on conditions.

### Why Use Bitwise Operators
1. Speed
2. Space
3. "You must"

### Comparing Bitwise Operators to Logical Operators

| Operator              | Description                               | Example                  | Result (in binary)      | Result (in decimal)     |
|-----------------------|-------------------------------------------|--------------------------|--------------------------|--------------------------|
| `&` (Bitwise AND)     | Bitwise AND operation                    | `5 & 3`                  | `0000 0101 & 0000 0011` | `0000 0001`             |
| `|` (Bitwise OR)      | Bitwise OR operation                     | `5 | 3`                  | `0000 0101 | 0000 0011` | `0000 0111`             |
| `^` (Bitwise XOR)     | Bitwise XOR (exclusive OR) operation    | `5 ^ 3`                  | `0000 0101 ^ 0000 0011` | `0000 0110`             |
| `~` (Bitwise NOT)     | Bitwise NOT (complement) operation      | `~5`                     | `~0000 0101`             | `1111 1010`             |
| `&&` (Logical AND)    | Logical AND operation                     | `true && false`         | -                        | `false`                  |
| `||` (Logical OR)     | Logical OR operation                      | `true || false`         | -                        | `true`                   |
| `!` (Logical NOT)     | Logical NOT operation                     | `!true`                 | -                        | `false`                  |
