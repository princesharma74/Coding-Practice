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
    int n, k; 
    cin >> n >> k; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    if(n == 1) cout << 0 << endl; 
    else{
        sort(v.begin(), v.end());
        vector<int> st; 
        for(int i = 0; i < n-1; i++){
            st.push_back(v[i+1] - v[i]);
        }
        int sz = 0, ct = 0;
        for(int i = 0; i < st.size(); i++){
            if(st[i] <= k) ct++; 
            else{
                sz = max(sz, ct);
                ct = 0;
            }
        }
        sz = max(sz, ct);
        cout << (n - sz - 1) << endl; 
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