#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/69/A
    /*
    Approach: 
    */
    int f; 
    cin >> f;
    int a = 0, b = 0, c = 0; 
    while(f--){
        int _a, _b, _c; 
        cin >> _a >> _b >> _c; 
        a += _a; b += _b; c += _c;
    }
    if(a || b || c) cout << "NO" << endl; 
    else cout << "YES" << endl; 
    return 0;
}