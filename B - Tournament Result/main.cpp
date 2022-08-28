// Problem Link: https://atcoder.jp/contests/abc261/tasks/abc261_b
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a, b; 
    cin >> a >> b; 
    vector<string> arr(b); 
    for(int i = 0; i < a; i++){
        cin >> arr[i]; 
    }

    for(int i = 0; i < a; i++){
        cout << arr[i] << endl; 
    }

    return 0;
}