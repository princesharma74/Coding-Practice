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

    vector<int> v(n);
    unordered_map<int, int> mp; 
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mp.find(v[i]) != mp.end()) ans = min((i - mp[v[i]] + 1), ans);
        mp[v[i]] = i; 
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl; 
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