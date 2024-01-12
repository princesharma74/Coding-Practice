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
    int n, a, q; 
    cin >> n >> a >> q; 
    int mx = a, pls = 0; 
    int cpy = a;
    for(int i = 0; i < q; i++){
        char c; 
        cin >> c; 
        mx = max((c == '-' ? --cpy : ++cpy), mx); 
        if(c == '+') pls++;
    }
    if(mx >= n) cout << "YES" << endl; 
    else if(pls >= (n-a)) cout << "MAYBE" << endl; 
    else cout << "NO" << endl; 
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