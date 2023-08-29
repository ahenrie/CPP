# Compilers (g++)

There are three main stages to compiling C++:

## Preprocessing:
In this stage, the preprocessor (`cpp`) processes the source code and performs tasks such as handling macro substitutions (`#define` directives), including header files (`#include` directives), and removing comments. The output of this stage is a source code file without comments, macros expanded, and headers included.

## Compilation:
The preprocessed source code from the previous stage is compiled by the C++ compiler (`g++`). This stage involves translating the preprocessed source code into assembly code. The compiler checks for syntax and semantic errors in the code. If there are no errors, it generates an assembly code file.

## Assembly and Linking:
In this stage, the assembly code generated in the previous stage is assembled by the assembler (`as`) to generate machine code in the form of object files. These object files might contain unresolved references to functions or variables from external libraries or other source files. The linker (`ld`) then comes into play to resolve these references. It links together object files, as well as any necessary external libraries, to create an executable program.

## 1st Stage - Translates to Assembly

```c++
#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
```

### Reading the Assembly Code
```assembly
	    # Assembly code (simplified)
    mov eax, 5       ; a = 5
    mov ebx, 10      ; b = 10
    add eax, ebx     ; sum = a + b
    mov ecx, eax     ; Store sum in ecx
    mov edx, offset msg  ; Load address of the message
    call print_sum   ; Call the print_sum function

print_sum:
    ; Code to print the sum
    ...
```

##  Stage 2 - Assembling Assembly Code to Object Code:

1. **Parsing and Tokenization:**
   - The assembler reads the assembly code line by line.
   - Each line is broken down into tokens, including instructions, operands, and labels.

2. **Symbol Resolution:**
   - Symbols like labels and variable names are resolved to their memory addresses or values.
   - Symbols such as `.LC0` and `.LC1` in the code are assigned appropriate addresses.

3. **Translation to Machine Code:**
   - Assembly instructions are translated into corresponding machine code instructions.
   - OpCodes and operand values are encoded into the binary format understood by the CPU.

4. **Generating Object Code:**
   - Machine code instructions are generated for each assembly instruction.
   - Instructions are organized into sections, including text sections (code) and data sections (initialized/uninitialized data).

5. **Relocation and Symbol Table:**
   - A symbol table is created, mapping labels/symbols to memory addresses in the object code.
   - Unresolved references to external symbols are recorded as relocations.

6. **Object Code Output:**
   - An object file is generated, containing machine code, data, symbol info, and unresolved relocations.

  
     `g++ -c example.cpp -o example.o`

## Stage 3 - Linker (Machine Code)

1. **Combining Object Files:**
   - Combine multiple object files generated from source code files into a single executable program.
   - Especially important for programs with multiple source code files.

2. **Symbol Resolution:**
   - Resolve references to functions, variables, and symbols across different object files.
   - Match references with actual definitions to ensure connections between parts of the program.

3. **Address Assignment:**
   - Assign final memory addresses to functions and variables.
   - Ensure proper memory layout without conflicts or overlaps.

4. **Library Linking:**
   - Link external libraries into the executable.
   - Include only the parts of the library that the program uses, reducing executable size.

5. **Generating Executable Format:**
   - Produce an executable program in a format understood by the operating system.
   - Format might vary based on the OS and architecture.

6. **Resolving Dependencies:**
   - Ensure that dependencies on external functions or resources are satisfied.
   - Report errors if unresolved dependencies are present.

7. **Generating Debug Information:**
   - Optionally include debug information in the executable.
   - Helps developers debug the program by providing source code locations and variable details.



