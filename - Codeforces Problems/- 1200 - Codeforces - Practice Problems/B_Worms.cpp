#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/474/B
/* Approach: */
void solve(){
    ui n; 
    cin >> n; 
    vector<ui> v(n);
    ui sum = 0; 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        v[i] = sum;
    }
    ui m; 
    cin >> m; 
    while(m--){
        ui q; 
        cin >> q; 
        int l = 0, r = n-1, m; 
        while(r > l){
            m = (r + l)/2; 
            if(v[m] < q) l = m+1; 
            else r = m; 
        }
        if(v[l] >= q) cout << (r+1) << endl; 
        else if(v[r] >= q) cout << (l+1) << endl; 
        else cout << -1 << endl; 
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