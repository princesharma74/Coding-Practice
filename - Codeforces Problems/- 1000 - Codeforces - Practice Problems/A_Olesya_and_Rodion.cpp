#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/584/A
/* Approach: */
void solve(){
    int n, t; 
    cin >> n >> t; 
    if(n >= 4){
        cout << 7560; 
        for(int i = 0; i < n-4; i++) cout << 0;
        cout << endl;
    }
    else{
        bool found = false; 
        int num = pow(10,n-1);
        int lim = 0, wt = 1; 
        while(n--){
            lim+=wt*9; 
            wt*=10; 
        }
        while(num <= lim){
            if(num%t == 0){
                found = true;
                break;
            }
            num++; 
        }
        found ? cout << num << endl : cout << -1 << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}