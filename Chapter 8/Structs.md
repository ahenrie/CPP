# Structs in C++

At times variables and the data they store need to grouped together in memory. This can be done usin a struct.

## Declaration 

Using the struct construct just delcares the new type; no memory is allocated. Only when variables in the struct are declared, is memory allocated.
Accessing refers to an object member's memory location.

![image](https://github.com/ahenrie/CPP/assets/103060170/dbd242d6-5e76-4344-8309-07bdac0c0721)

```c++
struct StructTypeName {
   type item1;
   type item2;
   ...
   type itemN;      
};

...
StructTypeName myVar;
 
myVar.item1 = ...
```

Each type may be any type like int or char. Each struct subitem is called a data member. For a declared variable, each struct data member can be accessed using ".", known as a member access operator, sometimes called dot notation.

Assigning a variable of a struct type to another such variable automatically assigns each corresponding data member, as shown below.

![image](https://github.com/ahenrie/CPP/assets/103060170/158d230e-1bca-4027-ab02-caa283ea5a6b)

