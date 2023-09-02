# Bitwise Operations

In C++, bitwise operators are used to manipulate individual bits within integers. These operators allow you to perform operations at the binary level. The following are common bitwise operators:

|   Operator   |   Description                                 |
|:------------:|-----------------------------------------------|
| `bitwise-OR`  | Sets a bit to 1 if at least one bit is 1.     |
| `bitwise-AND` | Sets a bit to 1 only if both bits are 1.       |
| `bitwise-XOR` | Sets a bit to 1 if the bits are different.     |
| `bitwise-NOT` | Flips all bits in the operand.                 |
| `shift-right` | Shifts bits to the right by a specified number of positions. |
| `shift-left`  | Shifts bits to the left by a specified number of positions.  |

## Rules for Bitwise OR, AND, and XOR

If either bit or both is 1, then the OR is 1. AND is 1 only if both bits are 1. XOR means "one or the other but not both". In other words, XOR is 1 if and only if the two bits are different. The code below illustrates these operators using C++'s byte type.

- Bitwise OR (`|`): If either bit or both are 1, then the result is 1.
- Bitwise AND (`&`): It is 1 only if both bits are 1.
- Bitwise XOR (`^`): It is 1 if and only if the two bits are different.

### Bitwise Operations Application

The byte type is not considered a numeric type; that is, you can't do arithmetic on byte values, only bitwise operations. You can't even print them directly without converting them to a regular integer type.

The way to interpret the example above is to perform the bitwise operation column-wise. For the OR case, if either bit in the same bit position is a 1, the resulting bit is a 1:

  00101101 
| 01101010
  --------
  01101111

  00101101
& 01101010
  --------
  00101000

  00101101
^ 01101010
  --------
  01000111

## Shift Operators

The shift operators return integers with bits moved a given number of positions either to the right (>>) or left (<<). The bits that "fall off the end" are simply discarded. With a shift-left, the vacated bits on the right are populated with zeroes:

```cpp
auto x = byte(0b00101101);      // 32+8+4+1 = 45
    cout << int(x << 1) << endl;    // 01011010 = 64+16+8+2 = 90
    cout << int(x << 2) << endl;    // 10110100 = 128+32+16+4 = 180
    cout << int(x << 4) << endl;    // 11010000 = 128+64+16 = 208
    cout << int(x << 8) << endl;    // 00000000 = 0
```

## Masking

A "mask" is an integer used to extract or modify selected bits of another integer. For example, to determine whether the bit in position 5 (the 6th position from the right) of the integer n is a 1 or a 0, you can form a mask with a 1 in that position and zeroes elsewhere. This is easily done by shifting the number 1 left by 5 positions:

`unsigned int mask = 1 << 5;  // 000...0100000 (the 1 moved 5 positions to the left)`

## Sample C++ Code for Bitwise Operations

```cpp
#include <iostream>
using namespace std;

int main() {
    auto x = byte(0b00101101);      // 45
    auto y = byte(0b01101010);      // 106

    cout << int(x | y) << endl;     // Bitwise OR
    cout << int(x & y) << endl;     // Bitwise AND
    cout << int(x ^ y) << endl;     // Bitwise XOR

    cout << int(~x) << endl;        // Bitwise NOT

    auto result1 = x << 1;          // Shift-left by 1 position
    auto result2 = x << 2;          // Shift-left by 2 positions
    auto result3 = x << 4;          // Shift-left by 4 positions
    auto result4 = x << 8;          // Shift-left by 8 positions

    cout << int(result1) << endl;
    cout << int(result2) << endl;
    cout << int(result3) << endl;
    cout << int(result4) << endl;

    auto result5 = x >> 1;          // Shift-right by 1 position
    auto result6 = x >> 4;          // Shift-right by 4 positions
    auto result7 = x >> 8;          // Shift-right by 8 positions

    cout << int(result5) << endl;
    cout << int(result6) << endl;
    cout << int(result7) << endl;

    return 0;
}
