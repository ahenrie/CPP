# Character Functions

Including the `cctype` library via `#include <cctype>` provides access to several functions for working with characters. `ctype` stands for character type. The first 'c' indicates that the library is originally from the C language.

| Function        | Description                                          | Example                     |
|-----------------|------------------------------------------------------|-----------------------------|
| `isalpha(c)`    | True if `c` is alphabetic (a-z or A-Z)              | `isalpha('x')` (true)       |
|                 |                                                    | `isalpha('6')` (false)      |
|                 |                                                    | `isalpha('!')` (false)      |
| `toupper(c)`    | Uppercase version of `c`                            | `toupper('a')` (A)          |
|                 |                                                    | `toupper('A')` (A)          |
|                 |                                                    | `toupper('3')` (3)          |
| `isdigit(c)`    | True if `c` is a digit (0-9)                       | `isdigit('x')` (false)      |
|                 |                                                    | `isdigit('6')` (true)       |
| `tolower(c)`    | Lowercase version of `c`                            | `tolower('A')` (a)          |
|                 |                                                    | `tolower('a')` (a)          |
|                 |                                                    | `tolower('3')` (3)          |
| `isspace(c)`    | True if `c` is whitespace                           | `isspace(' ')` (true)       |
|                 |                                                    | `isspace('\n')` (true)      |
|                 |                                                    | `isspace('x')` (false)      |

## Example

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
   char let0;
   char let1;

   cout << "Enter a two-letter state abbreviation: ";
   cin >> let0;
   cin >> let1;

   if ( ! (isalpha(let0) && isalpha(let1)) ) {
      cout << "Error: Both are not letters." << endl;
   }
   else {
      let0 = toupper(let0);
      let1 = toupper(let1);
      cout << "Capitalized: " << let0 << let1 << endl;
   }

   return 0;
}
```
