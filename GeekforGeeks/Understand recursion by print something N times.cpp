#include <iostream>
using namespace std;

class Solution {
  public:
    // Complete this function
    void printNos(int n) {
        for(int i = 1; i <= n ; i++){
            if (i>=1 && i<=1000){
                cout << i << " ";
            }
        }
    }
}; 