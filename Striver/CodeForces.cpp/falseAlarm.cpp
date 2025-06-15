#include <bits/stdc++.h>
using namespace std;

string falseAlarm(int doors, int buttonTime, vector<int> &arr)
{
    bool trigger = false;
    while (doors)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                if (buttonTime)
                {
                    trigger = true;
                    doors--;
                    buttonTime--;
                    continue;
                }
            }
            else if(trigger){
                if(buttonTime){
                    buttonTime--;
                }else{
                    trigger = false;
                }
            }
            if (arr[i] == 0)
            {
                doors--;
                continue;
            }
            return "NO";
        }
    }
    return "YES";
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

        string ans = falseAlarm(n,x,arr);
        cout << ans << endl;
    }
}