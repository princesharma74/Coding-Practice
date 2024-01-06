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
    vector<int> v(n+1, 0); 
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i-1];
    }
    int l = 1, r = n, m, gsum;
    while(l < r){
        m = (r - l + 1)/2;

        cout << "? " << (m-l+1) << " "; for(int i = l; i <= m; i++) cout << i << " \n"[i==m];
        cout.flush();
        cin >> gsum; 

        if(( v[m] - v[l-1] ) != gsum) r = m; 
        else l = m+1;
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