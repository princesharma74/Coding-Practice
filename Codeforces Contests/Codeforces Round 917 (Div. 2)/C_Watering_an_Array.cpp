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

    int ans = 0; 

    // 2, 12, 112, 1112....
    for(int i = 0; i < min(2*n+1, d); i++){
        // second operation
        int ct = 0;
        for(int j = 0; j < n; j++){
            if(j+1 == a[j]) ct++; 
        }
        if(d-i-1 > 0) ct += ((d-i-1)/2);
        ans = max(ans, ct);

        int b = v[i%k];
        // first operation
        for(int j = 0; j < b; j++) a[j]++;
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