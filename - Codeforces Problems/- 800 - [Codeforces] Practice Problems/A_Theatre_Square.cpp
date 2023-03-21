#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1/A
/* Approach: */
void solve(){
    ull n, m, a; 
    cin >> n >> m >> a; 
    ull l = n/a + min(n%a, (ull)1), b = m/a + min(m%a, (ull)1);
    cout << (l*b) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}