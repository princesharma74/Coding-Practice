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
    ui n, c; 
    cin >> n >> c; 
    vector<ui> v(n);
    for(ui i = 0; i < n; i++){
        ui tmp; 
        cin >> tmp; 
        v[i] = i + tmp + 1;
    }
    sort(v.begin(), v.end());
    ui ans = 0; 
    for(ui i = 0; i < n; i++){
        if(v[i] <= c){
            ans++; 
            c -= v[i];
        }
        else break; 
    }
    cout << ans << endl; 
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