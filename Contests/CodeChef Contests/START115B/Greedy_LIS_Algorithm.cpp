#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    int n, x; 
    cin >> n >> x; 
    if(x == 0){
        for(int i = 1; i <= n; i++) cout << i << " \n"[i==n];
        return;
    }
    if(x > n-2){
        cout << -1 << endl; 
        return;
    }
    cout << n << " "; 
    int l = 1;
    for(int i = 0; i < x; i++){
        cout << l++ << " "; 
    }
    int ct = n-1;
    for(int i = 0; i < n-x-1; i++) cout << ct-- << " ";
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