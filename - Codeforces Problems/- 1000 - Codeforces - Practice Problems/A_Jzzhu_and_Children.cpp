#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/450/A
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<int> v(n);
    for(auto &it : v) cin >> it; 
    int mx_ele = *max_element(v.begin(), v.end());
    int lp = mx_ele/m + min(mx_ele%m, 1);
    int lst_idx = 1; 
    for(int j = 0; j < lp; j++){
        for(int i = 0; i < n; i++){
            if (v[i] > 0 && (v[i] - m) <= 0) lst_idx = (i + 1);
            v[i]-=m; 
        }
    }
    cout << lst_idx << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}