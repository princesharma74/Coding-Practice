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
    vector<pair<int, int>> v(n); 
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second; 
        mn = min(v[i].first, mn);
        mx = max(v[i].second, mx);
    }

    for(int i = 0; i < n; i++){
        if(v[i].first <= mn && v[i].second >= mx){
            cout << (i+1) << endl; 
            return; 
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