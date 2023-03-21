#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1793/B
/* Approach: */
void solve(){
    ll x, y; 
    cin >> x >> y; 
    cout << (x-y)*2 << endl; 
    for(int i = x; i >= y; i--) cout << i << " ";
    for(int i = y+1; i < x; i++) cout << i << " ";
    cout << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}