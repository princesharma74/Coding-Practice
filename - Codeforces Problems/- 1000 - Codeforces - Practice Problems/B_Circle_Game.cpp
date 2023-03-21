#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1695/B
/* Approach: */
void solve(){
    int n;
    cin >> n; 
    vector<ui> v(n);
    int idx = 0; 
    for (int i = 0; i < n; i++){ 
        cin >> v[i];
        if(v[i] < v[idx]) idx = i;
    }
    if(n&1) cout << "Mike" << endl; 
    else{
        if(idx&1) cout << "Mike" << endl;
        else cout << "Joe" << endl;
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