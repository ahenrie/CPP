# Objects

## Public Member Functions

The class construct defines a new type that can group data and funcitons together. A plublic member function indicates all operations a class user can perform on the object.
The power of classes lies in that a class user need not know how the class data and functions are implemented. 

```
class Restaurant {                          // Info about a restaurant   
   public:                                          
      void SetName(string restaurantName);  // Sets the restaurant's name              
      void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)      
      void Print();                         // Prints name and rating on one line   

   ...
};
```

## Using a Class

Just like structs, objects use the member access operator ".".

![image](https://github.com/ahenrie/CPP/assets/103060170/4006f578-3ed7-463b-9ace-535eddff208a)
