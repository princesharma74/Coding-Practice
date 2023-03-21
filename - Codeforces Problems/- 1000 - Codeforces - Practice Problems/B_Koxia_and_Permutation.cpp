#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1770/B
/* Approach: */ 
void solve(){
    int n, k; 
    cin >> n >> k; 
    int i = 1, j = n; 
    while(i <= j){
        for(int l = 0; l < (k-1) && i < j; l++){
            cout << j-- << " ";
        }
        cout << (i++) << " ";
    }
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