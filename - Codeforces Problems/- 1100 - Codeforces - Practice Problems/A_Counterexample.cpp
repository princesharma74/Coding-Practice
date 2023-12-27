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
    ll a, b;
    cin >> a >> b;
    if(a%2 == 0 && (b - a) >= 2) cout << a << " " << (a+1) << " " << (a+2) << endl;
    else if(a%2 == 1 && (b-a) >= 3) cout << (a+1) << " " << (a+2) << " " << (a+3) << endl;
    else cout << -1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}