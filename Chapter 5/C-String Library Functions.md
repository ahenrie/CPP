# C-String Function

C++ provides functions for working with C strings, presented in the cstring library. To use those functions, the programmer starts with: #include <cstring>.

| Function       | Description                                                             | Example                                    |
|----------------|-------------------------------------------------------------------------|--------------------------------------------|
| `strcpy()`     | Copies `sourceStr` (up to and including null character) to `destStr`.   | `strcpy(targetText, userText);`           |
| `strncpy()`    | Copies up to `numChars` characters from `sourceStr` to `destStr`.        | `strncpy(orgName, userText, 6);`          |
| `strcat()`     | Appends `sourceStr` (up to and including null character) to `destStr`, starting at `destStr`'s null character. | `strcat(orgName, userText);` |
| `strncat()`    | Copies up to `numChars` characters from `sourceStr` to the end of `destStr`, then appends a null character. | `strncat(targetText, "123456789", 3);` |

## C String Function - Acquiring Information About C String

| Function  | Signature                               | Description                                  |
|-----------|-----------------------------------------|----------------------------------------------|
| `strchr()`| `strchr(sourceStr, searchChar)`         | Returns NULL if searchChar does not exist in sourceStr. (Else, returns address of first occurrence, discussed elsewhere). NULL is defined in the cstring library.  |
|           |                                         | ```c
|           |                                         | if (strchr(orgName, 'U') != NULL) { // 'U' exists in orgName?
|           |                                         |    ...  // 'U' exists in "United Nations", branch taken
|           |                                         | }
|           |                                         | if (strchr(orgName, 'u') != NULL) { // 'u' exists in orgName?
|           |                                         |    ...  // 'u' doesn't exist (case matters), branch not taken
|           |                                         | }
| `strlen()`| `size_t strlen(sourceStr)`               | Returns number of characters in sourceStr up to, but not including, the first null character. `size_t` is an integer type. |
|           |                                         | ```c
|           |                                         | x = strlen(orgName);    // Assigns 14 to x
|           |                                         | x = strlen(userText);   // Assigns 6 to x
|           |                                         | x = strlen(targetText); // Error: targetText may lack null char
| `strcmp()`| `int strcmp(str1, str2)`                | Returns 0 if str1 and str2 are equal, non-zero if they differ. |
|           |                                         | ```c
|           |                                         | if (strcmp(orgName, "United Nations") == 0) {
|           |                                         |    ... // Equal, branch taken
|           |                                         | }
|           |                                         | if (strcmp(orgName, userText) != 0) {
|           |                                         |    ... // Not equal, branch taken
|           |                                         | }
