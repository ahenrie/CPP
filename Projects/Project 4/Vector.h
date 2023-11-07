#ifndef VECTOR_H
#define VECTOR_H

#include <cstddef>
#include <stdexcept>
using std::size_t;

class Vector {
    enum {CHUNK = 10};
    size_t capacity;                                            // Size of the current array allocation (total number of ints, in use or not)
    size_t n_elems;                                             // Number of int spaces currently in use, starting from position 0
    int* data_ptr;                                              // Pointer to the heap array
    void grow() {
        size_t new_size = static_cast<size_t>(capacity * 1.6);
        int* newArray = new int[new_size];
        for(size_t i = 0; i < n_elems; i++) {
            newArray[i] = data_ptr[i];
        }
        delete[] data_ptr;
        data_ptr = newArray;
        capacity = new_size;
    };

public:
    // Object Mgt.
    Vector() {
        capacity = CHUNK;
        n_elems = 0;
        data_ptr = new int[CHUNK];
    }

    Vector(const Vector& v) {                                   // Copy constructor
        capacity = v.capacity;
        n_elems = v.n_elems;
        data_ptr = new int[capacity];
        for (size_t i = 0; i < n_elems; ++i) {
            data_ptr[i] = v.data_ptr[i];
        }
    }      
    
    Vector& operator=(const Vector& v){                         // Copy assignment operator
        if (this != &v) {                                       // No self assign 
            int* newDataPtr = new int[v.capacity];              // create new pointer to an object vector in the heap with the same capacity as v                   
            for (size_t i = 0; i < v.n_elems; i++) {            // write all the nodes to the new object vector
                newDataPtr[i] = v.data_ptr[i];
            }
            delete[] data_ptr;
            data_ptr = newDataPtr;
            n_elems = v.n_elems;
            capacity = v.capacity;
        }
        return *this;
    }

    ~Vector() {                                                 // Destructor 
        delete[] data_ptr;
    };

    // Accessors
    int front() const {                                         // Return element at index 0 if exists
       if (n_elems > 0) {
            return data_ptr[0];
       } 
       throw std::range_error("Range Error");
    }
    
    int back() const {                                          // Return last element (position n_elems-1)
        if (n_elems > 0) {
            return data_ptr[size() - 1];
        }
        throw std::range_error("Range Error");
    }

    int at(size_t pos) const {                                  // Return element in position "pos" (0-based)
        if (pos < 0 || pos >= size() )
            throw std::range_error("Range Error");
        return data_ptr[pos];
    }
                                        
    size_t size() const {                                       // Return n_elems
        return n_elems;
    }

    bool empty() const {                                        // Return n_elems == 0
        if (n_elems == 0) {
            return true;
        } else {
            return false;
        }
    }                             

    // Mutators
    int& operator[](size_t pos) {                              // Same as at but no bounds checking
        return data_ptr[pos];
    }

    void push_back(int item) {                                  // Append a new element at the end of the array
        if (n_elems >= capacity) {
            grow();
        }
        data_ptr[n_elems] = item;
        ++n_elems;
    }          
    
    void pop_back() {                                           // --n_elems (nothing else to do; returns nothing)
        if (n_elems > 0) {
            --n_elems;                          
        } else {
            throw std::range_error("Range Error");
            n_elems = 0;
        }
    }

    void erase(size_t pos) {                                    // Remove item in position pos and shuffles following items left
        if (pos < n_elems && pos >= 0) {
            for (size_t i = pos + 1; i < n_elems; i++) {
                data_ptr[pos] = data_ptr[i];
            } --n_elems;
        } else {
            throw std::range_error("Range Error");}
    }

    void insert(size_t pos, int item) {                         // Shuffle items right to make room for a new element
        if (pos <= n_elems) {
            if (n_elems >= capacity) {
                grow();
            }
            for (size_t i = n_elems; i > pos; i--) {
                data_ptr[i] = data_ptr[i - 1];
            }
            data_ptr[pos] = item;
            n_elems++;
        } else {
            throw std::range_error("Range Error");
        }
    } 
    
    void clear() {                                         // n_elems = 0 (nothing else to do; keep the current capacity)
        if (n_elems == 0) {
            ;
        } else {
           // delete[] data_ptr;
            n_elems = 0;}
    }

    // Iterators
    int* begin() {                                          // Return a pointer to 1st element, or nullptr if n_elems == 0
        if (n_elems == 0) {
            return nullptr;
        } else {
            return data_ptr;
        }
    }
    int* end() {
        if(n_elems == 0) {                                  // Return a pointer to 1 past last element, or nullptr if n_elems == 0
            return nullptr;
        } else {
            return data_ptr + n_elems;
        }
    }                      

    // Comparators
    bool operator==(const Vector& v) const {
        if (size() != v.size()) {
            return false;
        }

        for (size_t i = 0; i < n_elems; ++i) {
            if (data_ptr[i] != v.data_ptr[i]) {
                return false;
            }
        }
        return true;
    }

    bool operator!=(const Vector& v) const {
        return !(*this == v);
    }
};

#endif