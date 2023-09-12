# Arrays VS Vectors

C++ supports two kinds of ordered list types.

    Arrays: declared as int myList[10], accessed as myList[i].
    Vectors: declared as vector<int> myList(10), accessed as myList.at(i).

Arrays have a simpler syntax than vectors, but vectors are safer to use. Thus, using vectors rather than arrays is good practice.

Vectors are safer because the access v.at(i) is checked during execution to ensure the index is within the vector's valid range. An array access a[i] involves no such check. Such checking is important; trying to access an array with an out-of-range index is a very common error, and one of the hardest errors to debug.


## How Vectors Really Work

Arrays are built into the C++ language, whereas vector is implemented in C++ code and provided in the <vector> header. Vectors are actually implemented internally by using arrays with the following procedure:
1. Define an array with some default size (depends on who wrote the C++ compiler)
2. When the user wants to add an element at the end of the vector:
  - Check if there is an empty space in the currently allocated underlying array
  - If there isn't a space, then reallocate a new, bigger array, and copy the elements in use to it; then delete the old array
  - Add the element in the first free space at the end of the array

### Writing Out of Range With an Array

![image](https://github.com/ahenrie/CPP/assets/103060170/c61a43a3-6a14-4a80-8966-8c01aa6acaa5)

