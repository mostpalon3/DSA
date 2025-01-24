#include<bits/stdc++.h>
using namespace std;

//Extraction of no.
// int main(){
//     int N = 7789;
//     while(N>0){
//         int ld = N%10;
//         cout<<ld;
//         N = N/10;
//     }
//     }

    //Armstrong number 
bool isArmstrong(int t) {
    int N = t;
    int arm = 0;
    while (N > 0) {
        int ld = N % 10;        // Extract last digit
        arm += (ld * ld * ld);  // Add cube of last digit
        N /= 10;                // Remove last digit
    }
    return arm == t;            // Check if sum equals original number
}

int main() {
    int t;
    cout << "Enter a number to check if it is an Armstrong number: ";
    cin >> t;

    if (isArmstrong(t)) {
        cout << t << " is an Armstrong number." << endl;
    } else {
        cout << t << " is not an Armstrong number." << endl;
    }

    return 0;
}