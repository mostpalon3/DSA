#include <bits/stdc++.h>
using namespace std;


//number hashing
// int hash[1e7];//for global , for local 1e6

// void hashing(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i = 0;i<n; i++){
//         cin >> arr[i];
//     }

//     //PreCompute
//     int hash[13] = {0}; //0 to 12
//     for(int i =0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch 
//         cout << "The " << number << " is present " << hash[number] << " times"<< endl;
//     }
// }
// int main(){
//     hashing();
//     return 0;
// }

 //character hashing 
//  int main(){
//     string s;
//     cin >> s;

//     // pre compute
//     int hash[256];//since max 256 char are present 
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;//hash automatically convert to asciii index
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         //fetch
//         cout << hash[c] << endl;
//     }
//     return 0;
//  }


 //hashing number for greater than 1e7-use map or unordered map
 //Ologn in storing & fetching in normal map
 int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // pre compute0
//    map<int , int> mpp;
//    for(int i = 0; i < n; i++){
//     mpp[arr[i]]++;//it wont store the number that dont exist and store in the sorted mannaer
//    }

   //O(N) = O(N*1) - best case , O(N*N) worst case
   //hence the first preference should be this unordered_map
   unordered_map<int , int> mpp;
   for(int i = 0; i < n; i++){//O(N)
    //here the best case is O(1) and worst case O(N)
    //worst case happens due to internal collisons 
    mpp[arr[i]]++;
   }

   //eg by iteration
   for(auto it : mpp){
    cout << it.first << "->" << it.second << endl;
   }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }
    return 0;
 }