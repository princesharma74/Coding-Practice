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
    int n; 
    cin >> n; 
    vector<int> v(n), cpy(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cpy = v; 
    sort(v.begin(), v.end());
    bool ans = true; 
    for(int i = 0; i < n; i++){
        if(v[i]%2 != cpy[i]%2){
            ans = false; 
            break;
        }
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