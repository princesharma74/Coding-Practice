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
    int n, m; 
    cin >> n >> m; 
    vector<int> a(n), b(m);
    int x1 = 0, x2 = 0; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
        x1 ^= a[i];
    }
    int B = 0; 
    for(int i = 0; i < m; i++){
        cin >> b[i];
        B |= b[i];
    }
    for(int i = 0; i < n; i++){
        x2 ^= (a[i]|B);
    }
    if(n&1) cout << x1 << " " << x2 << endl; 
    else cout << x2 << " " << x1 << endl; 
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