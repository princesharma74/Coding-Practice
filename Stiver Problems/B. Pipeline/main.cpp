#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int o, m;
long long n,k=1;

int main(){
    cin >> n >> m;
    while (m - o && k < n)
        o++, k += m - o;
    if (k >= n)
        cout << o;
    else
        cout << -1;
}

/*
int main(){
    ll n, p; 
    cin >> n >> p; 
    ll x = 1, ct = 0;
    while(x != n && p >= 2){
        if(p <= (n - x + 1)){
            x += (p - 1);
            ct +=1; 
        }
        p--; 
    }
    cout << ( x == n ? ct : -1) << endl; 
    return 0;
}
*/