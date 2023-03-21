#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/313/B
/* Approach: */
void solve(){
    string str; 
    cin >> str; 
    int arr[str.length() + 1] = {0};
    int ct = 0; 
    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i+1]) ct++;
        arr[i+1] = ct; 
    }

    int q; 
    cin >> q;
    while(q--){
        int l, r; 
        cin >> l >> r; 
        cout << (arr[r-1] - arr[l-1]) << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}