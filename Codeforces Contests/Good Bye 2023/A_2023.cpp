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
    ll n, k; 
    cin >> n >> k; 
    ll mul = 1; 
    for(ll i = 0; i < n; i++){
        ll a; 
        cin >> a; 
        mul *= a;
    }
    if(2023 % mul || mul > 2023) cout << "NO" << endl;
    else{
        cout << "YES" << endl; 
        cout << (2023/mul) << " ";
        for(ll i = 1; i < k; i++){
            cout << 1 << " ";
        }
        cout << endl; 
    }
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