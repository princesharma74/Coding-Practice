#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1713/B
/* Approach: */
void solve(){
    ui n; 
    cin >> n; 
    vector<ui> v(n);
    for(ui i = 0; i < n; i++) cin >> v[i];

    ui i = 0, l = 0;
    while (i+1 < n && v[i + 1] >= v[i]){
        l++;
        i++;
    }

    ui j = n-1, r = 1;
    while (j > 0 && v[j - 1] >= v[j]){ 
        r++;
        j--;
    }
    if((r+l) >= n) cout << "YES" << endl; 
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