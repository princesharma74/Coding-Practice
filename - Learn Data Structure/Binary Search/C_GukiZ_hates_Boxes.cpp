#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool check(int t, vector<int> parr, int m){
    int p = parr.size() - 1;
    for(int i = 0; i < m; i++){
        while(p >= 0 && parr[p] == 0) p--;
        int tcpy = t; 
        tcpy -= (p+1);
        while(tcpy > 0){
            if(tcpy >= parr[p]){
                tcpy -= parr[p];
                parr[p] = 0; 
            }
            else{
                parr[p] -= tcpy; 
                tcpy = 0; 
            }
            p--;
        }
    }
    return p < 0; 
}

void solve(){
    int l = 0, r = 1e9; 
    int n, m; 
    cin >> n >> m; 
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i]; 

    while(r - l > 1){
        int mid = (l+r)/2; 
        if(check(mid, v, m)) r = m; 
        else l = m+1; 
    }

    if(check(l, v, m)) cout << l << endl; 
    else if(check(r, v, m)) cout << r << endl; 
    else cout << -1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}