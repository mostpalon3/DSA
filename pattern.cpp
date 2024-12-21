#include<bits/stdc++.h>
#include<string.h>

using namespace std;
// Pattern is based on nested loop
int main(){
    //Pattern 1
    // int num;
    // cin >> num;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<num;j++){
    //         cout<<"*";
    //     }
    //     cout << endl;
    // }

    //Pattern 2
    // int num;
    // cin >> num;
    // for(int i=0;i<num;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Pattern 3
    // int num;
    // cin >> num;
    // for(int i=0;i<num;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //Pattern 4
    // int num;
    // cin >> num;
    // for(int i=0;i<num;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

    //Patetrn 5
    // int num;
    // cin >> num;
    // for (int i=0; i<num;i++){
    //     for(int j=0;j<num-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Pattern 6
    // int num;
    // cin >> num;
    // for (int i=0; i<num;i++){
    //     for(int j=0;j<num-i;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    //Pattern 7
    // int num;
    // cin >> num ;
    // for (int i = 0; i < num; i++)
    // {
    //     for(int j=0;j<num-i-1;j++){
    //             cout<<" ";
    //     }
    //     for(int k=0;k<2*i+1;k++){
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }

    //Pattern 8
    // int num;
    // cin >> num ;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < 2*(num-i-1)+1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // pattern 9
    // int num;
    // cin >> num ;
    // for (int i = 0; i < num; i++)
    // {
    //     for(int j=0;j<num-i-1;j++){
    //             cout<<" ";
    //     }
    //     for(int k=0;k<2*i+1;k++){
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }
    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < 2*(num-i-1)+1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Shortened 
    // int num;
    // cin >> num;

    // // Upper part
    // for (int i = 0; i < num; i++) {
    //     cout << string(num - i - 1, ' ') + string(2 * i + 1, '*') << endl;
    // }

    // // Lower part
    // for (int i = 0; i < num; i++) {
    //     cout << string(i, ' ') + string(2 * (num - i - 1) + 1, '*') << endl;
    // }

    //pattern 10
    // int num;
    // cin >> num;

    // for (int i = 0; i < num; i++)
    // {
    //     cout << string(i+1,'*') <<endl;
    // }
    // for (int i = 0; i < num-1; i++)
    // {
    //     cout << string(num-1-i,'*')<<endl;
    // }
    
    //pattern 11
    // int num;
    // cin >> num;

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         if((i+j) % 2 == 0){
    //             cout<< 1;
    //         }
    //         else{
    //             cout<<0;
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //Pattern 12
    // int num ;
    // cin>>num ;
    // for (int i = 0; i < num; i++)
    // {
    //     for (int k = 0; k < i+1; k++)
    //     {
    //         cout<<k+1;
    //     }
    //     for (int l = 0; l < 2*(num-i-1); l++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<<i-j+1;
    //     }
    //     cout<<endl;
    // }

    //pattern 13
    // int num ;
    // int k=0;
    // cin>>num ;
    // for (int i=0; i<num;i++){
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         k++;
    //         cout << k ;
    //     }
    //     cout<<endl;
    // }

    //pattern 14
    // int num ;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     char ch = 64;
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         ch++;
    //         cout << ch;
    //     }
    //     cout<<endl;
    // }

    //Pattern 15
    // int num ;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     char ch = 64;
    //     for (int j = 0; j < num-i; j++)
    //     {
    //         ch++;
    //         cout << ch;
    //     }
    //     cout<<endl;
    // }

    //pattern 16
    // int num ;
    // char ch = 64;
    // cin>>num;
    // for (int i = 0; i < num; i++)
    // {
    //     ch++;
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout<<endl;    
    // }
    
    

}