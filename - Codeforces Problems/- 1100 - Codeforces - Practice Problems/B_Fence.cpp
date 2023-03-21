#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/363/B
/* Approach: */
void solve(){
    int n, k; 
    cin >> n >> k;
    vector<int> v(n+1, 0); 
    for(int i = 1; i <= n; i++){
        int tmp; 
        cin >> tmp; 
        v[i] = v[i-1] + tmp; 
    }
    int mn = INT_MAX, idx = 0; 
    for(int i = 0; i+k <= n; i++){
        if(mn > (v[i+k] - v[i])){
            mn = v[i+k] - v[i];
            idx = i + 1; 
        }
    }

    cout << idx << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}