#include <iostream>
#include <bitset>
#include <cassert>

class Bits {
    using IType = unsigned long long;       // We only have to change the integer type here, if desired
    enum {NBITS = sizeof(IType)*8};
    IType bits = 0;

public:
    Bits() = default;
    Bits(IType n) {
        bits = n;
    }
    static int size() {
        return NBITS;
    }
    bool at(int pos) const {                // Returns (tests) the bit at bit-position pos
        assert(0 <= pos && pos < NBITS);
        return bits & (IType(1) << pos);
    }
    void set(int pos) {                     // Sets the bit at position pos
        assert(0 <= pos && pos < NBITS);    // checks the pos is within range
        bits |= (IType(1) << pos);          // left shift by pos positions perform OR (set to 1 if 0 or leave alone)
    };
    void set(){                             // Sets all bits to 1
        bits = ~IType(0);                   // `~` NOT after setting all bits to 0
    };               
    void reset(int pos){                    // Resets (makes zero) the bit at position pos
        assert(0 <= pos && pos < NBITS);    // check pos is within the range
        bits &= ~(IType(1) << pos);         // uses the NOT like set() with a mask
    };                    
    void reset(){                           // Resets all bits
        bits ^= bits;                       // Just like set() but no NOT
    };             
    void assign(int pos, bool val){         // Sets or resets the bit at position pos depending on val
        assert(0 <= pos && pos < NBITS);    // make sure we operate within range
        val ? set(pos) : reset(pos);        // if true set else reset
    };
    void assign(IType n){                   // Replaces the underlying integer with n
        bits = n;                           // Is that all this is supposed to do?
    };     
    void toggle(int pos){                   // Flips the bit at position pos
        assert(0 <= pos && pos < NBITS);    // range check
        bits ^= (IType(1) << pos);          // usese the XOR `^` to flip bit
    };     
    void toggle(){                          // Flips all bits
        bits ^= IType(-1);                  // reassigns bits to flipped bits using XOR (bits ^= bits sets all bits to 0 apparently)
    };            
    void shift(int n){                      // If n > 0, shifts bits right n places; if n < 0, shifts left
        n > 0 ? bits >>=n : bits <<= -n;
    };        
    void rotate(int n){                     // If n > 0, rotates right n places; if n < 0, rotates left
        n %= NBITS;                         // Males sure n is within (0, NBITS - 1)
        bits = (bits >> n) | (bits << (NBITS - n)); 
    };       
    int ones() const {                      // Returns how many bits are set in the underlying integer
        int count = 0;
        for (int i = 0; i < NBITS; i++) {
            at(i) ? count++ : count;
        }
        return count;
    };         
    int zeroes() const {      // Returns how many bits are reset in the underlying integer
        return NBITS - ones();
    }
    IType to_int() const {
        return bits;
    }
    friend bool operator==(const Bits& b1, const Bits& b2) {
        return b1.bits == b2.bits;
    }
    friend bool operator!=(const Bits& b1, const Bits& b2) {
        return b1.bits != b2.bits;
    }
    friend std::ostream& operator<<(std::ostream& os, const Bits& b) {
        return os << std::bitset<NBITS>(b.bits);
    }
};
