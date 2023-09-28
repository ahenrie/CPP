# Midterm Prep

How do we store integers with binary - base 2 binary.
How do we store signed integers with binary - 2's compliment.
What is overflow - 
What is underflow - 
What about fractional values? - We use a variant of scientific notation using a power of two instead of a power of 10 (mantisa exponent) that gives us the ability to spread out the 4 billion number of values.
What has to happen when we want to store an infinite number of values using a finite number of memory? We round.
Whenever we are using floating point values, we need to be careful doing comparisions. 
Look at the difference of two floating point numbers and use absolute value to compare to some delta  abs(a-b) < Delta
Brush up on scientific notation
Arithmetic operators
Char is an 8-bit int
Logical operators: <, > <=, >=, !=, and, or, not
Bitwise operators: do the same but act on each bit at a time
Bitshifting: a << 2 (shiflt left by 2 bits which is a multiplication of powers of 2, in this case 4 since 2 to the power of 2 is 4.), >> 4 (shift right by 4)
  - Bitshifting can cause the value to be undefined. If we shift too many bits past the size of the value.
  - Two ways to shift to the right, logical and arithmetic. (get to know both)

Switch statements:
switch( integer value) {
  case a:
    do something;
    break;
  case b:
    do something;
    break;
  case c:
    do something;
    break;
  default:
}

Ternary Operator--> (expression)?a:b
  If expression returns true, a is returned, if false, b is returned.

Boolean exoressions: 
  Short circuit evaluating: (a > b || a > c), if a > b then the whole expression ends after a > b. Resulting in the expression ending early. 

Looping:
  Do while: Always executes atleast once
  While: is more generic as it can be set up to exectuted atleast once or 0 times. 
  For: Are more robusts
  *** Infinite loops

Arrays: type name_of_array[size of array]
      Ex --> type name2[] = "Frank "
      ***C-strings: An array of characters with a terminating character.

       Multi-Dimmensional Arrays: type name[row] column
         - C++ does rowwise storage of multi-dimmensional arrays.
         - Each row is an element

Functions:
  return_value_type name (parameters){
    body
  }

  -Declaration or prototype EX: void myFunction(int, double)

  - Passy by value makes a copy
  - Pass by reference uses the address
  - Default parameter: int add3(int one, int two, int three = 0) Three is a default parameter. If it is not specified when the parameters are passed during the function call, then the parameter takes on the default value that is specified.

Mult-file Compilations:
  - .h files or header files can be included to bring in declarations. EX: `#include "a.h"`
  - header guards

Pre and Post Increment Operators
Pre --> adds 1 to the variable before it is used. ++i
Post --> adds 1 to use the variable after it is used. i++

Stack Frames
  

  
  
