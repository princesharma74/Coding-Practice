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
    ll n, i, j; 
    cin >> n;

    vector<ll> v(n);
    for(i = 0; i < n; i++) cin >> v[i]; 
    i = 0, j = n-1; 
    ll sum1 = 0, sum2 = 0, ans = 0; 
    while(i <= j){
        if(sum1 == sum2){
            ans = max(ans, sum1);
            sum1 += v[i];
            i++; 
        }
        else if(sum1 < sum2){
            sum1 += v[i];
            i++; 
        }
        else{
            sum2 += v[j]; 
            j--; 
        }
    }
    if(sum1 == sum2){ ans = max(ans, sum1);}

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