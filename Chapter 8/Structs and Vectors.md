# Structs and Vectors

The power of structs becomes even more evident when used in conjunction with vectors. 

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct CountryTvWatch {
   string countryName;
   int tvMinutes;
};

int main() {
   // Source: www.statista.com, 2010
   const int NUM_COUNTRIES = 4;

   vector<CountryTvWatch> countryList(NUM_COUNTRIES);
   string countryToFind;
   bool countryFound;
   int i;

   countryFound = false;

   countryList.at(0).countryName = "Brazil";
   countryList.at(0).tvMinutes = 222;
   countryList.at(1).countryName = "India";
   countryList.at(1).tvMinutes = 119;
   countryList.at(2).countryName = "U.K.";
   countryList.at(2).tvMinutes = 242;
   countryList.at(3).countryName = "U.S.A.";
   countryList.at(3).tvMinutes = 283;

   cout << "Enter country name: ";
   cin >> countryToFind;

   for (i = 0; i < NUM_COUNTRIES && !countryFound; ++i) { // Find country's index
      if (countryList.at(i).countryName == countryToFind) { 
         countryFound = true;
         cout << "People in " << countryToFind << endl;
         cout << "watch " << countryList.at(i).tvMinutes; 
         cout << " minutes of TV daily." << endl;
      }
   }
   if (!countryFound) {
      cout << "Country not found, try again." << endl;
   }

   return 0;
}
```

The countryList variable is declared as  vector<CountryTvWatch> countryList(NUM_COUNTRIES), meaning a vector of items of type CountryTvWatch. Thus, each vector element will have memory allocated for the struct's two data members, countryName and tvMinutes.

The notation countryList.at(i).countryName is equivalent to (countryList.at(i)).countryName, because the member access operator is evaluated left-to-right (as are any equal precedence operators). The left-to-right member access operator evaluation is well-known among programmers so parentheses are typically omitted.
