# Loop and Design and Fundamentals

## Learning Objectives

1. Describe and implement the two classes of branch statements in C++.

2. Graphically depict program control flow using diagrams.

3. Depict an if-else statement graphically.

4. Describe the two classes of loops supported by C++ and provide examples of their basic syntax.

5. Depict the two classes of loops graphically.

6. Describe what block statements are and how they relate to branching and looping.

### Defenitions

- **Expression**:
  - An expression in programming is a combination of one or more values, variables, operators, and function calls that can be evaluated to produce a single value. Expressions are used to perform calculations, manipulate data, and make decisions within a program.

- **Condition**:
  - A condition in programming is a Boolean expression or a logical statement that evaluates to either true or false. Conditions are commonly used in control flow statements (such as if statements and loops) to make decisions about which code should be executed.

- **Statement**:
  - A statement in programming is a complete line of code that performs a specific action or task. Statements are the building blocks of a program and are executed sequentially, one after the other, unless control flow structures (e.g., loops, conditionals) alter the normal flow.

#### Example
```cpp
int x = 10;  // This is a statement
bool condition = (x > 5);  // This is an expression and a condition

if (condition) {
    // This block contains statements
    cout << "x is greater than 5." << endl;
} else {
    cout << "x is not greater than 5." << endl;
}
```

### 1: Two Classes of Branch Statements

- **Conditional Branching**:

  - **if Statements**: Execute code based on a condition.

```c++
if (//boolean expression) {
  //code to execute (statment)
}
```
  
  - **Else Statements**: Specify code to run when a condition is false.

```c++
if (//boolean expression) {
  // statement
else {
  // statement
}
}
```

- **Unconditional Branching**:

  - **goto Statement**: Allows jumping to a labeled statement.

### 4: Describe the Two Classes of Loops Supported by C++

1. **Precondition Loop (while loop)**:

   - **Description**: A "while loop" repeatedly executes a block of code as long as a specified condition remains true. It checks the condition before entering the loop, and if the condition is false initially, the loop may not execute at all.
   
   - **Basic Syntax**:
     ```cpp
     while (condition) {
         // Code to repeat while condition is true
     }
     ```

2. **Postcondition Loop (do-while loop)**:

   - **Description**: A "do-while loop" also repeatedly executes a block of code, but it checks the condition after the code block execution. This ensures that the code block runs at least once even if the condition is false initially.
   
   - **Basic Syntax**:
     ```cpp
     do {
         // Code to repeat at least once
     } while (condition);
     ```






















