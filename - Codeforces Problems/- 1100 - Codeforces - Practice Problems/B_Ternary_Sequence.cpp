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
    int n0a, n1a, n2a;
    int n0b, n1b, n2b;
    cin >> n0a >> n1a >> n2a; 
    cin >> n0b >> n1b >> n2b; 

    int sum = 0; 
    sum += min(n2a, n1b)*2; 
    int sv; 
    sv = min(n2a, n1b);
    n2a -= sv; 
    n1b -= sv; 

    sv = min(n2b, n0a); 
    n2b -= sv;
    n0a -= sv;
    sv = min(n2b, n2a);
    n2b -= sv; 
    n2a -= sv; 
    sum -= min(n2b, n1a)*2; 
    cout << sum << endl; 
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