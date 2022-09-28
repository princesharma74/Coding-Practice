#include <bits/stdc++.h>
#define ll long long

using namespace std; 

vector<ll> getPrimes(ll N){
    vector<ll> v; 
    for(ll i = 2; i <= N; i++){
        bool b = true; 
        
        ll j = 2; 
        while(j != i){
            if(i%j == 0){
                b = false;
                break; 
            }
            j++; 
        }
        if(b) v.push_back(i); else continue;
    }
    return v; 
}

int main(){
    const unsigned int M = 1000000007;
    ll N; 
    cin >> N;
    vector<ll> v =  getPrimes(N);
    ll ans = 1; 
    ll Ni, out; 
    for(ll &p : v){
        Ni = N; 
        out = 0;
        while(Ni/p){
            out+=Ni/p; 
            Ni/=p; 
        }
        ans = (ans*(out + 1))%M; 
    }
    cout << ans%M << endl; 
    return 0; 
}