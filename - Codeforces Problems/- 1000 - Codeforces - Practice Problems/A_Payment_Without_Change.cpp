#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1256/A
/* Approach: */
void solve(){
    ll a, b, n, s; 
    cin >> a >> b >> n >> s; 
    if (s % n <= b && 1ll * a * n + b >= s) cout << "YES" << endl; 
    else  cout << "NO" << endl; 
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