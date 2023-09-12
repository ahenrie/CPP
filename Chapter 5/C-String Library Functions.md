# C-String Function

C++ provides functions for working with C strings, presented in the cstring library. To use those functions, the programmer starts with: #include <cstring>.

| Function       | Description                                                             | Example                                    |
|----------------|-------------------------------------------------------------------------|--------------------------------------------|
| `strcpy()`     | Copies `sourceStr` (up to and including null character) to `destStr`.   | `strcpy(targetText, userText);`           |
| `strncpy()`    | Copies up to `numChars` characters from `sourceStr` to `destStr`.        | `strncpy(orgName, userText, 6);`          |
| `strcat()`     | Appends `sourceStr` (up to and including null character) to `destStr`, starting at `destStr`'s null character. | `strcat(orgName, userText);` |
| `strncat()`    | Copies up to `numChars` characters from `sourceStr` to the end of `destStr`, then appends a null character. | `strncat(targetText, "123456789", 3);` |

