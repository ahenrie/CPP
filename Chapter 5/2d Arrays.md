# Two-Dimmensional Arrays

An array can be declared with two dimensions. int myArray[R][C] represents a table of int variables with R rows and C columns, so R*C elements total. For example, int myArray[2][3] creates a table with 2 rows and 3 columns, for 6 int variables total. Example accesses are myArray[0][0] = 33; or num = myArray[1][2]. 

![image](https://github.com/ahenrie/CPP/assets/103060170/7e71d8cf-a09b-41af-a2ec-cb6811c70140)

Conceptually, a two-dimensional array is a table with rows and columns. The compiler maps two-dimensional array elements to one-dimensional memory, each row following the previous row, known as row-major order. 

## Initializing During Declaration

```cpp
// Initializing a 2D array
int numVals[2][3] = { {22, 44, 66}, {97, 98, 99} };

// Use multiple lines to make rows more visible
int numVals[2][3] = {
   {22, 44, 66}, // Row 0
   {97, 98, 99}  // Row 1
};
```
