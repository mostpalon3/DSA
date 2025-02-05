#include <iostream>
using namespace std;

class Solution {
  public:
    // Complete this function
    void printNos(int n) {
        if(n < 1 || n > 1000) return;
        
        printNos(n-1);
        cout<<n<<" ";
    }
};