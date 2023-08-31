# Characters

## Basics of Character Variables

In C++, you can work with individual characters using variables of type `char`. For instance, you can declare a `char` variable like this: `char myChar;`. This variable can store a single character, such as the letter 'm'.

```c++
#include <iostream>
using namespace std;

int main() {
   char arrowBody;
   char arrowHead;

   arrowBody = '-';
   arrowHead = '>';

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

   arrowBody = 'o';

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

   return 0;
}
```

## Character Literals

A **character literal** is a representation of a character enclosed in single quotes. For example, to assign the character 'm' to the variable `myChar`, you can write: `myChar = 'm';`.

Working with character variables is fundamental when dealing with tasks like processing text, reading input, and outputting textual data.

```c++
#include <iostream>
using namespace std;

int main() {
   char arrowBody;
   char arrowHead;

   arrowBody = '-';
   arrowHead = '>';

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

   arrowBody = 'o';

   cout << arrowBody << arrowBody << arrowBody << arrowHead << endl;

   return 0;
}
```

### ASCII Representation

Behind the scenes, computers store characters as numbers using a system known as the ASCII (American Standard Code for Information Interchange) encoding. Each character is assigned a unique numerical value. For instance, the character 'A' corresponds to the ASCII value 65, 'B' to 66, and so on.

This numerical representation allows computers to handle characters in a consistent manner. When you perform operations with characters, you're essentially working with their corresponding ASCII values.

Working with character variables and understanding their ASCII representation is fundamental when dealing with tasks like processing text, reading input, and outputting textual data.
