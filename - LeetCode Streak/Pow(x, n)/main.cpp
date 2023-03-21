#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://leetcode.com/problems/powx-n/
/* A    pproach: */
double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n == INT_MIN) {
        x = x * x;
        n = n / 2;
    }
    if (n < 0) return 1.0 / myPow(x, -n);
    double res = 1;
    while (n > 0) {
        if (n & 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

void solve(){
    cout << myPow(2.0, -2) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}