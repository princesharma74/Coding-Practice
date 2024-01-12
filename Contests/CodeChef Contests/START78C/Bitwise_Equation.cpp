#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://www.codechef.com/START78C/problems/BITEQU
/* Approach: */

const unsigned ll msk = LLONG_MAX >> 4;

void solve(){
    unsigned ll n;
    cin >> n;
    unsigned ll a = (msk & (n+1)), b = (msk & ~(n+1)), c = (msk), d = (~n)&msk; 
    cout << a << " " << b << " " << c << " " << d << endl;
    // cout << (((a & b) | c) ^ d) << endl; 
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