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
    int n, s, t; 
    cin >> n >> s >> t; 
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        if(s == t){
            cout << i << endl; 
            return;
        }
        else{
            s = v[s];
        }
    }
    cout << -1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}