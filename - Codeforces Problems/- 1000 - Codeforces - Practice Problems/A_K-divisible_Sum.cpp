#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1476/A
/* Approach: */
void solve(){
    ll n, k, mx;  
    cin >> n >> k; 
    ll L = 1, R = (n/k) + 1; 
    while(R - L > 0){
        ll mid = (R + L)/2; 
        if((mid*k)/n) R = mid; 
        else L = mid + 1; 
    }
    if((L*k)/n) k = L*k; 
    else if((R*k)/n) k = R*k;
    cout << (k/n) + (min(k%n, 1ll)) << endl; 
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