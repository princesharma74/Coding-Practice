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
    int n; 
    cin >> n; 
    // if any coordinate is diagonally opposite quadrant, NO, else YES
    int a = 0, b = 0, c = 0, d = 0; 
    for(int i = 0; i < n; i++){
        int x, y; 
        cin >> x >> y; 
        if(x > 0) a = 1;
        if(x < 0) b = 1;
        if(y > 0) c = 1;
        if(y < 0) d = 1;
    }
    cout << ((a+b+c+d == 4) ? "NO" : "YES") << endl; 
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