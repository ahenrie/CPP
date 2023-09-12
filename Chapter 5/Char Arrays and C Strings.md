# C++ Character Arrays for Strings

- Character arrays in C++ are used to store sequences of characters, often referred to as "C strings."
- C strings were the primary way of handling strings in C, and they are still used in C++ alongside C++'s string type.
- Character arrays are declared to store strings, like this: `char movieTitle[20] = "Star Wars";`.
- Strings in character arrays must end with a null character `'\0'` to signify the end of the string.
- When initializing a character array with a string literal, the compiler automatically adds the null character.
- Character arrays are suitable for low-level string manipulation, but C++ offers a more flexible string type for modern programming.

![image](https://github.com/ahenrie/CPP/assets/103060170/769e1038-e89b-4bc8-a90a-76fa1cb26271)

- A `char` array of size 20 can store strings of lengths from 0 to 19. The longest string is 19 characters because one slot is reserved for the null character.

- When a `char` array is initialized during declaration, its size can be omitted, and the compiler determines it from the string literal. For example, `char userName[] = "Hellen";` has a size of 7 (6 characters + 1 for the null character).

- An array of characters ending with a null character is called a "null-terminated string."

- Output streams in C++ automatically handle null-terminated strings. They print each character until they encounter the null character, which marks the end of the string.

```cpp
#include <iostream>
using namespace std;

int main() {
   char cityName[20] = "Forest Lake"; // Compiler appends null char

   // In each cout, printing stops when reaching null char
   cout << "City:" << endl;           // Compiler appends null char to "City:"
   cout << cityName << endl; 

   return 0;
}
```

## String Assignment and Manipulation

- Once a string is declared using a char array, direct assignment like `movieTitle = "Indiana Jones"` is not possible. Functions like `strcpy()` are used for string copying.

- To manipulate strings, C++ provides functions for copying, concatenating, and other operations.

- Output streams in C++ automatically handle null-terminated strings, printing each character until reaching the null character that ends the string.

## Traversing Strings

- To traverse a string within a char array, programmers can use a loop that stops when it encounters the null character (`'\0'`).

- This allows access to individual characters within the string for various operations.

```cpp
#include <iostream>
using namespace std;

int main() {
   char userStr[20] = "1234567890123456789"; // Input string
   int i; 
   
   // Prompt user for string input
   cout << "Enter string (<20 chars): ";
   cin >> userStr;
   
   // Print string
   cout << endl << userStr << endl;
   
   // Look for '@'
   for (i = 0; userStr[i] != '\0'; ++i) {
      if (userStr[i] == '@') {
         cout << "Found '@'." << endl;
      }
   }
   cout << endl;
   
   
   // The following is an ERROR.
   // May print chars it shouldn't.
   // Problem: doesn't stop at null char.
   cout << "\""; // Print opening "
   for (i = 0; i < 20; ++i) { // Print each char
      cout << userStr[i];
   }
   cout << "\"" << endl;      // Print closing "
   
   
   // The following is an even WORSE ERROR.
   // Accesses beyond valid index range.
   // Program may crash.
   cout << "\""; // Print opening "
   for (i = 0; i < 30; ++i) {
      cout << userStr[i];
   }
   cout << "\"" << endl; // Print closing "
   
   return 0;
}
```
