#include <iostream>
using namespace std;

// Swap two numbers using XOR
void swapNumbers(int &a, int &b) {
    a = a ^ b;
    b = a ^ b; // b = (a ^ b) ^ b = a
    a = a ^ b; // a = (a ^ b) ^ a = b
}

// Check if i-th bit is set
bool isIthBitSet(int n, int i) {
    return (n & (1 << i)) != 0;
}

// Set i-th bit
int setIthBit(int n, int i) {
    return n | (1 << i);
}

// Clear i-th bit
int clearIthBit(int n, int i) {
    return n & ~(1 << i);
}

// Toggle i-th bit
int toggleIthBit(int n, int i) {
    return n ^ (1 << i);
}

// Remove last set bit
int removeLastSetBit(int n) {
    return n & (n - 1);
}

// Check if number is power of 2
bool isPowerOfTwo(int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

// Count number of set bits
int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int a = 5, b = 7;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapNumbers(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    int num = 29; // binary: 11101
    int i = 3;

    cout << "\nIs " << i << "-th bit set in " << num << "? " << (isIthBitSet(num, i) ? "Yes" : "No") << endl;
    cout << "Set " << i << "-th bit: " << setIthBit(num, i) << endl;
    cout << "Clear " << i << "-th bit: " << clearIthBit(num, i) << endl;
    cout << "Toggle " << i << "-th bit: " << toggleIthBit(num, i) << endl;
    cout << "Remove last set bit of " << num << ": " << removeLastSetBit(num) << endl;
    cout << "Is " << num << " power of 2? " << (isPowerOfTwo(num) ? "Yes" : "No") << endl;
    cout << "Number of set bits in " << num << ": " << countSetBits(num) << endl;

    return 0;
}