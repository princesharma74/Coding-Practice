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
    ll ct = 0; 
    ll sum = 0; 
    for(ll i = 0; i < n; i++){
        ll a; 
        cin >> a; 
        sum += a; 
        if(a&1) ct++; 
        ll ans = sum;
        ans -= (ct/3); 
        if(ct%3 == 1) --ans;
        cout << (i == 0 ? sum : ans) << " ";
    }
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