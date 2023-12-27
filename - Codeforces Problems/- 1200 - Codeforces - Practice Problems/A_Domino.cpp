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
    int dp = 0; 
    int s1 = 0, s2 = 0; 
    for(int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        if(a%2 != b%2) dp++;
        s1 += a; 
        s2 += b; 
    }
    if(s1%2 == 0 && s2%2 == 0) cout << 0 << endl; 
    else if(s1%2 == 1 && s2%2 == 1){
        if(dp > 0) cout << 1 << endl; 
        else cout << -1 << endl; 
    }
    else cout << -1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}