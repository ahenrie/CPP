# Raising Exceptions

**Error Checking** is used to detect and handle errors. An **exception** is a circumstance that a program is not designed to handle, hence checking is needed.

## Example

The following program takes a height and weight then outputs a BMI. The program has no error checking.

```cpp
#include <iostream>
using namespace std;

int main() {
   int weightVal;       // User defined weight (lbs)
   int heightVal;       // User defined height (in)
   float bmiCalc;       // Resulting BMI
   char quitCmd;        // Indicates quit/continue

   quitCmd = 'a';
   
   while (quitCmd != 'q') {
      
      // Get user data
      cout << "Enter weight (in pounds): ";
      cin >> weightVal;
      
      cout << "Enter height (in inches): ";
      cin >> heightVal;
      
      // Calculate BMI value
      bmiCalc = (static_cast<float>(weightVal) /
                 static_cast<float>(heightVal * heightVal)) * 703.0;
      
      // Print user health info
      // Source: http://www.cdc.gov/
      cout << "BMI: " << bmiCalc << endl;
      cout << "(CDC: 18.6-24.9 normal)" << endl;
      
      // Prompt user to continue/quit
      cout << endl << "Enter any key ('q' to quit): ";
      cin >> quitCmd;
   }
   
   return 0;
}
```

Error checking can be added with if-else statements, but this can be problamatic as it obscures the code.

```cpp
#include <iostream>
using namespace std;

int main() {
   int weightVal;       // User defined weight (lbs)
   int heightVal;       // User defined height (in)
   float bmiCalc;       // Resulting BMI
   char quitCmd;        // Indicates quit/continue

   quitCmd = 'a';
   
   while (quitCmd != 'q') {
      
      // Get user data
      cout << "Enter weight (in pounds): ";
      cin >> weightVal;
      
      // Error checking, non-negative weight
      if (weightVal < 0) {
         cout << "Invalid weight." << endl;
      }
      else {
         cout << "Enter height (in inches): ";
         cin >> heightVal;
         
         // Error checking, non-negative height
         if (heightVal < 0) {
            cout << "Invalid height." << endl;
         }
      }
      
      // Calculate BMI and print user health info if no input error
      // Source: http://www.cdc.gov/
      if ((weightVal <= 0) || (heightVal <= 0)) {
         cout << "Cannot compute info." << endl;
      }
      else {
         bmiCalc = (static_cast<float>(weightVal) /
                    static_cast<float>(heightVal * heightVal)) * 703.0;
         
         cout << "BMI: " << bmiCalc << endl;
         cout << "(CDC: 18.6-24.9 normal)" << endl;
      }
      
      // Prompt user to continue/quit
      cout << endl << "Enter any key ('q' to quit): ";
      cin >> quitCmd;
   }
   
   return 0;
}
```

## Constructs For Exception-Handling

```cpp
...
try {
   ...   
   // If error detected
      throw objectOfExceptionType;
   ...
}
catch (exceptionType excptObj) {
   // Handle exception, e.g., print message
}
...
```

- **Try Block:**
  - Surrounds normal code.
  - Exits immediately if a throw statement inside it executes.
  
- **Throw Statement:**
  - Appears within a try block.
  - Execution jumps immediately to the end of the try block if reached.
  - Used in error situations.
  - Throws an exception object of a specific type (e.g., "runtime_error").
  - Similar syntax to a return statement.
  
- **Catch Clause:**
  - Follows a try block.
  - Executes if the catch clause's parameter type matches the thrown exception's type.
  - Handles the thrown exception.
  - Also known as a handler.

| Type               | Reason exception is thrown                                             |
|--------------------|-----------------------------------------------------------------------|
| `bad_alloc`        | Failure in allocating memory                                           |
| `ios_base::failure`| Failure in a stream (e.g., `cin`, `stringstream`, `fstream`)           |
| `logic_error`      | To report errors in a program's logic (e.g., `out_of_range` error)     |
| `runtime_error`    | To report errors that can only be detected at runtime (e.g., `overflow_error`) |
