#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1789/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<ui> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    ui m_gcd = *max_element(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(m_gcd > __gcd(v[i], v[j])) m_gcd = __gcd(v[i], v[j]);
        }
    }
    cout << (m_gcd > 2 ? "No" : "Yes")  << endl; 
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