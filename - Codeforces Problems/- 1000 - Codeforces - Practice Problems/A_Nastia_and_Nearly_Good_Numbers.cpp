#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1521/A
/* Approach: */
void solve(){
    ll A, B; 
    cin >> A >> B; 
    if(B == 1){
        cout << "NO" << endl; 
        return; 
    }
    cout << "YES\n" << A << " " << A*B << " " << (A*B + A) << endl;
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