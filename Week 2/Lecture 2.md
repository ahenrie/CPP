# Lecure 2 of Week 2

## Learning Objectives

1. Explain how binary is used to encode unsigned ints, and the relationship between signed and unsigned ints,
2. Explain what over and underflow are, and when they happend.
3. Identify the 3 components of a floating point number.
4. Explain why care must be taken when working with floating point numbers.

## Two's Complement Representation

The **two's complement** is a binary encoding scheme used for representing both positive and negative integers in computers. It offers an efficient method to handle signed integers within a binary format. Here's how it works:

### Positive Integers

For positive integers, the two's complement representation is identical to the standard binary representation. For instance, the decimal number 5 is represented as `0101` in a four-bit two's complement format.

### Negative Integers

Representing negative numbers using two's complement involves these steps:

1. Calculate the binary representation of the absolute value of the number.
2. Invert (flip) all the bits of the absolute value.
3. Add 1 to the result.

For example, let's represent -5 using a four-bit two's complement:

1. Absolute value of 5 is `0101` (binary).
2. Inverting the bits: `1010`.
3. Adding 1: `1011`.

Hence, -5 is represented as `1011`.

The significance of two's complement lies in its suitability for arithmetic operations. When adding two numbers in this representation, standard binary addition suffices, and any carry-out from the most significant bit is discarded. This property simplifies hardware implementation for addition and subtraction operations in computer systems.

To convert a two's complement binary number back to decimal:

1. If the leftmost bit is 1, the number is negative. Invert all the bits and add 1 to obtain the absolute value in binary form.
2. Convert the absolute binary value to decimal.
3. If the original number was negative, add a negative sign to the decimal value.

For instance, let's convert the binary number `1011` back to decimal:

1. Inverted bits: `0100`.
2. Decimal conversion: 4.
3. Since the leftmost bit was 1, the original number was negative, resulting in -4.

The two's complement representation is widely adopted in computing to efficiently manage negative numbers and execute arithmetic operations, allowing for the seamless integration of signed and unsigned integers in a single binary format.

## Sign-Magnitude Representation

The **sign-magnitude** is a straightforward binary encoding scheme used to represent signed integers in computers. It is characterized by allocating one bit to represent the sign (positive or negative) of the number and the remaining bits to represent the magnitude (absolute value) of the number. Here's how it works:

### Positive Integers

For positive integers, the sign-magnitude representation is straightforward. The sign bit is set to 0, and the remaining bits encode the magnitude of the number in the standard binary form. For instance, the decimal number 5 is represented as `0101` in a four-bit sign-magnitude format.

### Negative Integers

Representing negative numbers using sign-magnitude involves these steps:

1. Determine the absolute value of the negative number.
2. Set the sign bit to 1 to indicate a negative value.
3. Encode the absolute value using the remaining bits in standard binary form.

For example, let's represent -5 using a four-bit sign-magnitude representation:

1. Absolute value of 5 is `0101` (binary).
2. Set the sign bit to 1: `1101`.
3. The representation of -5 is `1101`.

The key feature of sign-magnitude representation is that it clearly indicates the sign of the number by using the leftmost bit (sign bit). However, this simplicity comes at the cost of more complex arithmetic operations compared to other representations like two's complement.

### Underflow and Overflow

In sign-magnitude representation, arithmetic operations like addition and subtraction can lead to **underflow** and **overflow** situations. Underflow occurs when the result of a subtraction operation is too small to be represented within the available bits, leading to an inaccurate representation. Overflow occurs when the result of an addition operation is too large to be accurately represented, causing an overflow of the available bits.

These issues can lead to unexpected results in computations and require careful consideration when using sign-magnitude representation for arithmetic operations.

To convert a sign-magnitude binary number back to decimal:

1. If the leftmost bit is 1, the number is negative. Extract the remaining bits to obtain the magnitude.
2. Convert the magnitude from binary to decimal.
3. If the original number was negative (sign bit is 1), apply a negative sign to the decimal value.

For instance, let's convert the binary number `1101` back to decimal:

1. Leftmost bit is 1, indicating a negative number. Extract the remaining bits: `101`.
2. Decimal conversion of magnitude: 5.
3. Since the leftmost bit was 1, the original number was negative, resulting in -5.

## Floating-Point Values

Floating-point values, commonly referred to as "floats," are a prevalent method of representing real numbers in computing. They are used to represent numbers with fractional parts, including both very large and very small numbers that cannot be easily represented using integers. Floats are employed in various programming languages and systems for mathematical calculations and handling a broad spectrum of numeric data.

The term "floating point" arises from the flexibility of the decimal (or binary) point, which can "float" within the digits of the number, enabling versatile value representation. The IEEE 754 standard is widely adopted for floating-point representation.

Floating-point values consist of two primary components:

1. **Sign**: A single bit indicating the number's sign (positive or negative). Typically, 0 represents positive, and 1 represents negative.

2. **Significand (Mantissa)**: Also called the mantissa or fraction, this part holds the significant digits of the number, including the integer and fractional parts. It's usually stored in binary scientific notation, facilitating efficient storage of a broad range of values.

3. **Exponent**: This part represents the power to which the base (usually 2 for binary representation) is raised. It controls the number's scale or magnitude.

```cpp
#include <iostream>
using namespace std;

int main() {
    float floatValue = 3.14159;  // Single-precision floating-point
    double doubleValue = 123.456789;  // Double-precision floating-point

    cout << "Float Value: " << floatValue << endl;
    cout << "Double Value: " << doubleValue << endl;

    return 0;
}
```
