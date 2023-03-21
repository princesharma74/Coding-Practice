#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/118/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    for(int i = 0; i < 2*n + 1; i++){
        int p = 0; 
        for(int j = 0; j < 2*n + 1; j++){
            if(j >= (abs(n-i)) && j <= (2*n - abs(n-i))){
                cout << (j >= n ? p-- : p++) << (j != (2*n - abs(n-i)) ? " " : "");
            }
            else if(j < abs(n-i)) cout << "  ";
        }
        cout << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}