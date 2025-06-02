#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& arr, int index, vector<vector<int>>& result) {
    if (index == arr.size()) {
        result.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);                // Swap current index with i
        permute(arr, index + 1, result);         // Recurse for next index
        swap(arr[index], arr[i]);                // Backtrack (restore original order)
    }
}

vector<vector<int>> permutation(vector<int> arr) {
    vector<vector<int>> result;
    permute(arr, 0, result);
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> answer = permutation(arr);

    for (auto& vec : answer) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}