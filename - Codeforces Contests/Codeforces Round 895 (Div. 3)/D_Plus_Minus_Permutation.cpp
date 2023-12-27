#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

ll lcm(ll x, ll y){
    return (x*y)/__gcd(x, y);
}

ll nC2(ll n){
    return n*(n+1)/2;
}

void solve(){
    ll n, x, y; 
    cin >> n >> x >> y; 
    ll nx = (n/x - (n/lcm(x, y)));
    ll ny = (n/y - (n/lcm(x, y)));
    cout << nC2(n)-nC2(n-nx)-nC2(ny) << endl;
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