#include <bits/stdc++.h>
using namespace std;

bool falseAlarm(int doors, int buttonTime, vector<int> &arr)
{
    while (doors)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                if (buttonTime)
                {
                    buttonTime = 0;
                    for (int j = i; j < i + buttonTime; j++)
                    {
                        arr[j] == 0;
                    }
                }
            }
            if (arr[i] = 0)
            {
                doors--;
                continue;
            }
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool ans = falseAlarm(n,x,arr);
        cout << ans << endl;
    }
}