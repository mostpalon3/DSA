//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
#include <climits>

class Solution {
    const long long MINV = 1;
    const long long MAXV = 1e18;
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        if(n< MINV || n > MAXV) return result;
        
        long long factorial = 1;
        long long i = 1;
        
        while(factorial <= n){
            result.push_back(factorial);
            i++;
            factorial *= i;
        }
        return result;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends


//using recursion 
#include <climits>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
    const long long MINV = 1;
    const long long MAXV = 1e18;

    // Helper function to calculate factorial recursively
    long long calculateFactorial(long long n) {
        if (n == 0 || n == 1) {
            return 1; // Base case: factorial of 0 or 1 is 1
        }
        return n * calculateFactorial(n - 1); // Recursive case
    }

public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;

        // Check if n is within the valid range
        if (n < MINV || n > MAXV) {
            return result; // Return an empty vector if n is out of range
        }

        long long i = 1;
        long long factorial = 1;

        // Generate factorial numbers less than or equal to n
        while (factorial <= n) {
            result.push_back(factorial);
            i++;
            factorial = calculateFactorial(i); // Calculate factorial recursively
        }

        return result;
    }
};

int main() {
    Solution sol;
    long long n;

    cout << "Enter a value for n: ";
    cin >> n;

    vector<long long> result = sol.factorialNumbers(n);

    cout << "Factorial numbers less than or equal to " << n << " are: ";
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}