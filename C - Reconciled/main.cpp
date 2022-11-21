#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MAX = 1000000007;

ll fact(ll x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fact(x - 1) % MAX;
    }
}

int main(){
    int N, M; 
    cin >> N >> M; 
    ll ans = fact(N)*fact(M);
    if(N==M) cout << 2*ans%MAX <<endl; 
    else if(N == M+1 || M == N+1) cout << (ans)%MAX << endl; 
    else cout << 0 << endl; 
    return 0;
}