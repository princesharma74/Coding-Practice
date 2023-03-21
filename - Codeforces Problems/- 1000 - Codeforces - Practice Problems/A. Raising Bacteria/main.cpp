#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/579/A
    /* Approach: */
    ll x; cin >> x; 
    int ans = 0; 
    while(x){
        if(x&1) ans++; 
        x>>=1;
    }
    cout << ans << endl; 
    return 0;
}