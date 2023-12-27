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
    int a, b, c; 
    cin >> a >> b >> c; 
    int sum = (a + b + c); 
    int l = max((sum/2) + (sum&1), a);
    int r = sum - max(((sum/2) + (sum&1)), a);
    cout << (l > r ? max(r - b + 1, 0) : max(r - b, 0)) << endl; 
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