#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/546/A
    int k, n, w; 
    cin >> k >> n >> w; 
    int mny = 0;
    for(int i = 1; i <= w; i++){
        mny += (i*k);
    }
    if(n < mny) cout << mny - n << endl; 
    else cout << 0 << endl; 
    return 0;
}