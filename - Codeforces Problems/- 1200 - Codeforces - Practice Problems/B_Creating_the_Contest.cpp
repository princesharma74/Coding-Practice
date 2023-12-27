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
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 1, ct = 1; 
    for(int i = 1; i < n; i++){
        if(v[i-1]*2 >= v[i]) ct++; 
        else{
            ans = max(ans, ct); 
            ct = 1;
        }
    }
    ans = max(ans, ct); 
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}