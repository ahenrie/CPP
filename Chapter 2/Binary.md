# Binary

## Understanding Binary Numbers in C++

When programming, we often naturally think in terms of base ten numbers (decimal numbers). However, a compiler has to allocate a finite number of bits (e.g., 32 bits) for a variable, and this bit quantity restricts the range of numbers that the variable can represent. Therefore, having some insight into how the number of bits influences the range of values is valuable.

### Binary Representation

In the realm of computing, memory is composed of individual bits, which can hold values of either 0 or 1. This forms the foundation of a processor's storage mechanism. As a result, computers use base 2 numbers, referred to as **binary numbers**, to represent values.

Contrary to the familiar base 10 (decimal) numbering system where each digit ranges from 0 to 9 and each digit's place is weighted by increasing powers of 10, binary numbers utilize only two digits (0 and 1). Each place in a binary number is weighted by increasing powers of 2.

### Example Comparison

Let's compare a decimal number and its binary counterpart:

- Decimal Number: **476**
- Binary Number: **111011100**

In the decimal number, each digit's position is weighted by increasing powers of 10 (10^0, 10^1, 10^2). Similarly, in the binary number, each digit's position is weighted by increasing powers of 2 (2^0, 2^1, 2^2, ...).

### Working with Binary in C++

In C++, you can work with binary numbers through various mechanisms like bitwise operators and bit manipulation. Understanding binary representation can help you efficiently handle low-level operations in your code.

Remember, delving into binary representation provides insight into how computers store and process information at a fundamental level, which is crucial for effective programming and optimizing your code.

```c++
#include <iostream>
#include <bitset>

int main() {
    // Working with binary numbers
    int binaryNumber = 0b101010; // Prefix '0b' indicates binary literal
    std::cout << "Binary number: " << std::bitset<6>(binaryNumber) << std::endl;

    // Converting binary to decimal
    std::bitset<6> binaryValue("101010");
    int decimalValue = binaryValue.to_ulong();
    std::cout << "Decimal value: " << decimalValue << std::endl;

    return 0;
}
```
