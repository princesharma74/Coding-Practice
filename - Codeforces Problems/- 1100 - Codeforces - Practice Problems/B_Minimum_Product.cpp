#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1409/B
/* Approach: */
void solve(){
    ll a, b, x, y, n, a1, b1;
    cin >> a >> b >> x >> y >> n; 
    if(max(x, a-n) < max(y, b-n)){
        a1 = max(x, a - n);
        n -= (a - max(x, a-n));
        b1 = max(y, b-n);
    }
    else{
        a1 = max(y, b - n);
        n -= (b - max(y, b-n));
        b1 = max(x, a - n);
    }
    cout << (a1*b1) << endl;
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