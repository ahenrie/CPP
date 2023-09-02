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

### Rules for Bitwise OR, AND, and XOR

- Bitwise OR (`|`): If either bit or both are 1, then the result is 1.
- Bitwise AND (`&`): It is 1 only if both bits are 1.
- Bitwise XOR (`^`): It is 1 if and only if the two bits are different.

|   x   |   y   |  x | y  |  x ^ y  |
|:-----:|:-----:|:---:|:---:|:-------:|
|   0   |   0   |  0  |  0  |    0    |
|   0   |   1   |  1  |  0  |    1    |
|   1   |   0   |  1  |  0  |    1    |
|   1   |   1   |  1  |  1  |    0    |

### Sample C++ Code for Bitwise Operations

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
