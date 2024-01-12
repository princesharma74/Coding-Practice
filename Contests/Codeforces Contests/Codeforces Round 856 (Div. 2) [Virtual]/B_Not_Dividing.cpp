#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1794/problem/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<ui> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) v[i]++;
    }
    for(int i = 0; i < n-1; i++){
        if(v[i] <= v[i+1] && v[i+1] % v[i] == 0) v[i+1]++;
    }
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl; 
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