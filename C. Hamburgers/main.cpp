#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pb, ps, pc; 
ll nb, ns, nc; 
ll cb = 0, cs = 0, cc = 0; 

ll PR(ll x){
    ll p = cb*x;
    ll q = cs*x;
    ll r = cc*x;
    return max(0ll, p-nb)*pb + max(0ll, q-ns)*ps + max(0ll, r-nc)*pc;
}

ll lower_bound(ll rubles){
    ll L = 0, R = 1e13, mid;
    while(R - L > 1){
        mid = (L + R)/2; 
        if(rubles > PR(mid)){
            L = mid + 1; 
        }
        else{
            R = mid; 
        }
    }
    if(PR(L) >= rubles ) return L;
    else if(PR(R) >= rubles) return R; 
    else return -1;
}

int main(){
    string str; 
    cin >> str; 
    for(char x : str){
        if(x=='B') cb++;
        else if(x=='S') cs++;
        else if(x=='C') cc++;
    }
    cin >> nb >> ns >> nc; 
    cin >> pb >> ps >> pc; 
    ll r; 
    cin >> r; 
    cout << lower_bound(r);
    return 0;
}