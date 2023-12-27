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
    int a, b, c, d; 
    cin >> a >> b >> c >> d; 
    int misha = max(3*a/10, a - a*c/250), vasya = max(3*b/10, b - b*d/250); 
    if(misha == vasya) cout << "Tie" << endl; 
    else if(misha > vasya) cout << "Misha" << endl; 
    else cout << "Vasya" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}