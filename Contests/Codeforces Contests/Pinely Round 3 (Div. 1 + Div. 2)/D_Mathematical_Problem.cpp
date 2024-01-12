#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    ll n; 
    cin >> n; 
    if(n == 1){
        cout << 1 << endl; 
        return;
    }
    n = (n/2) - 1;
    for(ll i = 0; i <= n; i++){
        ll num = 1; 
        for(ll j = 0; j < i+1; j++) num *= 10;
        num += 3;
        for(ll j = 0; j < n-i; j++) num *= 10;
        cout << (ll)pow(num, 2) << endl;
    }
    for(ll i = 0; i <= n; i++){
        ll num = 3; 
        for(ll j = 0; j < i+1; j++) num *= 10;
        num += 1;
        for(ll j = 0; j < n-i; j++) num *= 10;
        cout << (ll)pow(num,2) << endl;
    }
    ll num = 14; 
    for(ll i = 0; i < n; i++) num *= 10;
    cout << (ll)pow(num,2) << endl;
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