#include <iostream>
using namespace std;

const int MOD = 1e9 + 7 ;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K;
    cin >> K;

    if(K%2==0||K==1){
        cout << 0 << '\n';
        return 0;

    }

    long long res = 1;
    for(int i = 2; i <=K-1;i += 2)
        res = (res*i)%MOD;

    cout <<res<<'\n';
    return 0;
}