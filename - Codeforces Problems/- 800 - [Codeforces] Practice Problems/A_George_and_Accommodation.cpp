#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/467/A
/* Approach: */
void solve(){
    int sum = 0; 
    int n; 
    cin >> n; 
    while(n--){
        int p, q; 
        cin >> p >> q; 
        if((q-p) > 1) sum++;
    }
    cout << sum << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}