#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1430/C
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    cout << 2 << endl; 
    if(n == 2){
        cout << "1 2" << endl; 
        return; 
    }
    for(int i = n, j = n-1; j - 2 > 0 || i - 2 > 0; i-=2, j-=2){
        if (i - 2 > 0){
            cout << (i - 2) << " " << i << endl;
            if(i == n) cout << (i - 1) << " " << (i - 1) << endl;
        }
        if(j-2 > 0) cout << (j-2) << " " << j << endl; 
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