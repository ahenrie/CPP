# Progamming Basics

Below we will explore the basics of how C++ programs work.

## Basics Output

Below is a basic example of a C++ program.

    Program execution begins within the main() function. The statements within the curly braces { } of main are executed sequentially.
    Each statement is typically placed on its own line and concludes with a semicolon, similar to how sentences in English end with a period.
    The line int wage; declares an integer variable named wage. The subsequent line wage = 20; assigns the value 20 to the wage variable.
    The cout statements are used to display different values.
    The return 0; statement signifies the end of the program. The value 0 indicates to the operating system that the program concluded without errors.

Code serves as the textual representation of a program, as exemplified below. Many code editors use syntax highlighting to aid human comprehension by visually distinguishing the roles of various words.

The following code snippet (explained in more detail later) placed at the beginning of a file enables the program to receive input and produce output:

```c++
#include <iostream>
using namespace std;
```

### The rest of a basic program
```c++
#include <iostream>
using namespace std;

int main(){
  int wage;

  wage = 20;

  cout << "Salary is ";
  cout << wage * 40 * 52;
  cout << endl;

  return 0;
}
```

## Basic Input

Frequently, programs acquire input values, execute processes on these inputs, and subsequently generate output displayed on a screen or other mediums. Input is often obtained from sources such as keyboards, files, form fields on websites or applications, and more.

The subsequent instruction acquires an input value and stores it in the variable 'x': cin >> x;. Here, 'cin' is an abbreviation for "characters in."

```c++


#include <iostream>
using namespace std;
 
int main() {
   int wage;
   
   cin >> wage;
 
   cout << "Salary is ";
   cout << wage * 40 * 50;
   cout << endl;
 
   return 0;
}
```
