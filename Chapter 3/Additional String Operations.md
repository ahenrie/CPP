# More String Operations

## Finding a String / Getting a Substring

| Method              | Description                                                        | Example                                         |
|---------------------|--------------------------------------------------------------------|-------------------------------------------------|
| `find(item)`        | Returns the index of the first occurrence of `item` in the string or `string::npos` if not found. | `userText.find('p')` returns 3                  |
| `find(item, indx)`  | Starts searching for `item` at the specified index `indx`.          | `userText.find('e', 2)` returns 6 (starts at index 2) |
| `substr(index, length)` | Returns a substring starting at the specified `index` and having `length` characters. | `userText.substr(0, 7)` returns "http://"    |

### Example - Get Username from Email
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
   string emailText;
   int atSymbolIndex;
   string emailUsername;

   cout << "Enter email address: ";
   cin  >> emailText;

   atSymbolIndex = emailText.find('@');
   if (atSymbolIndex == string::npos) {
      cout << "Address is missing @" << endl;
   }
   else {
      emailUsername = emailText.substr(0, atSymbolIndex);
      cout << "Username: " << emailUsername << endl;
   }

   return 0;
}
```

## Combining / Replacing

| Method                   | Description                                                | Example                                             |
|--------------------------|------------------------------------------------------------|-----------------------------------------------------|
| `push_back(c)`           | Appends character `c` to the end of a string.             | `userText.push_back('?');` // Now "Hello?"          |
|                          |                                                            | `userText.size();` // Returns 6                      |
| `insert(indx, subStr)`   | Inserts string `subStr` starting at index `indx`.         | `userText.insert(0, "Well ");` // Now "Well Goodbye" |
|                          |                                                            | `userText.insert(4, "---");` // Now "Good---bye"    |
| `replace(indx, num, subStr)` | Replaces characters at indices `indx` to `indx+num-1` with a copy of `subStr`. | `userText.replace(9, 4, "a plethora of");` // Now "You have a plethora of gifts" |
| `str1 + str2`            | Returns a new string that is a copy of `str1` with `str2` appended. If one of `str1`, `str2` is a string, the other may be a character (or character array). | `myString = userText + " C D";` // `myString` is "A B C D" |
|                          |                                                            | `myString = myString + '!';` // `myString` now "A B C D!" |
|                          |                                                            | `myString = myString + userText;` // `myString` now "A B C D!A B" |

### Example - Greeting
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   string greetingText;
   int itemIndex;
   
   itemIndex = 0;
   
   cout << "Enter name: ";
   getline(cin, userName);
   
   // Combine strings using +
   greetingText = "Hello " + userName;
   
   // Append a period (could have used +)
   greetingText.push_back('.'); // '' not ""
   cout << greetingText << endl;
   
   // Insert Mr/Ms before user's name
   greetingText.insert(6, "Mr/Ms ");
   cout << greetingText << endl;
   
   // Replace occurrence of "Darn" by "@$#"
   if (greetingText.find("Darn") != string::npos) { // Found
      itemIndex = greetingText.find("Darn");
      greetingText.replace(itemIndex, 4, "@#$");
   }
   cout << greetingText << endl;
   
   return 0;
}
```
