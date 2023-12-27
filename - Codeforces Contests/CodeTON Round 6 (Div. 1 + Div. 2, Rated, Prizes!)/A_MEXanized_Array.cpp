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
    int n, k, x;
    cin >> n >> k >> x; 
    if((k-1) > x || k > n){
        cout << -1 << endl; 
        return; 
    }
    int sum = ( k*(k-1)/2 ); 
    if(x == k) x--; 
    sum += (x*(n-k)); 
    cout << sum << endl; 
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