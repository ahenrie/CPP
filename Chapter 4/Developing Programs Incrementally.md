# Developing Programs Incrementally

## Incremental Development

Experienced programmers often adopt an incremental development approach. Instead of writing the entire program at once and hoping it works, they create a simple initial version and gradually build upon it.

## The Importance of Incremental Development

Incremental development offers several advantages:

- **Reduced Complexity**: Breaking the program into smaller parts makes it easier to understand and manage.

- **Early Detection of Bugs**: By testing and debugging each incremental change, it's easier to identify and fix issues as they arise.

- **Improved Maintainability**: Well-structured increments lead to cleaner and more maintainable code.

## Example of Incrementing with Programming

1. Initial Program

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Current element in phone number string
   
   cout << "Enter phone number: ";
   cin >> phoneStr;
   
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      cout << "Element " << i << " is: " << phoneStr.at(i) << endl;
   }
   
   return 0;
}
```

2. Second version echoes numbers, and has FIXME comment.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Current element in phone number string
   char currChar;     // Current char in phone number string
   
   cout << "Enter phone number: ";
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if ((currChar >= '0') && (currChar <= '9')) {
         cout << currChar; // Print element as is
      }
      // FIXME: Add else-if branches for letters and hyphen
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
```

3. Third version echoes hyphens too, and handles first three letters.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string phoneStr;   // User input: Phone number string
   unsigned int i;    // Current element in phone number string
   char currChar;     // Current char in phone number string
   
   cout << "Enter phone number: ";
   cin >> phoneStr;
   
   cout << "Numbers only: ";
   for (i = 0; i < phoneStr.size(); ++i) { // For each element
      currChar = phoneStr.at(i);
      if (((currChar >= '0') && (currChar <= '9')) || (currChar == '-')) {
         cout << currChar; // Print element as is
      }
      else if ( ((currChar >= 'a') && (currChar <= 'c')) ||
               ((currChar >= 'A') && (currChar <= 'C')) ) {
         cout << "2";
      }
      // FIXME: Add remaining else-if branches
      else {
         cout << '?';
      }
   }
   
   cout << endl;
   
   return 0;
}
```
