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
    int m, k, a1, ak; 
    cin >> m >> k >> a1 >> ak; 
    m = m - min(m/k, ak)*k - a1; 
    if(m <= 0) cout << 0 << endl; 
    else{
        int fcy = m/k + m%k; 
        if((k - m%k) <= a1) fcy = min(fcy, m/k + 1);
        cout << fcy << endl; 
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