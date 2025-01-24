#include <climits>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        int min = INT_MIN;
        int max = INT_MAX;
        long long rev = 0;
        int temp = x;
        while (temp > 0) {
            int ld = temp % 10;
            rev = rev * 10 + ld;

            temp /= 10;
        }
        if (rev > max || rev < min || rev != x) {
            return false;
        }
        return true;
    }
};