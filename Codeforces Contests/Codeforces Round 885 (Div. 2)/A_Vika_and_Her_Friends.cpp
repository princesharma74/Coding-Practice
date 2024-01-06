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
    int n, m, k; 
    cin >> n >> m >> k; 
    int x, y; 
    cin >> x >> y; 
    bool ans = true; 
    for(int i = 0; i < k; i++){
        int x1, y1; 
        cin >> x1 >> y1; 
        if((abs(x1-x) + abs(y1-y)) % 2 == 0) ans = false;
    }
    cout << (ans ? "YES" : "NO") << endl; 
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