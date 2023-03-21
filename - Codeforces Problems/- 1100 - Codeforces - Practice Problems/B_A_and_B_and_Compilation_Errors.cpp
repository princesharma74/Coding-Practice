#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/519/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<ll> v1(n);
    for(int i = 0; i < n; i++) cin >> v1[i];
    sort(v1.begin(), v1.end());
    vector<ll> v2(n-1);
    for(int i = 0; i < n-1; i++) cin >> v2[i];
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++){
        if(v1[i] != v2[i]){
            cout << v1[i] << endl; 
            break; 
        }
    }
    vector<ll> v3(n-2);
    for(int i = 0; i < n-2; i++) cin >> v3[i];
    sort(v3.begin(), v3.end());
    for(int i = 0; i < n; i++){
        if(v2[i] != v3[i]){
            cout << v2[i] << endl; 
            break; 
        }
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