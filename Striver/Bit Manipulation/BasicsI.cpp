#include <iostream>
#include <cmath>
using namespace std;

// Convert decimal to binary (as a string)
string decimalToBinary(int n) {
    string binary = "";
    for (int i = 31; i >= 0; i--) {
        binary += ((n >> i) & 1) ? '1' : '0';
    }
    return binary;
}

// Convert binary (as string) to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// 1's Complement
int onesComplement(int n) {
    return ~n;
}

// 2's Complement
int twosComplement(int n) {
    return ~n + 1;
}

// Basic bitwise operators
void bitwiseOperators(int a, int b) {
    cout << "a = " << a << " (" << decimalToBinary(a) << ")" << endl;
    cout << "b = " << b << " (" << decimalToBinary(b) << ")" << endl;
    cout << "a AND b = " << (a & b) << " (" << decimalToBinary(a & b) << ")" << endl;
    cout << "a OR b = " << (a | b) << " (" << decimalToBinary(a | b) << ")" << endl;
    cout << "a XOR b = " << (a ^ b) << " (" << decimalToBinary(a ^ b) << ")" << endl;
    cout << "NOT a = " << (~a) << " (" << decimalToBinary(~a) << ")" << endl;
    cout << "a NOR b = " << (~(a | b)) << " (" << decimalToBinary(~(a | b)) << ")" << endl;
}

// Left Shift and Right Shift
void shifts(int n) {
    cout << "Original: " << n << " (" << decimalToBinary(n) << ")" << endl;
    cout << "Left Shift by 1: " << (n << 1) << " (" << decimalToBinary(n << 1) << ")" << endl;
    cout << "Right Shift by 1: " << (n >> 1) << " (" << decimalToBinary(n >> 1) << ")" << endl;
}

// Other basic notes functions

// Check if number is odd or even
bool isEven(int n) {
    return (n & 1) == 0;
}

// Multiply by 2: left shift by 1
int multiplyByTwo(int n) {
    return n << 1;
}

// Divide by 2: right shift by 1
int divideByTwo(int n) {
    return n >> 1;
}

int main() {
    int a = 5, b = 3;

    cout << "===== Decimal to Binary and Binary to Decimal =====" << endl;
    cout << "Binary of " << a << " : " << decimalToBinary(a) << endl;
    cout << "Decimal of 101 : " << binaryToDecimal("101") << endl;

    cout << "\n===== 1's and 2's Complement =====" << endl;
    cout << "1's Complement of " << a << " : " << onesComplement(a) << " (" << decimalToBinary(onesComplement(a)) << ")" << endl;
    cout << "2's Complement of " << a << " : " << twosComplement(a) << " (" << decimalToBinary(twosComplement(a)) << ")" << endl;

    cout << "\n===== Bitwise Operators (AND, OR, XOR, NOT, NOR) =====" << endl;
    bitwiseOperators(a, b);

    cout << "\n===== Left Shift and Right Shift =====" << endl;
    shifts(a);

    cout << "\n===== Other Basics =====" << endl;
    cout << a << " is " << (isEven(a) ? "Even" : "Odd") << endl;
    cout << a << " multiplied by 2: " << multiplyByTwo(a) << endl;
    cout << a << " divided by 2: " << divideByTwo(a) << endl;

    return 0;
}