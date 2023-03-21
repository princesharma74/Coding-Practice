#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

const int N = 1e5; 
int hsh[N];

//Problem Link: https://codeforces.com/problemset/problem/368/B
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<int> v(n);
    vector<int> pref(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ct = 0;
    for(int i = n-1; i >= 0; i--){
        if(!hsh[v[i]]){
            hsh[v[i]]++;
            ct++;
        }
        pref[i] = ct; 
    }
    
    while(m--){
        int l; 
        cin >> l; 
        cout << pref[l-1] << endl; 
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