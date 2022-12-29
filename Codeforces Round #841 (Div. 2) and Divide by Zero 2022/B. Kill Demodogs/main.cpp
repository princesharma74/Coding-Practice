/*
Problem Link: https://codeforces.com/contest/1731/problem/B
Approach: 
Make a series as 
summation of i(i + (i+1)) + n*n
=> n(n-1)(2n-1)/3 + n(n-1)/2 + n*n
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 7e9;

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n; 
        n%=mod;
        ll pt1 = (n*(n-1))%mod;
        ll pt2 = pt1/2;
        pt1 = ( ( pt1*( (2*n%mod) - 1 ) )%mod )/3;
        cout << ( ( ( (pt1 + pt2)%mod + (n*n)%mod )%mod )*2022 )%mod << endl; 
    }
    return 0;
}