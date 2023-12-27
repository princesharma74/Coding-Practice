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
        int n, x, tmp;
        cin >> n >> x;
        int s = 0;
        for (int i = 0; i < 3*n; i++) {
            cin >> tmp; 
            if ((x | tmp) == x) s |= tmp;
        }
        if (s == x) cout << "Yes\n";
        else cout << "No\n";
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