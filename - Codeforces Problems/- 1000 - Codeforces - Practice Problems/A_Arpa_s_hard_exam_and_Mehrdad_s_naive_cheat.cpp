#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/742/A
/* Approach: */
void solve(){
    int arr[4] = {6, 8, 4, 2};
    ll n; 
    cin >> n;
    if(n) cout << arr[n%4] << endl; 
    else cout << 1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}