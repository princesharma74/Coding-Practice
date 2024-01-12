#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int l, r; 
    cin >> l >> r; 
    int mg;
    for(int i = 2; i <= 5000; i++){
        mg = (r - i)%i;
        if(mg <= (r - l)){
            if(r - i - mg > 0) cout << i << " " << (r - i - mg) << endl; 
            else cout << -1 << endl; 
            return;
        }
    }
    cout << -1 << endl; 
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