#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int gNum(int d){
    int num = 2; 
    d--;
    while(d--){
        num= 10*num+3;
    }
    return num; 
}

//Problem Link: https://codeforces.com/contest/1511/problem/B
/* Approach: */
void solve(){
    int a, b, c; 
    cin >> a >> b >> c; 
    int gcdn =  gNum(c);
    int x = gcdn*2; 
    int y = gcdn*3; 
    while(( int(log10(x)) + 1 ) != a) x*=2; 
    while(( int(log10(y)) + 1 ) != b) y*=3; 
    cout << x << " " << y << endl; 
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