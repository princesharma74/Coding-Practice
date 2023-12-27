#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

bool notPrime[N];

void setPrime(){
    notPrime[0] = 1; 
    notPrime[1] = 1; 
    for(ll i = 2; i <= N; i++){
        if(!notPrime[i]){
            for(ll j = i*2; j <= N; j+= i){
                notPrime[j] = 1; 
            }
        }
    }
}

bool isPrime(ll n){
    return !notPrime[n]; 
}

void solve(){
    ll n; 
    cin >> n; 
    ll st = -1;
    for(ll i = 3; i <= n; i++){
        if(isPrime(i-1) && isPrime(n-i+1)){
            st = i; 
            break; 
        }
    }
    if(st == -1){
        cout << st << endl; 
        return; 
    }
    for(ll i = 0; i < n; i++){
        cout << st++ << " ";
        if(st > n) st = 1; 
    }
    cout << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    setPrime();
    int t = 1;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}