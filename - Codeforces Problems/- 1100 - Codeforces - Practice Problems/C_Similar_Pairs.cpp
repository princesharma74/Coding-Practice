#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1360/C
/* Approach: */
void solve(){
    int n; 
    cin >> n;
    vector<int> v(n);
    int nO = 0, nE = 0; 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]&1) nO++;
        else nE++;
    }
    sort(v.begin(), v.end());
    bool isC = false; 
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] == 1){
            isC = true; 
            break; 
        }
    }
    if(!( nO&1 ) && !( nE&1 )) cout << "YES" << endl; 
    else{
        if(isC) cout << "YES" << endl; 
        else cout << "NO" << endl; 
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