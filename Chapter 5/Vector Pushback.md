# Vector push_back

## Appending Items to a Vector

The push_back() function allows elements to be appended to an existing vector.
Ex: `dailySales.push_back(521)` creates a new element, assigns 521 to the element, and lengthens the vector.

![image](https://github.com/ahenrie/CPP/assets/103060170/9404f155-52a5-4b2c-aea1-e83f9222f269)

## Vector pop_back and back()

![image](https://github.com/ahenrie/CPP/assets/103060170/e46230c8-f73f-4142-baba-83408a9fa1f9)

### Using back Function

```c++
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   vector<string> groceryList; // Vector storing shopping list
   string groceryItem;         // Individual grocery items
   string userCmd;             // User input
   
   // Prompt user to populate shopping list
   cout << "Enter grocery items or type done." << endl;
   cin >> groceryItem;
   while (groceryItem != "done") {
      groceryList.push_back(groceryItem);
      cin >> groceryItem;
   }
   
   // Display shopping list
   cout << endl << "Enter any key for next item." << endl;
   while (groceryList.size() > 0) {
      groceryItem = groceryList.back();
      groceryList.pop_back();
      cout << groceryItem << "   ";
      cin >> userCmd;
   }
   cout << endl << "Done shopping." << endl;
   
   return 0;
}
```
