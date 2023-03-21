#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/82/A
/* Approach: */
void solve(){
    string names[] = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    double n; 
    cin >> n; 
    ll p = ceil(log2(n/5 + 1)) - 1;
    ll n1 = n - (5*( (1<<p) -1 )); 
    ll d = 1<<p;
    ll ans = n1/d + min(n1%d, 1ll);
    cout << names[ans] << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}