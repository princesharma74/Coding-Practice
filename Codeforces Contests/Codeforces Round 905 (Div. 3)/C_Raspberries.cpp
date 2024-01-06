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
    int n, k; 
    cin >> n >> k;
    
    int ans = 1e9, od = 0;
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp;
        if(tmp%2) od++;
        if(tmp%k == 0){
            ans = min(0,ans);
        }
        else{
            ans = min(ans, (k - (tmp%k)));
        }
    }
    if(od >= 2 && k == 4) ans = min(ans, 2);
    if((n-od) >= 2 && k == 4) ans = 0;
    if((n-od) > 0 && od > 0 && k == 4) ans = min(ans, 1);
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