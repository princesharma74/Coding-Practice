#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1765/M
/* Approach: */
void solve(){
    ll n; 
    cin >> n;
    int a = 1;
    for(ll i = 2; i*i <= n; i++){
        if(n%i == 0){
            a = n/i;
            break; 
        }
    }
    cout << a << " " << (n - a) << endl; 
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