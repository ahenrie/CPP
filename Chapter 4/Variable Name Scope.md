# Variable Name Scope

A declared name is only valid and useable within a region of code aka the scope. A variable declared inside main() is only available within main().

- A declared name is only valid within a specific region of code known as the name's scope.

- For example, if you declare a variable called `userNum` inside the `main()` function, that variable is only valid within the `main()` function. It can be used from the point of declaration until the end of the `main()` function.

- In most cases, variables are declared at the beginning of functions like `main()` or other functions. However, variables can also be declared within other code blocks, such as those enclosed by `{}` braces. These code blocks can be associated with constructs like if-else statements, for loops, or while loops.

- When a variable is declared within a block, its scope extends from the point of declaration to the closing brace `}` that marks the end of that block.

## Common Error

A common error is to declare a variable inside a loop whose value should persist across iterations. Below, the programmer expects the output to be 0, 1 (0+1), 3 (0+1+2), 6 (0+1+2+3), and 10 (0+1+2+3+4), but instead the output is just 0, 1, 2, 3, 4.

```c++
#include <iostream>
using namespace std;

int main() {
   int i = 0;

   while (i < 5) {
      int tmpSum = 0;
      tmpSum = tmpSum + i; // Logic error: Sum is always just i
      cout << "tmpSum: " << tmpSum << endl;
      i = i + 1;
   }

   return 0;
}
```
