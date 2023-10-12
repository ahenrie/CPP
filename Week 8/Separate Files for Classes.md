# Separate Files for Classes

Why would we want to move method definitions in a separate file?

    Modularity: By separating classes into different files, you can create a modular structure for your code. Each file can represent a distinct module or component of your application, making it easier to understand and maintain the codebase. This modularity also promotes code reuse, as you can use the same classes in multiple parts of your project.

    Encapsulation: Separating class definitions (in header files) from their implementations (in source files) allows you to hide the internal details of a class. Users of the class (other parts of your program) only need to know the class interface (defined in the header file), not how the class accomplishes its tasks. This principle is fundamental to object-oriented programming and helps in achieving data encapsulation.

    Maintainability: When your project grows, having each class in its own file makes it much easier to locate and update specific parts of the code. It simplifies version control, debugging, and collaboration among team members. It also enables parallel development, where different team members can work on different classes simultaneously.

    Reusability: Separating classes into different files promotes reusability. You can reuse classes in different projects or share them with others without including the entire source code. Users can simply include the appropriate header file and link with the compiled implementation.

    Readability: Smaller, focused files are generally easier to read and understand. When each file has a specific responsibility (such as defining a class or a set of related functions), it's easier to comprehend the code's structure and purpose.

    Compile Time: When you change the implementation of a class, only the corresponding source file needs to be recompiled. If everything were in one large file, you would need to recompile the entire codebase even for small changes, which can significantly increase compilation time for larger projects.

    Organization: Separating classes into different files helps organize your project logically. You can have a clear directory structure, making it easier to manage files and resources.

```cpp
#include "MyClass.h"
#include <iostream>

MyClass::MyClass() {
    // Constructor implementation
}

void MyClass::myFunction() {
    std::cout << "Hello from MyClass!" << std::endl;
}
```
