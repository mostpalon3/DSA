#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>

using namespace std;

class MedianCalculator {
private:
    priority_queue<int> smallHalf;
    priority_queue<int, vector<int>, greater<int>> largeHalf;

public:
    MedianCalculator() {
    }
    
    void addNum(int num) {
        if (smallHalf.empty() || num <= smallHalf.top()) {
            smallHalf.push(num);
        } else {
            largeHalf.push(num);
        }
        
        if (smallHalf.size() > largeHalf.size() + 1) {
            largeHalf.push(smallHalf.top());
            smallHalf.pop();
        }
        else if (largeHalf.size() > smallHalf.size()) {
            smallHalf.push(largeHalf.top());
            largeHalf.pop();
        }
    }
    
    float getMedian() {
        if (smallHalf.size() > largeHalf.size()) {
            return smallHalf.top();
        }
        else {
            return (smallHalf.top() + largeHalf.top()) / 2.0;
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    MedianCalculator medCalc;
    vector<float> results;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num == -999999) {
            results.push_back(medCalc.getMedian());
        } else {
            medCalc.addNum(num);
        }
    }
    
    for (size_t i = 0; i < results.size(); i++) {
        cout << fixed << setprecision(1) << results[i];
        if (i < results.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}