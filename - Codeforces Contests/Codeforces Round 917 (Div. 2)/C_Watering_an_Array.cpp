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
    int n, k, d;
    cin >> n >> k >> d; 
    vector<int> a(n), v(k); 
    for(int i = 0; i < n; i++) cin >> a[i]; 
    for(int i = 0; i < k; i++) cin >> v[i]; 

    // 2
    int ans = 0; 
    for(int j = 0; j < n; j++){
        if(j+1 == a[j]) ans++; 
    }
    if(d-1 > 0) ans += ((d-1)/2);

    // 12, 112, 1112....
    for(int i = 1; i <= min(2000, d-1); i++){
        int ct = 0; 
        int b = v[(i-1)%k];
        // first operation
        for(int j = 0; j < b; j++){
            a[j]++;
        }
        if(d-i > 0){
            // second operation
            for(int j = 0; j < n; j++){
                if(j+1 == a[j]) ct++; 
            }
            if(d-i-1 > 0) ct += ((d-i-1)/2);
            ans = max(ans, ct);
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