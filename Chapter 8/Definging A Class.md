# Defining A Class

## Private Data Members

Private Data Members: variables that member functions can access but class users cannot. They appear after "private:" in the class defenition.

```cpp
class Restaurant {                          // Keeps a user's review of a restaurant
   public:                                    
      void SetName(string restaurantName);  // Sets the restaurant's name        
      void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)    
      void Print();                         // Prints name and rating on one line 
   private:
      string name;
      int rating;
};
```

### Example

Typically, the data of a class is declared as a private member and the methods to access the data is public.

```cpp
#include <iostream>
#include <string>
using namespace std;

class Restaurant {                          // Info about a restaurant
   public:
      void SetName(string restaurantName);  // Sets the restaurant's name
      void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)
      void Print();                         // Prints name and rating on one line
   
   private:
      string name;
      int rating;
};

// Sets the restaurant's name
void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(int userRating) {
   rating = userRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant favLunchPlace;
   Restaurant favDinnerPlace;
   
   favLunchPlace.SetName("Central Deli");
   favLunchPlace.SetRating(4);
   
   favDinnerPlace.SetName("Friends Cafe");
   favDinnerPlace.SetRating(5);
   
   cout << "My favorite restaurants: " << endl;
   favLunchPlace.Print();
   favDinnerPlace.Print();
   
   return 0;
}
```

## Defining a class' public member functions

In C++, a programmer creates a class by declaring member functions after the "public:" keyword in the class definition. The declaration includes the function's name, return type, and parameter types, but not the function's actual code.

The programmer is then required to define each member function separately. A function definition includes the class name, return type, parameter names and types, and the function's code. The definition uses the scope resolution operator (::) after the class name. Member functions defined this way can access private data members of the class.
