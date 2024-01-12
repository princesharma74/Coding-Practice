#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int a, b, c, d; 
        cin >> a >> b >> c >> d; 
        int itr = min(b, d) - max(a, c) + 1;
        int ans = (b - a + 1) + (d - c + 1);
        if(itr > 0) ans -= itr;
        cout << ans << endl; 
    }
    return 0;
}