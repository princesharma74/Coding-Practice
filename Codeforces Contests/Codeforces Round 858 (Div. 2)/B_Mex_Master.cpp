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
    int n; 
    cin >> n; 
    int zr = 0;
    bool _0 = false, _1 = false, O = false;
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        if(tmp != 0 && tmp != 1) O = true; 
        if(tmp == 0){
            _0 = true; 
            zr++; 
        }
        else if(tmp == 1){
            _1 = true;
        }
    }
    if((n-zr) >= (zr-1)) cout << 0 << endl; 
    else{
        if(_0 && _1 && !O) cout << 2 << endl; 
        else cout << 1 << endl; 
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