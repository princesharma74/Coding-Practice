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
    int n, k, d, w; 
    cin >> n >> k >> d >> w; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int l = v[0], r = v[0] + d; 
    int ans = 1, cr = 0; 
    for(int i = 0; i < n; i++){
        if(( (v[i] >= l && v[i] <= r) || (( v[i] + w ) >= l && ( v[i] + w ) <= r) ) && cr < k) cr++; 
        else{
            if( cr < k && ( ( v[i] - w ) >= l && ( v[i] - w ) <= r )){
                cr++; 
            }
            else{
                ans++; 
                cr = 1; 
                l = v[i]; r = v[i]+d;
            }
        }
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