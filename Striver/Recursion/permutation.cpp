#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& arr, vector<vector<int>>& result, vector<int>& temp, vector<bool>& used) {
    if (temp.size() == arr.size()) {
        result.push_back(temp);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (used[i]) continue;
        used[i] = true;
        temp.push_back(arr[i]);
        backtrack(arr, result, temp, used);
        temp.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permutation(vector<int> arr) {
    vector<vector<int>> result;
    vector<int> temp;
    vector<bool> used(arr.size(), false);
    backtrack(arr, result, temp, used);
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