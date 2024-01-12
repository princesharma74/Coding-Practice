#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    ll x1, y1, x2, y2; 
    cin >> x1 >> y1 >> x2 >> y2; 
    if(y2 - y1 < 0) cout << -1 << endl; 
    else{
        if(x1 - x2 + y2 - y1 >= 0){
            cout << x1 - x2 + 2*( y2 - y1 ) << endl; 
        }
        else cout << -1 << endl; 
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