#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int lower_bound(vector<ui> &v, ui k){
    int l = 0, r = v.size() - 1; 
    ui m;
    while(r - l > 0){
        m = (l + r)/2; 
        if(v[m] <= k) r = m;
        else l = m+1; 
    }
    if(v[l] <= k) return l;
    else if(v[r] <= k) return r; 
    return -1;
}

//Problem Link: https://codeforces.com/problemset/problem/706/B
/* Approach: */
void solve(){
    int n; 
    cin >> n;
    vector<ui> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), greater<ui>());
    int q; 
    cin >> q; 
    while(q--){
        int k; 
        cin >> k; 
        int idx = lower_bound(v, k);
        if(idx != -1) cout << (n - idx) << endl; 
        else cout << 0 << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}