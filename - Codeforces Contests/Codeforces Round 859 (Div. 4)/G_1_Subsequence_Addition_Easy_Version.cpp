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
    ull n; 
    cin >> n; 
    vector<ull> v(n);
    for(ull i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ull sum = v[0];
    if(sum != 1){
        cout << "NO" << endl;
        return;
    }
    else{
        for(ull i = 1; i < n; i++){
            if(sum >= v[i]){
                sum += v[i];
            }
            else{
                cout << "NO" << endl; 
                return; 
            }
        }
        cout << "YES" << endl; 
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