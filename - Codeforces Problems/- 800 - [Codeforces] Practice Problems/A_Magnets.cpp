#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/344/A
/* Approach: */
void solve(){
    string prev = "", str; 
    int n; 
    cin >> n; 
    int ct = 0; 
    for(int i = 0; i < n; i++){
        cin >> str; 
        if(str != prev) ct++; 
        prev = str; 
    }
    cout << ct << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}