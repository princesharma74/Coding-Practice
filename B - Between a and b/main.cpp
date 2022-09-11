#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    ll a, b, x; 
    cin >> a >> b >> x; 
    ll q = a/x; 
    if(x*q != a) q++; 
    cout << (b/x) - q + 1<< endl; 
    return 0;
}