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
    string a, b; 
    cin >> a >> b;
    int n = a.length(); 
    map<int, int> _0, _1; 
    int zp = -1, lp = -1; 
    for(int i = 0; i < n; i++){
        if(!( (a[i] - '0') | (b[i] - '0') )){
            if(i == 0) zp = 0;
            if(i == n-1) lp = 0; 
            _0[i]++;
        } 
        if((a[i] - '0') & (b[i] - '0')){
            if(i == 0) zp = 1;
            if(i == n-1) lp = 1; 
            _1[i]++; 
        }
    }
    if(zp != -1 && lp != -1){
        if(zp == lp) cout << "YES" << endl; 
        else{
            bool check = false; 
            for(auto it : _0){
                if(_1[it.first+1]) check = true; 
            }
            cout << (check ? "YES" : "NO") << endl; 
        }
    }
    else cout << "NO" << endl; 

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