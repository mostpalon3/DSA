// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;


// // } Driver Code Ends

// // User function template for C++
// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int getSecondLargest(vector<int> &arr) {
//         int n = arr.size();
//         int largest = arr[0];
//         int second_largest = -1;
//         if(n < 2 || n > 1e5) return -1;
//         for(int i = 0; i < n; i++){
//             if(arr[i] < 1 || arr[i] > 1e5) return -1;
//             if(arr[i] > largest){
//                 second_largest = largest;
//                 largest = arr[i];
//             }
//             else if(arr[i] > second_largest && arr[i] != largest){
//                 second_largest = arr[i];
//             }
//         }
//         return second_largest;
//     }
// };


// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         Solution ob;
//         int ans = ob.getSecondLargest(arr);
//         cout << ans << endl;
//         cout << "~" << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends