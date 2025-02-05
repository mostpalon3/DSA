#include <iostream>
using namespace std;

class Solution {
  public:
    void printGfg(int N) {
        if(N<1 || N>1000) return;
        
        cout << "GFG" << " ";
        printGfg(N-1);
    }
};