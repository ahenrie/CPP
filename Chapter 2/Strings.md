# Strings and String Literals in C++

## Introduction to Strings

In C++, a **string** is a sequence of characters. It can include letters, numbers, spaces, and symbols like '$' or '%'. Strings are used to handle and manipulate textual data, making them an essential part of many programs.

## String Literals

A **string literal** is a character sequence surrounded by double quotes. For example:
- "Hello"
- "52 Main St."
- "42"

A string literal is distinct from an **integer literal** like `42` or a **character literal** like `'a'`. String literals allow you to represent textual information within your code.

## String Usage

Strings offer a wide range of functionalities, including concatenation, comparison, and manipulation. Earlier sections have demonstrated how to output string literals using constructs like `cout << "Hello";`.

Understanding strings and string literals is crucial when working with text-based data and performing tasks such as input/output operations, text processing, and formatting.

## String Variables and Assignments in C++

When working with textual data, string variables become essential. Unlike fundamental data types like `char`, `int`, or `double`, C++ doesn't inherently have a built-in string data type. However, the standard library provides a comprehensive solution. To utilize strings, include the header: `#include <string>`. After including this, you can declare a string variable as follows: `string firstName;`.

### Assigning Values to String Variables

Assigning values to string variables follows the same principles as other data types. For instance:
- `str1 = "Hello"`
- `str1 = str2`

When you assign a string to a string variable, the C++ string type automatically handles memory allocation. If the string on the right side is larger or smaller than the target variable, memory is reallocated as needed, and the characters are copied.

```c++
#include <iostream>
#include <string>
using namespace std;
 
int main() {
   string sentenceSubject;
   string sentenceVerb;
   string sentenceObject = "an apple";

   sentenceSubject = "boy";
   sentenceVerb = "ate";

   cout << "A ";
   cout << sentenceSubject << " ";
   cout << sentenceVerb << " ";
   cout << sentenceObject << "." << endl;
 
   return 0;
}
```

## Getting a String Without Whitespaces from Input

In text, **whitespace characters** encompass spaces, tabs, and newline characters, which serve to represent horizontal and vertical spaces. For instance, the string "Oh my goodness!" contains two whitespace characters: one between 'h' and 'm', and the other between 'y' and 'g'.

### Retrieving a String from Input

Here's a basic approach to obtaining a string from input without including any whitespace characters. The technique automatically disregards initial whitespace, captures characters until the next whitespace is encountered, and stores the result in a variable named `userString`.

```c++
#include <iostream>
#include <string>

int main() {
    std::string userString;

    // Using cin to get a string without whitespaces
    std::cin >> userString;

    std::cout << "User input: " << userString << std::endl;

    return 0;
}
```

## Getting a String With Whitespace from Input

There are scenarios where a programmer needs to obtain input that includes whitespace characters. For example, capturing a user's input of the name "Franklin D. Roosevelt" into a string variable `presidentName`.

For such situations, C++ provides a convenient way to obtain an entire line of input into a string. The function `getline(cin, stringVar)` is used to capture all the text on the current input line, up to the next newline character (which is removed from input but not stored in `stringVar`).

Consider the following example:

```c++
#include <iostream>
#include <string>

int main() {
    std::string presidentName;

    // Using getline to get a string with whitespace
    std::cout << "Enter the president's full name: ";
    std::getline(std::cin, presidentName);

    std::cout << "President's name: " << presidentName << std::endl;

    return 0;
}
```

### Using getline

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;

   cout << "Enter first name:" << endl;
   getline(cin, firstName); // Gets entire line up to ENTER

   cout << "Enter last name:" << endl;
   getline(cin, lastName); // Gets entire line up to ENTER

   cout << endl;
   cout << "Welcome " << firstName << " " << lastName << "!" << endl;
   cout << "May I call you " << firstName << "?" << endl;

   return 0;
}
```
