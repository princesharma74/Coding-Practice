#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool Dtnc(int x){
    int d[10] = {0}; 
    while(x){
        if(d[x%10]){
            return false;
        }
        d[x%10]++;
        x/=10; 
    }
    return true; 
}
//Problem Link: https://codeforces.com/problemset/problem/271/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    do{
        n++;
    }while(!Dtnc(n));
    cout << n << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}